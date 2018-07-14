`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:17:01 04/21/2017
// Design Name:   lab_end_term
// Module Name:   E:/Verilog programs/lab_end_term/lab_end_test_test.v
// Project Name:  lab_end_term
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_end_term
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab_end_test_test;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire x;
	integer i;

	// Instantiate the Unit Under Test (UUT)
	lab_end_term uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.x(x)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		end
	initial	
	$monitor("a = %d, b = %d, c = %d, x = %d\n\n",a,b,c,x);
			
		always@(a or b or c)
			for(i=0;i<8;i=i+1)
			begin
			#1 {a,b,c}=i;
			end
	
      
endmodule

