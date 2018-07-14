`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:20:43 03/02/2017 
// Design Name: 
// Module Name:    booth_multiplier 
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
module booth_multiplier(
    input [4:0] a,
    input [4:0] b,
    input [5:0] q,
    input [2:0] c,
    output [9:0] out
    ); 
	 
	 assign out = {{a[4:0]}, {q[5:1]}}; 
endmodule
