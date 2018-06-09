
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity Nivel is
    Port ( clk, clr : in  STD_LOGIC;
           na : out  STD_LOGIC);
end Nivel;

architecture Behavioral of Nivel is
	signal p_clk: STD_LOGIC;
	signal n_clk: STD_LOGIC;
begin

process(clk, clr) begin

	if (clr='1') then
		p_clk<='0';
		n_clk<='0';
	else
		if(rising_edge(clk)) then
			p_clk<=not p_clk;
		else
			if(falling_edge(clk)) then
				n_clk<= not n_clk;
			end if;
		end if;
	
	end if;

end process;
na<=p_clk xnor n_clk;

end Behavioral;



