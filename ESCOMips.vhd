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
	signal FLAGS : std_logic_vector(3 downto 0);
	signal DIR : std_logic;
	signal WR : std_logic;
	signal SHE : std_logic;
	signal SWD : std_logic;
	signal SR : std_logic; 
	signal SR2 : std_logic;
	signal SEXT : std_logic;
	
	--Señales de Archivo de Registros
	signal READ_DATA1 : std_logic_vector (n-1 downto 0);
	signal READ_DATA2 : std_logic_vector (n-1 downto 0);
	
	--Multiplexores
	signal SSWD : std_logic_vector(n-1 downto 0);
	signal SSR : std_logic_vector(n-1 downto 0);
	signal SSR2 : std_logic_vector(4 downto 0);
	signal SSOP1 : std_logic_vector(n-1 downto 0);
	signal SSOP2 : std_logic_vector(n-1 downto 0);
	signal SSEXT : std_logic_vector(n-1 downto 0);

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
	
	SSWD <= instruccion(15 downto 0) when SWD = '0' else SSR;
	--SSR <= 
	SSR2 <= instruccion (11 downto 8) when SR2 = '0' else instruccion (19 downto 16);
	SSEXT <= ---EXTENSORES	
	SSOP1 <= READ_DATA1 when SOP1 = '0' else ---PC;
	SSOP2 <= READ_DATA2 when SOP2 = '0' else SSEXT;
	
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
	)
	
	ALU4Bits : ALU
	Port map(
		a => in  STD_LOGIC_VECTOR (15 downto 0);
      b : in  STD_LOGIC_VECTOR (15 downto 0);
      sel_a : in  STD_LOGIC;
      sel_b : in  STD_LOGIC;
      op : in  STD_LOGIC_VECTOR (1 downto 0);
		--cout : inout  STD_LOGIC;
		res : inout  STD_LOGIC_VECTOR (15 downto 0);
      flags : out  STD_LOGIC_VECTOR (3 downto 0)
	)
	
	
	


end Behavioral;

