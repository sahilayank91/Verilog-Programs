`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:12:57 02/17/2017
// Design Name:   full_subtractor
// Module Name:   E:/Verilog programs/full_subtractor/full_subtractor_test.v
// Project Name:  full_subtractor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_subtractor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_subtractor_test;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire diff;
	wire borrow;

	// Instantiate the Unit Under Test (UUT)
	full_subtractor uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.diff(diff), 
		.borrow(borrow)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;

		#10 a = 1;
		#10 b = 1;
		#10 a = 0;
		#10 c = 1;
		#10 b = 0;
		#10 a = 1;
		#10 b = 1;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	initial begin
		$monitor("a = %d, b = %d, c = %d, diff = %d, borrow = %d\n",a,b,c,diff,borrow);
	end
      
endmodule

