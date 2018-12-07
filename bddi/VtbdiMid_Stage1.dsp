// generated automatically
// DO NOT MODIFY!
declare id "VTBassDI";
declare name "VTBassDI";
declare category "External";

import("stdfaust.lib");

process = pre :  fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0))  with {
    LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = ba.if(b, 1 - x, x);
    s = 0.993;
    fs = float(ma.SR);
    pre = _;

    
    b0 = -9.67015905878325e-5*fs;

    b1 = 0;

    b2 = 9.67015905878325e-5*fs;

    a0 = fs*(2.32086727536791e-10*fs + 9.68309720290692e-6) + 0.000483514015701648;

    a1 = -4.64173455073582e-10*pow(fs,2) + 0.000967028031403296;

    a2 = fs*(2.32086727536791e-10*fs - 9.68309720290692e-6) + 0.000483514015701648;
};
