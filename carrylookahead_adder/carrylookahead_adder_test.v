`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:31:06 02/17/2017
// Design Name:   carrylookahead_adder
// Module Name:   E:/Verilog programs/carrylookahead_adder/carrylookahead_adder_test.v
// Project Name:  carrylookahead_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: carrylookahead_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module carrylookahead_adder_test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg cin;

	// Outputs
	wire p;
	wire g;
	wire [3:0] S;
	

	// Instantiate the Unit Under Test (UUT)
	carrylookahead_adder uut (
		.A(A), 
		.B(B), 
		.cin(cin), 
		.p(p), 
		.cout(cout),
		.g(g), 
		.S(S)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		cin = 0;

        
		// Add stimulus here
	 #10 A=4'b001;B=4'b0000;cin=1'b0;
    #10 A=4'b0100;B=4'b0011;cin=1'b0;
    #10 A=4'b1101;B=4'b1010;cin=1'b1;
    #10 A=4'b1110;B=4'b1001;cin=1'b0;
    #10 A=4'b1111;B=4'b1010;cin=1'b0;
	 
	 
		// Wait 100 ns for global reset to finish
		#100;
    end 
 
    initial begin
 $monitor("time=",$time,, "A=%b B=%b Cin=%b : Sum=%b Cout=%b PG=%b GG=%b",A,B,cin,S,cout,p,g);
          
	end
      
endmodule

