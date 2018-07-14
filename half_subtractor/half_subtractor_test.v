`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:04:08 02/17/2017
// Design Name:   half_subtractor
// Module Name:   E:/Verilog programs/half_subtractor/half_subtractor_test.v
// Project Name:  half_subtractor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: half_subtractor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module half_subtractor_test;

	// Inputs
	reg a;
	reg b;
	wire borrow;

	// Outputs
	wire diff;

	// Instantiate the Unit Under Test (UUT)
	half_subtractor uut (
		.a(a), 
		.b(b), 
		.diff(diff), 
		.borrow(borrow)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		
		#10 a=1;
		#10 b=1;
		#10 a=0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	initial begin
		$monitor("a = %d, b = %d, diff = %d, borrow = %d\n",a,b,diff,borrow);
	end
      
endmodule

