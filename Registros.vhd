

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Registros is
	 Generic (
					n: integer := 16 --Para generico
	 );
    Port ( clk : in  STD_LOGIC;
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
end Registros;

architecture Behavioral of Registros is

type banco is array (0 to n-1) of std_logic_vector(n-1 downto 0);	--Arreglo
signal archivo : banco;

begin

	process (clr,clk,archivo)
		variable aux,aux2: bit_vector(n-1 downto 0);
		begin
			aux := to_bitvector(archivo(conv_integer(read_reg1)));
			if (clr = '1' ) then --Reset
				for i in 0 to n - 1 loop
					archivo(i) <= x"0000";
				end loop;
			elsif(rising_edge(clk)) then
				if((wr = '1')and(she='0')and(dir='0')) then
					--Lectura y escritura del registro
					archivo(conv_integer(write_reg)) <= write_data;
				end if;
				if((wr = '1')and(she='1')and(dir='0')) then --Corrimiento Derecha
					aux2 := aux srl conv_integer(shamt);
					archivo (conv_integer(write_reg)) <= to_stdlogicvector(aux2);
				end if;

				if((wr = '1')and(she='1')and(dir='1')) then --Corrimiento Izquierda
					aux2 := aux sll conv_integer(shamt);
					archivo (conv_integer(write_reg)) <= to_stdlogicvector(aux2);
				end if;
			end if;
		end process;

	--read_register1: lee el archivo en el registro de la entrada solicitada:
	read_data1 <= archivo(conv_integer(read_reg1));
	--read_register2
	read_data2 <= archivo(conv_integer(read_reg2));

end Behavioral;

