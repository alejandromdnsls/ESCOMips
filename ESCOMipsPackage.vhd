library IEEE;
use IEEE.STD_LOGIC_1164.all;

package ESCOMipsPackage is

component main is 
	port(
			clk: in std_logic;
			clr: in std_logic;
			lf: in std_logic;
			op_code: in std_logic_vector(4 downto 0);
			i30: in std_logic_vector(3 downto 0);
			banderas: in std_logic_vector(3 downto 0);
			nivel2: out std_logic;
			S: out std_logic_vector(19 downto 0)
		);
end component;

component Registros is
	Generic (
					n: integer := 16 --Para generico
	 );
	Port(
			clk : in  STD_LOGIC;
         clr : in  STD_LOGIC;
         dir : in  STD_LOGIC;	--1 izq, 0 der
         wr : in  STD_LOGIC;
			she : in  STD_LOGIC;
         write_reg : in  STD_LOGIC_VECTOR (3 downto 0);
         write_data : in  STD_LOGIC_VECTOR (n-1 downto 0);
         read_reg1 : in  STD_LOGIC_VECTOR (3 downto 0);
         read_reg2 : in  STD_LOGIC_VECTOR (3 downto 0);
         shamt : in  STD_LOGIC_VECTOR (3 downto 0);
         read_data1 : out  STD_LOGIC_VECTOR (n-1 downto 0);
         read_data2 : out  STD_LOGIC_VECTOR (n-1 downto 0)
	);
end component;

component ALU4Bits is
	port(
			a : in  STD_LOGIC_VECTOR (15 downto 0);
         b : in  STD_LOGIC_VECTOR (15 downto 0);
         sel_a : in  STD_LOGIC;
         sel_b : in  STD_LOGIC;
         op : in  STD_LOGIC_VECTOR (1 downto 0);
         res : inout  STD_LOGIC_VECTOR (15 downto 0);
         flags : out  STD_LOGIC_VECTOR (3 downto 0)
	);
end component;

component mem1 is
	generic(
				m :integer := 16;
				n :integer := 16
	);
	port(
			din : in  STD_LOGIC_VECTOR (n-1 downto 0);
         add : in  STD_LOGIC_VECTOR (m-1 downto 0);
         wd : in  STD_LOGIC;
         clk : in  STD_LOGIC;
         dout : inout  STD_LOGIC_VECTOR (n-1 downto 0)
	);
end component;

component Pila is
	port(
			D : in  STD_LOGIC_VECTOR (15 downto 0);
         up : in  STD_LOGIC;
         dw : in  STD_LOGIC;
         wpc : in  STD_LOGIC;
			clr : in  STD_LOGIC;
         clk : in  STD_LOGIC;
         q : out  STD_LOGIC_VECTOR (15 downto 0);
			sp : out std_logic_vector(3 downto 0)
	);
end component;

component Mem2P6 is
	generic(
			m: integer := 16;
			n: integer := 25
		);
	port(
			dir : in  STD_LOGIC_VECTOR (m-1 downto 0);
         ins : out  STD_LOGIC_VECTOR (n-1 downto 0)
	);
end component;

component Extensor_signo is
	port(
			entrada : in std_logic_vector(11 downto 0);
			salida : out std_logic_vector(15 downto 0)
	);
end component;

component Extensor_direccion is
	port(
			entrada : in std_logic_vector(11 downto 0);
			salida : out std_logic_vector(15 downto 0)
	);
end component;
end ESCOMipsPackage;

package body ESCOMipsPackage is
 
end ESCOMipsPackage;
