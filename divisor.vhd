library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity divisor is
    Port ( OSC_CLK : in  STD_LOGIC;
           CLR : in  STD_LOGIC;
           CLK : INOUT  STD_LOGIC
           );
end divisor;

architecture ADIVISOR of divisor is
	SIGNAL CONT : INTEGER RANGE 0 TO 25000000-1;
begin

	PDIV : PROCESS( OSC_CLK, CLR )
	BEGIN
		IF( CLR = '1' )THEN
			CONT <= 0;
		ELSIF( OSC_CLK'EVENT AND OSC_CLK = '1' )THEN
			CONT <= CONT + 1;
			IF( CONT = 0 )THEN
				CLK <= NOT CLK;
			END IF;
		END IF;
	END PROCESS PDIV;
end ADIVISOR;
