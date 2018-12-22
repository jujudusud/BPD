// generated automatically
// DO NOT MODIFY!
declare id "bddi-p8";
declare name "BDDI part 8";
declare category "External";

import("stdfaust.lib");

process = pre :  fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0))  with {
    LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = ba.if(b, 1 - x, x);
    s = 0.993;
    fs = float(ma.SR);
    pre = _;

    
    b0 = fs*(3.91466389800279e-10*fs + 5.93704521193495e-7) + 0.00069390430247019;

    b1 = -7.82932779600557e-10*pow(fs,2) + 0.00138780860494038;

    b2 = fs*(3.91466389800279e-10*fs - 5.93704521193495e-7) + 0.00069390430247019;

    a0 = fs*(3.91462475136381e-10*fs + 2.02867833171566e-6) + 0.000693897363427165;

    a1 = -7.82924950272761e-10*pow(fs,2) + 0.00138779472685433;

    a2 = fs*(3.91462475136381e-10*fs - 2.02867833171566e-6) + 0.000693897363427165;
};
