`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:20:27 04/20/2017
// Design Name:   test_prep
// Module Name:   E:/Verilog programs/test_prep/test_prep_test.v
// Project Name:  test_prep
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test_prep
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_prep_test;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg d;

	// Outputs
	wire o;
	integer i;

	// Instantiate the Unit Under Test (UUT)
	test_prep uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.o(o)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		d = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		for(i=1;i<8;i=i+1)
		begin
			#10 {a,b,c} = i;
		end

	end
	
	initial begin
				$monitor("a = %d ,b = %d,c = %d,d = %d and output = %d\n",a,b,c,d,o);
	end
      
endmodule

