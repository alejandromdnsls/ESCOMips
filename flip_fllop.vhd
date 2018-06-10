library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity flip_flop is
	port
	(
		CLK				: in std_logic;
		RCLR				: in std_logic;
		CLR				: out std_logic
	);
end flip_flop;

architecture Behavioral of flip_flop is

begin
	process(CLK)																-- Clear
	begin
		if (falling_edge(CLK)) then
			CLR <= RCLR;
		end if;
	end process;

end Behavioral;
