`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:30:07 03/02/2017
// Design Name:   booth_multiplier
// Module Name:   E:/Verilog programs/booth_multiplier/booth_multiplier_test.v
// Project Name:  booth_multiplier
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: booth_multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module booth_multiplier_test;

	// Inputs
	reg [4:0] a;
	reg [4:0] b;
	reg [5:0] q;
	reg [2:0] c;
	
	
	

	// Outputs
	wire [9:0] out;

	// Instantiate the Unit Under Test (UUT)
	booth_multiplier uut (
		.a(a), 
		.b(b), 
		.q(q), 
		.c(c), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		 a = 5'b00000;
		 b = 5'b10111;
		 q = 6'b100110;
		 c = 3'b101;
		 

		// Wait 100 ns for global reset to finish
		#100;
         
		// Add stimulus here
	while(c!=3'b000) begin
		
		
		case(q[1:0])
		2'b10:a = a - b;
		2'b01:a = a + b;
		2'b00,2'b11:;
		endcase
 		
		q = q>>1;
		case(a[0])
			1'b1: q[5]=1'b1;				
			1'b0: q[5]=1'b0; 
		endcase
		c = c-3'b001;
		a = a >>> 1;
		
	end
	a = a>>>1;	
	end
	
	
	initial begin
		$monitor("a = %b, b = %b, q = %b, c = %b, Qn+1 = %b, Result = %d\n",a,b,q,c,q[0],out);
	end
      
endmodule

