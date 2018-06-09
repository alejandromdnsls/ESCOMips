library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

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
			salida : out std_logic_vector (7 downto 0);
			PC : out std_logic_vector (7 downto 0)
		)

end ESCOMips;

architecture Behavioral of ESCOMips is

	signal CLR : std_logic;
	signal CLK : std_logic;
	
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
	
	--Señales de Archivo de Registros
	signal READ_DATA1 : std_logic_vector (n-1 downto 0);
	signal READ_DATA2 : std_logic_vector (n-1 downto 0);
	
	--Señales de ALU
	signal RES : std_logic_vector (n-1 downto 0);
	
	--Señales de Mem de Datos
	signal MEMDATOS_OUT: std_logic_vector(n-1 downto 0);
	
	--Multiplexores
	signal SSWD : std_logic_vector(n-1 downto 0);
	signal SSR : std_logic_vector(n-1 downto 0);
	signal SSR2 : std_logic_vector(4 downto 0);
	signal SSOP1 : std_logic_vector(n-1 downto 0);
	signal SSOP2 : std_logic_vector(n-1 downto 0);
	signal SSEXT : std_logic_vector(n-1 downto 0);
	signal SSDMD : std_logic_vector(n-1 downto 0);
	

begin

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
	
	SSWD <= instruccion(15 downto 0) when SWD = '0' else SSR;
	--SSR <= 
	SSR2 <= instruccion (11 downto 8) when SR2 = '0' else instruccion (19 downto 16);
	SSEXT <= ---EXTENSORES	
	SSOP1 <= READ_DATA1 when SOP1 = '0' else ---PC;
	SSOP2 <= READ_DATA2 when SOP2 = '0' else SSEXT;
	SSDMD <= RES when SDMD = '0' else instruccion(15 downto 0);
	
	main : unidad_control
	Port map(
		clk => CLK,
		clr => CLR,
		lf => LF,
		op_code => instruccion (24 downto 20),
		i30 => instruccion (3 downto 0), --cod_function
		banderas => FLAGS,
		--nivel2: out std_logic;
		S => microinstruccion
	);
	
	Registros : archivo_reg
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
	
	ALU4Bits : ALU
	Port map(
		a => SSOP1,
      b => SSOP2,
      sel_a => ALUOP(3),
      sel_b => ALUOP(2),
      op => ALUOP(1 downto 0),
		res => RES,
      flags => FLAGS
	);
	
	mem1 : memoria_datos
	Port map(
		clk => CLK,
		din => READ_DATA2;
      add => SSDMD;
      wd =>  WD,
      dout => MEMDATOS_OUT
	)
	
	
	
	
	


end Behavioral;

