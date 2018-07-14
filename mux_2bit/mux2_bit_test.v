`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:25:47 02/10/2017
// Design Name:   mux_2bit
// Module Name:   E:/Verilog programs/mux_2bit/mux2_bit_test.v
// Project Name:  mux_2bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_2bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux2_bit_test;

	// Inputs
	reg a;
	reg b;
	reg s;

	// Outputs
	wire o;

	// Instantiate the Unit Under Test (UUT)
	mux_2bit uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.o(o)
	);

	initial begin
		// Initialize Inputs
		s = 0;
		a = 0;
		b = 0;
		s = 1;
	#20 a = 1;
   #20 b = 1; 
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	initial begin 
		$monitor("a = %d, b = %d, s = %d, o = %d\n",a,b,s,o);
	end
      
endmodule

