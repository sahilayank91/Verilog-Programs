`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: IIIT KOTA
// Engineer: Sahil Ayank
// 
// Create Date:    08:33:15 02/17/2017 
// Design Name: 
// Module Name:    half_adder 
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
module half_adder(
    input a,
    input b,
    output s,
    output c
    );
	
		assign s = (a^b);
		assign c = (a&b);

endmodule
