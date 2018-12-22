// generated automatically
// DO NOT MODIFY!
declare id "bddi-p3";
declare name "BDDI part 3";
declare category "External";

import("stdfaust.lib");

process = pre :  fi.iir((b0/a0,b1/a0),(a1/a0))  with {
    LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = ba.if(b, 1 - x, x);
    s = 0.993;
    fs = float(ma.SR);
    pre = _;

    
    b0 = 2.07351555136664e-5*fs;

    b1 = -2.07351555136664e-5*fs;

    a0 = 2.07351555136664e-5*fs + 0.00471253534401508;

    a1 = -2.07351555136664e-5*fs + 0.00471253534401508;
};
