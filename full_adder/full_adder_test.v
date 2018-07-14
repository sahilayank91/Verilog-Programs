`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:52:00 02/17/2017
// Design Name:   full_adder
// Module Name:   E:/Verilog programs/full_adder/full_adder_test.v
// Project Name:  full_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_adder_test;

	// Inputs
	reg a;
	reg b;
	reg cin;

	// Outputs
	wire cout;
	wire s;

	// Instantiate the Unit Under Test (UUT)
	full_adder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.cout(cout), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;
		
		#10 b = 1;
		#10 a = 1;
		#10 b = 0;
		#10 cin = 1;
		#10 a=0;
		#10 b = 1;
		#10 a = 1;
		

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	initial begin
		$monitor("a = %d, b = %d, cin = %d, cout = %d, s = %d\n",a,b,cin,cout,s);
	end
      
endmodule

