`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:39:48 02/18/2017 
// Design Name: 
// Module Name:    multiplexer4to1_structural 
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
module multiplexer4to1_structural(
    input a,
    input b,
	 input c,
	 input d,
    input s1,
    input s2,
    output cout
    );
	
		wire o1,o2;
		multiplexer2to1 m1(a,b,s1,o1);
		multiplexer2to1 m2(c,d,s1,o2);
		multiplexer2to1 m3(o1,o2,s2,cout);
		
endmodule
