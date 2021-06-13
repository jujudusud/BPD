// generated automatically
// DO NOT MODIFY!
declare id "bddi-p7";
declare name "BDDI part 7";
declare category "External";

import("stdfaust.lib");

process = pre :  fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0))  with {
    LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = ba.if(b, 1 - x, x);
    s = 0.993;
    fs = float(ma.SR);
    pre = _;

    
    b0 = 0.0284906356049262;

    b1 = 0.0569812712098524;

    b2 = 0.0284906356049262;

    a0 = fs*(3.27641027332464e-10*fs + 4.51300317739001e-6) + 0.0284909205112823;

    a1 = -6.55282054664928e-10*pow(fs,2) + 0.0569818410225645;

    a2 = fs*(3.27641027332464e-10*fs - 4.51300317739001e-6) + 0.0284909205112823;
};
