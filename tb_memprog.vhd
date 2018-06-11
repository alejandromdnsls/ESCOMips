--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   03:09:42 06/11/2018
-- Design Name:   
-- Module Name:   C:/Users/Alejandro Medina/Documents/Proyecto/ESCOMips/tb_memprog.vhd
-- Project Name:  ESCOMips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Mem2P6
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
LIBRARY STD;
USE STD.TEXTIO.ALL;
USE ieee.std_logic_TEXTIO.ALL;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_ARITH.all;
use ieee.std_logic_UNSIGNED.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_memprog IS
END tb_memprog;
 
ARCHITECTURE behavior OF tb_memprog IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Mem2P6
    PORT(
         dir : IN  std_logic_vector(9 downto 0);
         ins : OUT  std_logic_vector(24 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal dir : std_logic_vector(9 downto 0) := (others => '0');

 	--Outputs
   signal ins : std_logic_vector(24 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Mem2P6 PORT MAP (
          dir => dir,
          ins => ins
        );

  
 

   -- Stimulus process
   stim_proc: process
   file ARCH_RES: TEXT;
	VARIABLE LINEA_RES: line;
	VARIABLE var_ins: STD_LOGIC_VECTOR(24 DOWNTO 0);
	variable aux0: std_logic_vector(3 downto 0);
	variable aux1: std_logic_vector(3 downto 0);
	variable aux2: std_logic_vector(3 downto 0);
	variable aux3: std_logic_vector(3 downto 0);
	variable aux4: std_logic_vector(3 downto 0);
	variable aux5: std_logic_vector(4 downto 0);
	
	
	FILE ARCH_ENT: TEXT;
	VARIABLE LINEA_ENT: line;
	VARIABLE VAR_dir: STD_LOGIC_VECTOR(9 DOWNTO 0);
	VARIABLE CADENA: STRING(1 TO 4);
	
   begin		
      
	FILE_OPEN(ARCH_ENT,"entradas.txt", READ_MODE);
	FILE_OPEN(ARCH_RES,"resultados.txt",WRITE_MODE);
	
	cadena := "   A";   
	WRITE ( LINEA_RES, cadena, RIGHT, cadena'LENGTH+1 ); 
cadena := "OPCO";   
	WRITE ( LINEA_RES, cadena, RIGHT, cadena'LENGTH+1 );	
	cadena := "1916";   
	WRITE ( LINEA_RES, cadena, RIGHT, cadena'LENGTH+1 );
cadena := "1512";   
	WRITE ( LINEA_RES, cadena, RIGHT, cadena'LENGTH+1 );
cadena := "1108";   
	WRITE ( LINEA_RES, cadena, RIGHT, cadena'LENGTH+1 );
cadena := "0703";   
	WRITE ( LINEA_RES, cadena, RIGHT, cadena'LENGTH+1 );   
	cadena := "0300";   
	WRITE ( LINEA_RES, cadena, RIGHT, cadena'LENGTH+1 );
	

	WRITELINE(ARCH_RES,LINEA_RES);
	WAIT FOR 10 NS;
	FOR I IN 0 TO 9 LOOP
		READLINE(ARCH_ENT,LINEA_ENT);
		
		Hread(LINEA_ENT, var_dir);    
		dir <= var_dir;
		
		WAIT FOR 50 NS;
		var_ins := ins;  
		aux0:= var_ins(3 downto 0);
		aux1:= var_ins(7 downto 4);
		aux2:= var_ins(11 downto 8);
		aux3:= var_ins(15 downto 12);
		aux4:= var_ins(19 downto 16);
		aux5:= var_ins(24 downto 20);
		HWRITE(LINEA_RES, var_dir, RIGHT, 5 );    
		WRITE(LINEA_RES, aux5, RIGHT, 6 );
		WRITE(LINEA_RES, aux4, RIGHT, 6 );
		WRITE(LINEA_RES, aux3, RIGHT, 6 );
		WRITE(LINEA_RES, aux2, RIGHT, 6 );
		WRITE(LINEA_RES, aux1, RIGHT, 6 );
		WRITE(LINEA_RES, aux0, RIGHT, 6 );		
		WRITELINE(ARCH_RES, LINEA_RES); 
	END LOOP;
	
	FILE_CLOSE(ARCH_ENT);
	FILE_CLOSE(ARCH_RES);

      wait;
   end process;


END;
