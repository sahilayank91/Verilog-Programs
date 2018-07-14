`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:02:31 02/17/2017 
// Design Name: 
// Module Name:    half_subtractor 
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
module half_subtractor(
    input a,
    input b,
    output diff,
    output borrow
    );
	 
	 assign diff = (~a&b)|(a&~b);
	 assign borrow = (~a&b);


endmodule
