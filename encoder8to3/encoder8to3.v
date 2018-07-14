`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:58 02/18/2017 
// Design Name: 
// Module Name:    encoder8to3 
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
module encoder8to3(
    input [7:0] d,
    output [2:0] cout
    );

	assign cout[0] = (~d[6]&((~d[4]&~d[2]&d[1])|(~d[4]&d[3])|d[7]));
	assign cout[1] = (~d[5]&~d[4]&(d[2]|d[3])|d[6]|d[7]);
	assign cout[2] = (d[4]|d[5]|d[6]|d[7]);
	
endmodule
