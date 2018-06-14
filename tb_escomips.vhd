--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   01:58:50 06/11/2018
-- Design Name:   
-- Module Name:   C:/Users/Alejandro Medina/Documents/Proyecto/ESCOMips/tb_escomips.vhd
-- Project Name:  ESCOMips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ESCOMips
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
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_escomips IS
END tb_escomips;
 
ARCHITECTURE behavior OF tb_escomips IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ESCOMips
    PORT(
         RCLR : IN  std_logic;
         RCLK : IN  std_logic;
         salida : OUT  std_logic_vector(15 downto 0);
         count_prog : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal RCLR : std_logic := '0';
   signal RCLK : std_logic := '0';

 	--Outputs
   signal salida : std_logic_vector(15 downto 0);
   signal count_prog : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant RCLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ESCOMips PORT MAP (
          RCLR => RCLR,
          RCLK => RCLK,
          salida => salida,
          count_prog => count_prog
        );

   -- Clock process definitions
   RCLK_process :process
   begin
		RCLK <= '0';
		wait for RCLK_period/2;
		RCLK <= '1';
		wait for RCLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      RCLR <= '0';
		wait for 10 ns;
		
		RCLR <= '1';
		WAIT UNTIL RISING_EDGE(RCLK);
		RCLR <= '0';

      --wait for RCLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
