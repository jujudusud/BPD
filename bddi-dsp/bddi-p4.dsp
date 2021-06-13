// generated automatically
// DO NOT MODIFY!
declare id "bddi-p4";
declare name "BDDI part 4";
declare category "External";

import("stdfaust.lib");

process = pre :  fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0))  with {
    LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = ba.if(b, 1 - x, x);
    s = 0.993;
    fs = float(ma.SR);
    pre = _;

    
        
        PR19v = vslider("PR19v[name:PR19v]", 0.5, 0, 1, 0.01) : Inverted(0) : si.smooth(s);
            
    b0 = PR19v*fs*(-6.984707894439e-10*fs - 4.81040488597727e-6) + fs*(7.21520325495548e-10*fs + 2.11927197656615e-5) + 0.00240520244298863;

    b1 = 1.3969415788878e-9*PR19v*pow(fs,2) - 1.4430406509911e-9*pow(fs,2) + 0.00481040488597727;

    b2 = PR19v*fs*(-6.984707894439e-10*fs + 4.81040488597727e-6) + fs*(7.21520325495548e-10*fs - 2.11927197656615e-5) + 0.00240520244298863;

    a0 = PR19v*fs*(-6.98477774151794e-10*fs - 4.81045299002613e-6) + fs*(7.21527540698803e-10*fs + 5.31859556913413e-6) + 0.00240522649501306;

    a1 = 1.39695554830359e-9*PR19v*pow(fs,2) - 1.44305508139761e-9*pow(fs,2) + 0.00481045299002613;

    a2 = PR19v*fs*(-6.98477774151794e-10*fs + 4.81045299002613e-6) + fs*(7.21527540698803e-10*fs - 5.31859556913413e-6) + 0.00240522649501306;
};
