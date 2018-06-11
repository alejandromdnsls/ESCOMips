library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library work;
use work.ESCOMipsPackage.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ESCOMips is
	Generic(
		n : integer := 16
	);
	Port(
			RCLR : in std_logic;
			RCLK : in std_logic;
			salida : out std_logic_vector (7 downto 0);	--modficacion
			count_prog : out std_logic_vector (7 downto 0) --modificacion
		);

end ESCOMips;

architecture Behavioral of ESCOMips is

	signal CLR : std_logic;
	signal CLK : std_logic;
	
	--Señales de Pila
	signal instruccion : std_logic_vector(24 downto 0);
	
	signal microinstruccion : std_logic_vector (19 downto 0);
	
	--Señales de microinstruccion
	signal LF : std_logic;
	signal FLAGS : std_logic_vector(3 downto 0); ---ALU
	signal DIR : std_logic;
	signal WR : std_logic;
	signal SHE : std_logic;
	signal SWD : std_logic;
	signal SR : std_logic; 
	signal SR2 : std_logic;
	signal SEXT : std_logic;
	signal ALUOP : std_logic_vector(3 downto 0);
	signal WD : std_logic;
	signal SDMD : std_logic;
	signal SDMP : std_logic;
	signal UP : std_logic;
	signal DW : std_logic;
	signal WPC : std_logic;
	signal SOP1 : std_logic;
	signal SOP2 : std_logic;
	
	--Señales de Archivo de Registros
	signal READ_DATA1 : std_logic_vector (n-1 downto 0);
	signal READ_DATA2 : std_logic_vector (n-1 downto 0);
	
	--Señales de ALU
	signal RES : std_logic_vector (n-1 downto 0);
	
	--Señales de Mem de Datos
	signal MEMDATOS_OUT: std_logic_vector(n-1 downto 0);
	
	--Señales Mem de Programa
	signal PC: std_logic_vector(n-1 downto 0);
	signal SP: std_logic_vector(3 downto 0);
	
	--EXTENSORES
	signal SIGNO: std_logic_vector(n-1 downto 0);
	signal DIRECCION: std_logic_vector(n-1 downto 0);
	
	--Multiplexores
	signal SSWD : std_logic_vector(n-1 downto 0);
	signal SSR : std_logic_vector(n-1 downto 0);
	signal SSR2 : std_logic_vector(3 downto 0);
	signal SSOP1 : std_logic_vector(n-1 downto 0);
	signal SSOP2 : std_logic_vector(n-1 downto 0);
	signal SSEXT : std_logic_vector(n-1 downto 0);
	signal SSDMD : std_logic_vector(n-1 downto 0);
	signal SSDMP : std_logic_vector(n-1 downto 0);
	

begin
	
	CLR <= RCLR;
	--CLK <= RCLK;
	LF <= microinstruccion(0);
	DIR <= microinstruccion(11);
	WR <= microinstruccion(10);
	SHE <= microinstruccion(12);
	SWD <= microinstruccion(14);
	SR <= microinstruccion(1);
	SR2 <= microinstruccion(15);
	SOP1 <= microinstruccion(9);
	SOP2 <= microinstruccion(8);
	SEXT <= microinstruccion(13);
	ALUOP <= microinstruccion(7 downto 4); ---CHECAR
	WD <= microinstruccion(2);
	SDMD <= microinstruccion(3);
	SDMP <= microinstruccion(19);
	UP <= microinstruccion(18);
	DW <= microinstruccion(17);
	WPC <= microinstruccion(16);
	
	SSWD <= instruccion(15 downto 0) when SWD = '0' else SSR;
	SSR <= MEMDATOS_OUT when SR = '0' else RES;
	SSR2 <= instruccion(11 downto 8) when SR2 = '0' else instruccion(19 downto 16);
	SSEXT <= SIGNO when SEXT = '0' else DIRECCION;
	SSOP1 <= READ_DATA1 when SOP1 = '0' else PC;
	SSOP2 <= READ_DATA2 when SOP2 = '0' else SSEXT;
	SSDMD <= RES when SDMD = '0' else instruccion(15 downto 0);
	SSDMP <= instruccion(15 downto 0) when SDMP = '0' else SSR; 
	
	Unidad_Control : main
	Port map(
		clk => CLK,
		clr => CLR,
		lf => LF,
		op_code => instruccion (24 downto 20),
		i30 => instruccion (3 downto 0), --cod_function
		banderas => FLAGS,
		--nivel2: out std_logic; NO OCUPAMOS
		S => microinstruccion
	);
	
	Archivo_Registros : Registros
	Port map(
		clk => CLK,
      clr => CLR,
      dir => DIR,
      wr => WR,
		she => SHE,
      write_reg => instruccion(19 downto 16),
      write_data => SSWD,
      read_reg1 => instruccion (15 downto 12),
      read_reg2 => SSR2,
      shamt => instruccion (7 downto 4),
      read_data1 => READ_DATA1,
      read_data2 => READ_DATA2
	);
	
	ALU : ALU4Bits
	Port map(
		a => SSOP1,
      b => SSOP2,
      sel_a => ALUOP(3),
      sel_b => ALUOP(2),
      op => ALUOP(1 downto 0),
		res => RES,
      flags => FLAGS
	);
	
	Memoria_Datos : mem1
	Port map(
		clk => CLK,
		din => READ_DATA2,
      add => SSDMD(10 downto 0), --modficacion
      wd =>  WD,
      dout => MEMDATOS_OUT
	);
	
	Stack : Pila
	Port map(
		D => SSDMP,
      up => UP,
      dw => DW,
      wpc => WPC,
      clr =>  CLR,
      clk => CLK,
      q => PC,
		sp => SP
	);
	
	Memoria_Programa : Mem2P6
	Port map(
		dir => PC(9 downto 0), --modificacion
      ins => instruccion
	);
	
	Extensor_Sig : Extensor_signo
	Port map(
		entrada => instruccion(11 downto 0),
		salida => SIGNO
	);
	
	Extensor_Dir : Extensor_direccion
	Port map(
		entrada => instruccion (11 downto 0),
		salida => DIRECCION
	);
	
	Divisor_Frecuencia : divisor
	Port map(
		OSC_CLK => RCLK,
      CLR => CLR,
      CLK => CLK
	);
	
	salida <= READ_DATA2(7 downto 0); --modificacion salida
	count_prog <= PC(7 downto 0); --modificación salida
	
	
end Behavioral;

