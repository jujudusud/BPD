// generated automatically
// DO NOT MODIFY!
declare id "bddi-p5";
declare name "BDDI part 5";
declare category "External";

import("stdfaust.lib");

process = pre :  fi.fir((b0/a0))  with {
    LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = ba.if(b, 1 - x, x);
    s = 0.993;
    fs = float(ma.SR);
    pre = _;

    
        
        PR20v = vslider("PR20v[name:PR20v]", 0.5, 0, 1, 0.01) : Inverted(0) : si.smooth(s);
            
    b0 = 0;

    a0 = 1.00000000000000;
};
