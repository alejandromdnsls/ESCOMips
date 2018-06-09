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
	Port(
			RCLR : in std_logic;
			RCLK : in std_logic;
			salida : out std_logic_vector (7 downto 0);
			PC : out std_logic_vector (7 downto 0)
		)

end ESCOMips;

architecture Behavioral of ESCOMips is

	signal clr : std_logic;
	signal clk : std_logic;
	
	signal instruccion : std_logic_vector(24 downto 0);
	
	signal microinstruccion : std_logic_vector (19 downto 0);
	
	--Señales de microinstruccion
	signal LF : std_logic;
	signal FLAGS : std_logic_vector(3 downto 0);
	

begin

	LF <= microinstruccion(0);
	
	main : unidad_control
	Port map(
		clk => clk,
		clr => clr,
		lf => LF,
		op_code => instruccion (24 downto 20),
		i30 => instruccion (3 downto 0), --cod_function
		banderas => FLAGS,
		--nivel2: out std_logic;
		S => microinstruccion
	);
	
	ALU4Bits : ALU
	Port map(
		a : in  STD_LOGIC_VECTOR (15 downto 0);
      b : in  STD_LOGIC_VECTOR (15 downto 0);
      sel_a : in  STD_LOGIC;
      sel_b : in  STD_LOGIC;
      op : in  STD_LOGIC_VECTOR (1 downto 0);
		--cout : inout  STD_LOGIC;
		res : inout  STD_LOGIC_VECTOR (15 downto 0);
      flags : out  STD_LOGIC_VECTOR (3 downto 0)
	)
	
	
	


end Behavioral;

