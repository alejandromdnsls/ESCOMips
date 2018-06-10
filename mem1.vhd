--MEMORIA DE DATOS P6
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.ALL;
use ieee.std_logic_unsigned.ALL;

entity mem1 is

	 generic(
				m :integer := 11;
				n :integer := 16
	); 

    Port ( din : in  STD_LOGIC_VECTOR (n-1 downto 0);
           add : in  STD_LOGIC_VECTOR (m-1 downto 0);
           wd : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           dout : inout  STD_LOGIC_VECTOR (n-1 downto 0));
end mem1;

architecture Behavioral of mem1 is

type mem is array (0 to (2**m)-1) of std_logic_vector(n-1 downto 0);
signal arreglo: mem;

begin
	process(clk) 
	begin
		if(rising_edge(clk)) then
			if(wd = '1') then
				arreglo(conv_integer(add)) <= din;
			end if;
		end if;
	end process;
	
	dout <= arreglo(conv_integer(add));
	
end Behavioral;

