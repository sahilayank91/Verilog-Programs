`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:48:24 02/18/2017
// Design Name:   ripplecarryadder_4bit
// Module Name:   E:/Verilog programs/ripplecarryadder_4bit/ripplecarryadder_4bit_test.v
// Project Name:  ripplecarryadder_4bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ripplecarryadder_4bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ripplecarryadder_4bit_test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg cin;

	// Outputs
	wire [3:0] sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	ripplecarryadder_4bit uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;										//for carry = 0

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		 // Add stimulus here
		#10 a = 4'b1000; b = 4'b0010;
		#10 b = 4'b1000; 
		#10 a = 4'b0010;
		#10 a = 4'b0001; b = 4'b0111;
		#10 a = 4'b1010; b = 4'b1011;
		#10 a = 4'b1110; b = 4'b1111;
		#10 a = 4'b1010; b = 4'b1101;
		#10 cin = 1;								//for carry = 1
		#10 a = 4'b1000; b = 4'b0010;
		#10 b = 4'b1000; 
		#10 a = 4'b0010;
		#10 a = 4'b0001; b = 4'b0111;
		#10 a = 4'b1010; b = 4'b1011;
		#10 a = 4'b1110; b = 4'b1111;
		#10 a = 4'b1010; b = 4'b1101;

	end
	
	initial begin
			$monitor("a = %b, b = %b, cin = %b : Sum = %b, Cout = %b",a,b,cin,sum,cout); 
	end
      
endmodule

