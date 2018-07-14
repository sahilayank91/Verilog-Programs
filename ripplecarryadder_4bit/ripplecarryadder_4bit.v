`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:31:23 02/18/2017 
// Design Name: 
// Module Name:    ripplecarryadder_4bit 
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
module ripplecarryadder_4bit(
    input [3:0] a,
    input [3:0] b,
    input cin,
    output [3:0] sum,
    output cout
    );
	
	wire c1,c2,c3;
	full_adder f1(a[0],b[0],cin,c1,sum[0]);
	full_adder f2(a[1],b[1],c1,c2,sum[1]);
	full_adder f3(a[2],b[2],c2,c3,sum[2]);
	full_adder f4(a[3],b[3],c3,cout,sum[3]);
	
endmodule


