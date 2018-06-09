library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Extensor_signo is
	Port( 
			entrada : in std_logic_vector(11 downto 0);
			salida : out std_logic_vector(15 downto 0)
			);
end Extensor_signo;

architecture Behavioral of Extensor_signo is

	signal MSB : std_logic;

begin

	MSB <= entrada(11);
	salida <= MSB&MSB&MSB&MSB&entrada;

end Behavioral;

