`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:50:26 02/17/2017 
// Design Name: 
// Module Name:    full_adder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
	module full_adder(
		 input a,
		 input b,
		 input cin,
		 output cout,
		 output s
		 );
		
		wire s1,c1,c2;
		
		half_adder h1(a,b,s1,c1);
		half_adder h2(s1,cin,s,c2);
		or OG1(cout,c1,c2);
	endmodule
