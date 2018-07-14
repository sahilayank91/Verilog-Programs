`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:07:35 02/18/2017 
// Design Name: 
// Module Name:    multiplexer2to1 
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
module multiplexer2to1(
    input a,
    input b,
    input x,
    output y
    );

	assign y = (a&~x)|(b&x);
endmodule
