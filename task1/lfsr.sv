module sreg4 (
    input  logic clk,
    input  logic rst,
    input  logic en,
    input  logic data_in,
    output logic [3:0] data_out
);
    logic [4:1] sreg;

    always_ff @(posedge clk)
        if (rst)
            sreg <= {3'b0, data_in};
        else 
            if (en)
                sreg <= {sreg[3:1], sreg[3] ^ sreg[4]};
                // this is equivalent to:
                // begin
                // sreg[4] <= sreg[3];
                // sreg[3] <= sreg[2];
                // sreg[2] <= sreg[1];
                // sreg[1] <= sreg[3] ^ sreg[4];
                // end
        ;
    assign data_out = sreg;

endmodule
