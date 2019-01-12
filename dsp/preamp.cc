/* ------------------------------------------------------------
name: "Tube Preamp"
Code generated with Faust 2.13.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <math.h>

static double mydsp_faustpower2_f(double value) {
	return (value * value);
	
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class mydsp : public dsp {
	
 private:
	
	int fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	FAUSTFLOAT fVslider0;
	double fRec1[2];
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	double fConst49;
	double fRec0[11];
	double fConst50;
	double fConst51;
	double fConst52;
	double fConst53;
	double fConst54;
	double fConst55;
	double fConst56;
	double fConst57;
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	double fConst63;
	double fConst64;
	double fConst65;
	double fConst66;
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	double fConst73;
	double fConst74;
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	double fConst80;
	double fConst81;
	double fConst82;
	double fConst83;
	double fConst84;
	double fConst85;
	double fConst86;
	double fConst87;
	double fConst88;
	double fConst89;
	double fConst90;
	double fConst91;
	double fConst92;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.0");
		m->declare("category", "External");
		m->declare("filename", "preamp");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("id", "preamp");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "Tube Preamp");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "0.0");
	}

	virtual int getNumInputs() {
		return 1;
		
	}
	virtual int getNumOutputs() {
		return 1;
		
	}
	virtual int getInputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	virtual int getOutputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	
	static void classInit(int samplingFreq) {
		
	}
	
	virtual void instanceConstants(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq)));
		fConst1 = mydsp_faustpower2_f(fConst0);
		fConst2 = (3.3611962464229901e-50 * fConst0);
		fConst3 = (((((((((((((-5.7717304949541104e-42 - fConst2) * fConst0) + -4.1813407769196298e-35) * fConst0) + -2.9028850901832701e-30) * fConst1) + 6.3931201071545601e-22) * fConst0) + 2.6751548606272599e-18) * fConst0) + 2.0837517958661401e-15) * fConst0) + 9.6348199912223898e-14);
		fConst4 = (8.4029906160574797e-53 * fConst0);
		fConst5 = (((((((((((((((-1.54219379934794e-44 - fConst4) * fConst0) + -1.2571821876632301e-37) * fConst0) + -1.17246520562362e-32) * fConst0) + -2.0076661970058601e-28) * fConst1) + 2.6920476104715701e-21) * fConst0) + 2.7901014127628699e-18) * fConst0) + 1.4399146335459901e-16) * fConst0) + 1.6353035816064899e-15);
		fConst6 = (8.4029990267206701e-53 * fConst0);
		fConst7 = (((((((((((((((fConst6 + 1.5421543395893599e-44) * fConst0) + 1.2565188935167099e-37) * fConst0) + 1.15014173713273e-32) * fConst0) + 1.89290149687061e-28) * fConst1) + -1.8996910321751701e-21) * fConst0) + -1.77938156427939e-18) * fConst0) + -5.5937780936330596e-17) * fConst0) + 8.0335543247514104e-30);
		fConst8 = (1.13440373316776e-49 * fConst0);
		fConst9 = (((((((((((((((fConst8 + 1.2505416072400599e-41) * fConst0) + 3.1360055826897201e-35) * fConst0) + -4.3543276352749102e-30) * fConst0) + -2.4782583725252502e-25) * fConst0) + -9.5896801607318392e-22) * fConst0) + 2.0063661454704399e-18) * fConst0) + 4.5147955577099699e-15) * fConst0) + 3.2517517470375602e-13);
		fConst10 = (3.78134577722587e-52 * fConst0);
		fConst11 = (((((((((((((((((fConst10 + 5.2049040727992899e-44) * fConst0) + 2.7238947399370102e-37) * fConst0) + 8.7934890421771405e-33) * fConst0) + -3.0114992955087899e-28) * fConst0) + -3.2284293346409501e-24) * fConst0) + -4.03807141570736e-21) * fConst0) + 2.0925760595721499e-18) * fConst0) + 3.1198150393496502e-16) * fConst0) + 5.5191495879219099e-15);
		fConst12 = (3.7813495620243001e-52 * fConst0);
		fConst13 = (((((((((((((((((-5.20477089611408e-44 - fConst12) * fConst0) + -2.7224576026195501e-37) * fConst0) + -8.6260630284954505e-33) * fConst0) + 2.83935224530592e-28) * fConst0) + 2.6788205381323801e-24) * fConst0) + 2.8495365482627599e-21) * fConst0) + -1.33453617320954e-18) * fConst0) + -1.2119852536205e-16) * fConst0) + 2.7113245846036003e-29);
		fConst14 = (2.0167177478538e-49 * fConst0);
		fConst15 = (((((((((((((-7.6956406599388206e-42 - fConst14) * fConst0) + 8.3626815538392595e-35) * fConst0) + 1.16115403607331e-29) * fConst1) + -2.5572480428618301e-21) * fConst0) + -5.3503097212545197e-18) * fConst0) + 2.7783357278215201e-15) * fConst0) + 5.7808919947334299e-13);
		fConst16 = (1.0083588739269e-51 * fConst0);
		fConst17 = (((((((((((((((-9.2531627960876207e-44 - fConst16) * fConst0) + -1.67624291688431e-37) * fConst0) + 2.34493041124724e-32) * fConst0) + 8.0306647880234501e-28) * fConst1) + -1.07681904418863e-20) * fConst0) + -5.5802028255257399e-18) * fConst0) + 1.9198861780613201e-16) * fConst0) + 9.8118214896389603e-15);
		fConst18 = (1.00835988320648e-51 * fConst0);
		fConst19 = (((((((((((((((fConst18 + 9.2529260375361407e-44) * fConst0) + 1.67535852468895e-37) * fConst0) + -2.3002834742654501e-32) * fConst0) + -7.5716059874824399e-28) * fConst1) + 7.5987641287006804e-21) * fConst0) + 3.5587631285587799e-18) * fConst0) + -7.4583707915107502e-17) * fConst0) + 4.8201325948508502e-29);
		fConst20 = (1.7646280293720699e-49 * fConst0);
		fConst21 = (((((((((((((((fConst20 + -1.34673711548929e-41) * fConst0) + -1.4634692719218701e-34) * fConst0) + 2.9028850901832701e-30) * fConst0) + 4.9565167450504904e-25) * fConst0) + 6.3931201071545601e-22) * fConst0) + -9.3630420121953995e-18) * fConst0) + -4.8620875236876602e-15) * fConst0) + 5.0582804953917504e-13);
		fConst22 = (1.7646280293720699e-51 * fConst0);
		fConst23 = (((((((((((((((((fConst22 + 8.0965174465766696e-44) * fConst0) + -2.9334251045475401e-37) * fConst0) + -4.1036282196826599e-32) * fConst0) + 2.0076661970058601e-28) * fConst0) + 6.4568586692819097e-24) * fConst0) + 2.6920476104715701e-21) * fConst0) + -9.7653549446700396e-18) * fConst0) + -3.3598008116073198e-16) * fConst0) + 8.5853438034340899e-15);
		fConst24 = (1.7646297956113401e-51 * fConst0);
		fConst25 = (((((((((((((((((-8.0963102828441204e-44 - fConst24) * fConst0) + 2.93187741820567e-37) * fConst0) + 4.0254960799645498e-32) * fConst0) + -1.89290149687061e-28) * fConst0) + -5.3576410762647498e-24) * fConst0) + -1.8996910321751701e-21) * fConst0) + 6.2278354749778703e-18) * fConst0) + 1.30521488851438e-16) * fConst0) + 4.2176160204944902e-29);
		fConst26 = ((((((2.6934742309785898e-41 * fConst1) + -1.7417310541099599e-29) * fConst1) + 3.8358720642927402e-21) * fConst1) + -9.7241750473753299e-15);
		fConst27 = (((((((5.8668502090950902e-37 - (2.1175536352464801e-51 * fConst1)) * fConst1) + -1.2045997182035201e-27) * fConst1) + 1.6152285662829401e-20) * fConst1) + -6.7196016232146396e-16);
		fConst28 = ((((((((2.1175557547336101e-51 * fConst1) + -5.8637548364113299e-37) * fConst1) + 1.13574089812237e-27) * fConst1) + -1.1398146193051e-20) * fConst1) + 2.61042977702876e-16);
		fConst29 = (((((((((((((((-1.34673711548929e-41 - fConst20) * fConst0) + 1.4634692719218701e-34) * fConst0) + 2.9028850901832701e-30) * fConst0) + -4.9565167450504904e-25) * fConst0) + 6.3931201071545601e-22) * fConst0) + 9.3630420121953995e-18) * fConst0) + -4.8620875236876602e-15) * fConst0) + -5.0582804953917504e-13);
		fConst30 = (((((((((((((((((fConst22 + -8.0965174465766696e-44) * fConst0) + -2.9334251045475401e-37) * fConst0) + 4.1036282196826599e-32) * fConst0) + 2.0076661970058601e-28) * fConst0) + -6.4568586692819097e-24) * fConst0) + 2.6920476104715701e-21) * fConst0) + 9.7653549446700396e-18) * fConst0) + -3.3598008116073198e-16) * fConst0) + -8.5853438034340899e-15);
		fConst31 = (((((((((((((((((8.0963102828441204e-44 - fConst24) * fConst0) + 2.93187741820567e-37) * fConst0) + -4.0254960799645498e-32) * fConst0) + -1.89290149687061e-28) * fConst0) + 5.3576410762647498e-24) * fConst0) + -1.8996910321751701e-21) * fConst0) + -6.2278354749778703e-18) * fConst0) + 1.30521488851438e-16) * fConst0) + -4.2176160204944902e-29);
		fConst32 = (((((((((((((fConst14 + -7.6956406599388206e-42) * fConst0) + -8.3626815538392595e-35) * fConst0) + 1.16115403607331e-29) * fConst1) + -2.5572480428618301e-21) * fConst0) + 5.3503097212545197e-18) * fConst0) + 2.7783357278215201e-15) * fConst0) + -5.7808919947334299e-13);
		fConst33 = (((((((((((((((9.2531627960876207e-44 - fConst16) * fConst0) + -1.67624291688431e-37) * fConst0) + -2.34493041124724e-32) * fConst0) + 8.0306647880234501e-28) * fConst1) + -1.07681904418863e-20) * fConst0) + 5.5802028255257399e-18) * fConst0) + 1.9198861780613201e-16) * fConst0) + -9.8118214896389603e-15);
		fConst34 = (((((((((((((((fConst18 + -9.2529260375361407e-44) * fConst0) + 1.67535852468895e-37) * fConst0) + 2.3002834742654501e-32) * fConst0) + -7.5716059874824399e-28) * fConst1) + 7.5987641287006804e-21) * fConst0) + -3.5587631285587799e-18) * fConst0) + -7.4583707915107502e-17) * fConst0) + -4.8201325948508502e-29);
		fConst35 = (((((((((((((((1.2505416072400599e-41 - fConst8) * fConst0) + -3.1360055826897201e-35) * fConst0) + -4.3543276352749102e-30) * fConst0) + 2.4782583725252502e-25) * fConst0) + -9.5896801607318392e-22) * fConst0) + -2.0063661454704399e-18) * fConst0) + 4.5147955577099699e-15) * fConst0) + -3.2517517470375602e-13);
		fConst36 = (((((((((((((((((fConst10 + -5.2049040727992899e-44) * fConst0) + 2.7238947399370102e-37) * fConst0) + -8.7934890421771405e-33) * fConst0) + -3.0114992955087899e-28) * fConst0) + 3.2284293346409501e-24) * fConst0) + -4.03807141570736e-21) * fConst0) + -2.0925760595721499e-18) * fConst0) + 3.1198150393496502e-16) * fConst0) + -5.5191495879219099e-15);
		fConst37 = (((((((((((((((((5.20477089611408e-44 - fConst12) * fConst0) + -2.7224576026195501e-37) * fConst0) + 8.6260630284954505e-33) * fConst0) + 2.83935224530592e-28) * fConst0) + -2.6788205381323801e-24) * fConst0) + 2.8495365482627599e-21) * fConst0) + 1.33453617320954e-18) * fConst0) + -1.2119852536205e-16) * fConst0) + -2.7113245846036003e-29);
		fConst38 = (((((((((((((fConst2 + -5.7717304949541104e-42) * fConst0) + 4.1813407769196298e-35) * fConst0) + -2.9028850901832701e-30) * fConst1) + 6.3931201071545601e-22) * fConst0) + -2.6751548606272599e-18) * fConst0) + 2.0837517958661401e-15) * fConst0) + -9.6348199912223898e-14);
		fConst39 = (((((((((((((((1.54219379934794e-44 - fConst4) * fConst0) + -1.2571821876632301e-37) * fConst0) + 1.17246520562362e-32) * fConst0) + -2.0076661970058601e-28) * fConst1) + 2.6920476104715701e-21) * fConst0) + -2.7901014127628699e-18) * fConst0) + 1.4399146335459901e-16) * fConst0) + -1.6353035816064899e-15);
		fConst40 = (((((((((((((((fConst6 + -1.5421543395893599e-44) * fConst0) + 1.2565188935167099e-37) * fConst0) + -1.15014173713273e-32) * fConst0) + 1.89290149687061e-28) * fConst1) + -1.8996910321751701e-21) * fConst0) + 1.77938156427939e-18) * fConst0) + -5.5937780936330596e-17) * fConst0) + -8.0335543247514104e-30);
		fConst41 = (4.20149530802874e-51 * fConst0);
		fConst42 = (((((((((((((((9.6195508249235305e-43 - fConst41) * fConst0) + -1.04533519422991e-35) * fConst0) + 1.4514425450916399e-30) * fConst0) + -4.9565167450504901e-26) * fConst0) + 3.19656005357728e-22) * fConst0) + -6.68788715156814e-19) * fConst0) + 3.4729196597769001e-16) * fConst0) + -1.2043524989028e-14);
		fConst43 = (8.4029906160574803e-54 * fConst0);
		fConst44 = (((((((((((((((((fConst43 + -1.92774224918492e-45) * fConst0) + 2.0953036461053901e-38) * fConst0) + -2.93116301405905e-33) * fConst0) + 1.00383309850293e-28) * fConst0) + -6.4568586692819101e-25) * fConst0) + 1.3460238052357899e-21) * fConst0) + -6.97525353190717e-19) * fConst0) + 2.39985772257666e-17) * fConst0) + -2.04412947700812e-16);
		fConst45 = (8.4029990267206701e-54 * fConst0);
		fConst46 = (((((((((((((((((1.9276929244866999e-45 - fConst45) * fConst0) + -2.0941981558611899e-38) * fConst0) + 2.8753543428318201e-33) * fConst0) + -9.4645074843530499e-29) * fConst0) + 5.3576410762647504e-25) * fConst0) + -9.49845516087586e-22) * fConst0) + 4.4484539106984797e-19) * fConst0) + -9.3229634893884393e-18) * fConst0) + -1.00419429059393e-30);
		fConst47 = (((((((((((((((fConst41 + 9.6195508249235305e-43) * fConst0) + 1.04533519422991e-35) * fConst0) + 1.4514425450916399e-30) * fConst0) + 4.9565167450504901e-26) * fConst0) + 3.19656005357728e-22) * fConst0) + 6.68788715156814e-19) * fConst0) + 3.4729196597769001e-16) * fConst0) + 1.2043524989028e-14);
		fConst48 = (((((((((((((((((fConst43 + 1.92774224918492e-45) * fConst0) + 2.0953036461053901e-38) * fConst0) + 2.93116301405905e-33) * fConst0) + 1.00383309850293e-28) * fConst0) + 6.4568586692819101e-25) * fConst0) + 1.3460238052357899e-21) * fConst0) + 6.97525353190717e-19) * fConst0) + 2.39985772257666e-17) * fConst0) + 2.04412947700812e-16);
		fConst49 = (((((((((((((((((-1.9276929244866999e-45 - fConst45) * fConst0) + -2.0941981558611899e-38) * fConst0) + -2.8753543428318201e-33) * fConst0) + -9.4645074843530499e-29) * fConst0) + -5.3576410762647504e-25) * fConst0) + -9.49845516087586e-22) * fConst0) + -4.4484539106984797e-19) * fConst0) + -9.3229634893884393e-18) * fConst0) + 1.00419429059393e-30);
		fConst50 = (3.0951271420692299e-46 * fConst0);
		fConst51 = (((((((((((fConst50 + -1.85753618081958e-37) * fConst0) + 2.7196265868201601e-29) * fConst0) + -5.0341703326695798e-22) * fConst0) + -2.4164864281124899e-18) * fConst0) + -3.2005681921159298e-15) * fConst0) + -7.0256690941533105e-13);
		fConst52 = (6.1902542841384496e-49 * fConst0);
		fConst53 = (((((((((((((fConst52 + -3.7150754567663e-40) * fConst0) + 5.4392717490021403e-32) * fConst0) + -1.00686126279978e-24) * fConst0) + -4.3295558229580298e-21) * fConst0) + -3.9846499561193601e-18) * fConst0) + 1.7954343732852598e-15) * fConst0) + 7.0256690941533105e-13);
		fConst54 = ((((((((((((3.7150723616391497e-40 - fConst52) * fConst0) + -5.4392531736403303e-32) * fConst0) + 1.00683406653392e-24) * fConst0) + 4.8329728562249901e-21) * fConst0) + 6.40113638423185e-18) * fConst0) + 1.40513381883066e-15) * fConst0);
		fConst55 = (1.85707628524153e-45 * fConst0);
		fConst56 = (((((((((7.4301447232783101e-37 - fConst55) * fConst0) + -5.4392531736403303e-29) * fConst1) + -4.8329728562249899e-18) * fConst0) + -1.28022727684637e-14) * fConst0) + -4.2154014564919897e-12);
		fConst57 = (4.9522034273107597e-48 * fConst0);
		fConst58 = (((((((((((2.22904527405978e-39 - fConst57) * fConst0) + -2.17570869960085e-31) * fConst0) + 2.0137225255995699e-24) * fConst1) + -7.9692999122387201e-18) * fConst0) + 7.1817374931410503e-15) * fConst0) + 4.2154014564919897e-12);
		fConst59 = ((((((((((fConst57 + -2.22904341698349e-39) * fConst0) + 2.1757012694561299e-31) * fConst0) + -2.0136681330678301e-24) * fConst1) + 1.28022727684637e-17) * fConst0) + 5.6205352753226501e-15) * fConst0);
		fConst60 = (4.0236652846899901e-45 * fConst0);
		fConst61 = (((((((((((fConst60 + -5.5726085424587297e-37) * fConst0) + -8.1588797604604899e-29) * fConst0) + 2.51708516633479e-21) * fConst0) + 7.2494592843374806e-18) * fConst0) + -9.6017045763477797e-15) * fConst0) + -9.1333698223993096e-12);
		fConst62 = (1.67136865671738e-47 * fConst0);
		fConst63 = (((((((((((((fConst62 + -4.82959809379619e-39) * fConst0) + 1.6317815247006401e-31) * fConst0) + 3.0205837883993501e-24) * fConst0) + 2.1647779114790099e-20) * fConst0) + 1.1953949868358099e-17) * fConst0) + 5.3863031198557901e-15) * fConst0) + 9.1333698223993096e-12);
		fConst64 = ((((((((((((4.8295940701308999e-39 - fConst62) * fConst0) + -1.6317759520921e-31) * fConst0) + -3.0205021996017499e-24) * fConst0) + -2.4164864281124899e-20) * fConst0) + -1.92034091526956e-17) * fConst0) + 4.2154014564919903e-15) * fConst0);
		fConst65 = (2.4761017136553799e-45 * fConst0);
		fConst66 = (((((((((-1.48602894465566e-36 - fConst65) * fConst0) + 2.1757012694561299e-28) * fConst1) + 1.9331891424899901e-17) * fConst0) + 2.5604545536927401e-14) * fConst0) + -5.62053527532265e-12);
		fConst67 = (2.9713220563864601e-47 * fConst0);
		fConst68 = (((((((((((2.97206036541304e-39 - fConst67) * fConst0) + 4.3514173992017096e-31) * fConst0) + -8.0548901023982694e-24) * fConst1) + 3.1877199648954899e-17) * fConst0) + -1.4363474986282101e-14) * fConst0) + 5.62053527532265e-12);
		fConst69 = ((((((((((fConst67 + -2.9720578893113197e-39) * fConst0) + -4.3514025389122599e-31) * fConst0) + 8.0546725322713204e-24) * fConst1) + -5.12090910738548e-17) * fConst0) + -1.12410705506453e-14) * fConst0);
		fConst70 = (4.3331779988969202e-45 * fConst0);
		fConst71 = (((((((((((2.60055065314741e-36 - fConst70) * fConst0) + 5.4392531736403303e-29) * fConst0) + -5.03417033266958e-21) * fConst0) + -4.8329728562249899e-18) * fConst0) + 4.4807954689623001e-14) * fConst0) + 9.8359367318146397e-12);
		fConst72 = (2.5999067993381499e-47 * fConst0);
		fConst73 = (((((((((((((fConst72 + 5.20110563947282e-39) * fConst0) + -7.6149804486029898e-31) * fConst0) + -2.0137225255995699e-24) * fConst0) + -4.3295558229580301e-20) * fConst0) + -7.9692999122387201e-18) * fConst0) + -2.5136081225993701e-14) * fConst0) + -9.8359367318146397e-12);
		fConst74 = ((((((((((((-5.2011013062948198e-39 - fConst72) * fConst0) + 7.6149544430964599e-31) * fConst0) + 2.0136681330678301e-24) * fConst0) + 4.8329728562249901e-20) * fConst0) + 1.28022727684637e-17) * fConst0) + -1.96718734636293e-14) * fConst0);
		fConst75 = ((((((8.6663559977938304e-45 * fConst1) + -3.2635519041842e-28) * fConst1) + -2.8997837137349898e-17) * fConst1) + 1.9671873463629299e-11);
		fConst76 = (((((1.20823351535974e-23 - (1.04022112789456e-38 * fConst1)) * fConst1) + -4.7815799473432299e-17) * fConst1) + -1.9671873463629299e-11);
		fConst77 = (((((1.0402202612589601e-38 * fConst1) + -1.2082008798407e-23) * fConst1) + 7.6813636610782203e-17) * fConst1);
		fConst78 = (((((((((((-2.60055065314741e-36 - fConst70) * fConst0) + 5.4392531736403303e-29) * fConst0) + 5.03417033266958e-21) * fConst0) + -4.8329728562249899e-18) * fConst0) + -4.4807954689623001e-14) * fConst0) + 9.8359367318146397e-12);
		fConst79 = (((((((((((((5.20110563947282e-39 - fConst72) * fConst0) + 7.6149804486029898e-31) * fConst0) + -2.0137225255995699e-24) * fConst0) + 4.3295558229580301e-20) * fConst0) + -7.9692999122387201e-18) * fConst0) + 2.5136081225993701e-14) * fConst0) + -9.8359367318146397e-12);
		fConst80 = ((((((((((((fConst72 + -5.2011013062948198e-39) * fConst0) + -7.6149544430964599e-31) * fConst0) + 2.0136681330678301e-24) * fConst0) + -4.8329728562249901e-20) * fConst0) + 1.28022727684637e-17) * fConst0) + 1.96718734636293e-14) * fConst0);
		fConst81 = (((((((((1.48602894465566e-36 - fConst65) * fConst0) + 2.1757012694561299e-28) * fConst1) + 1.9331891424899901e-17) * fConst0) + -2.5604545536927401e-14) * fConst0) + -5.62053527532265e-12);
		fConst82 = (((((((((((fConst67 + 2.97206036541304e-39) * fConst0) + -4.3514173992017096e-31) * fConst0) + -8.0548901023982694e-24) * fConst1) + 3.1877199648954899e-17) * fConst0) + 1.4363474986282101e-14) * fConst0) + 5.62053527532265e-12);
		fConst83 = ((((((((((-2.9720578893113197e-39 - fConst67) * fConst0) + 4.3514025389122599e-31) * fConst0) + 8.0546725322713204e-24) * fConst1) + -5.12090910738548e-17) * fConst0) + 1.12410705506453e-14) * fConst0);
		fConst84 = (((((((((((fConst60 + 5.5726085424587297e-37) * fConst0) + -8.1588797604604899e-29) * fConst0) + -2.51708516633479e-21) * fConst0) + 7.2494592843374806e-18) * fConst0) + 9.6017045763477797e-15) * fConst0) + -9.1333698223993096e-12);
		fConst85 = (((((((((((((-4.82959809379619e-39 - fConst62) * fConst0) + -1.6317815247006401e-31) * fConst0) + 3.0205837883993501e-24) * fConst0) + -2.1647779114790099e-20) * fConst0) + 1.1953949868358099e-17) * fConst0) + -5.3863031198557901e-15) * fConst0) + 9.1333698223993096e-12);
		fConst86 = ((((((((((((fConst62 + 4.8295940701308999e-39) * fConst0) + 1.6317759520921e-31) * fConst0) + -3.0205021996017499e-24) * fConst0) + 2.4164864281124899e-20) * fConst0) + -1.92034091526956e-17) * fConst0) + -4.2154014564919903e-15) * fConst0);
		fConst87 = (((((((((-7.4301447232783101e-37 - fConst55) * fConst0) + -5.4392531736403303e-29) * fConst1) + -4.8329728562249899e-18) * fConst0) + 1.28022727684637e-14) * fConst0) + -4.2154014564919897e-12);
		fConst88 = (((((((((((fConst57 + 2.22904527405978e-39) * fConst0) + 2.17570869960085e-31) * fConst0) + 2.0137225255995699e-24) * fConst1) + -7.9692999122387201e-18) * fConst0) + -7.1817374931410503e-15) * fConst0) + 4.2154014564919897e-12);
		fConst89 = ((((((((((-2.22904341698349e-39 - fConst57) * fConst0) + -2.1757012694561299e-31) * fConst0) + -2.0136681330678301e-24) * fConst1) + 1.28022727684637e-17) * fConst0) + -5.6205352753226501e-15) * fConst0);
		fConst90 = (((((((((((fConst50 + 1.85753618081958e-37) * fConst0) + 2.7196265868201601e-29) * fConst0) + 5.0341703326695798e-22) * fConst0) + -2.4164864281124899e-18) * fConst0) + 3.2005681921159298e-15) * fConst0) + -7.0256690941533105e-13);
		fConst91 = (((((((((((((-3.7150754567663e-40 - fConst52) * fConst0) + -5.4392717490021403e-32) * fConst0) + -1.00686126279978e-24) * fConst0) + 4.3295558229580298e-21) * fConst0) + -3.9846499561193601e-18) * fConst0) + -1.7954343732852598e-15) * fConst0) + 7.0256690941533105e-13);
		fConst92 = ((((((((((((fConst52 + 3.7150723616391497e-40) * fConst0) + 5.4392531736403303e-32) * fConst0) + 1.00683406653392e-24) * fConst0) + -4.8329728562249901e-21) * fConst0) + 6.40113638423185e-18) * fConst0) + -1.40513381883066e-15) * fConst0);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec1[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 11); l1 = (l1 + 1)) {
			fRec0[l1] = 0.0;
			
		}
		
	}
	
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void instanceInit(int samplingFreq) {
		instanceConstants(samplingFreq);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("Tube Preamp");
		ui_interface->declare(&fVslider0, "name", "PR6v");
		ui_interface->addVerticalSlider("PR6v", &fVslider0, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0070000000000000062 * double(fVslider0));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec1[0] = (fSlow0 + (0.99299999999999999 * fRec1[1]));
			double fTemp0 = ((fConst0 * (fConst47 + (fRec1[0] * (fConst48 + (fConst49 * fRec1[0]))))) + 1.04033106020143e-13);
			fRec0[0] = (double(input0[i]) - (((((((((((fRec0[1] * ((fConst0 * (fConst3 + (fRec1[0] * (fConst5 + (fConst7 * fRec1[0]))))) + 1.0403310602014299e-12)) + (fRec0[2] * ((fConst0 * (fConst9 + (fRec1[0] * (fConst11 + (fConst13 * fRec1[0]))))) + 4.6814897709064503e-12))) + (fRec0[3] * ((fConst0 * (fConst15 + (fRec1[0] * (fConst17 + (fConst19 * fRec1[0]))))) + 1.24839727224172e-11))) + (fRec0[4] * ((fConst0 * (fConst21 + (fRec1[0] * (fConst23 + (fConst25 * fRec1[0]))))) + 2.1846952264230099e-11))) + (fRec0[5] * ((fConst1 * (fConst26 + (fRec1[0] * (fConst27 + (fConst28 * fRec1[0]))))) + 2.62163427170761e-11))) + (fRec0[6] * ((fConst0 * (fConst29 + (fRec1[0] * (fConst30 + (fConst31 * fRec1[0]))))) + 2.1846952264230099e-11))) + (fRec0[7] * ((fConst0 * (fConst32 + (fRec1[0] * (fConst33 + (fConst34 * fRec1[0]))))) + 1.24839727224172e-11))) + (fRec0[8] * ((fConst0 * (fConst35 + (fRec1[0] * (fConst36 + (fConst37 * fRec1[0]))))) + 4.6814897709064503e-12))) + (fRec0[9] * ((fConst0 * (fConst38 + (fRec1[0] * (fConst39 + (fConst40 * fRec1[0]))))) + 1.0403310602014299e-12))) + (fRec0[10] * ((fConst0 * (fConst42 + (fRec1[0] * (fConst44 + (fConst46 * fRec1[0]))))) + 1.04033106020143e-13))) / fTemp0));
			output0[i] = FAUSTFLOAT((fConst1 * ((((((((((((fRec0[0] * (fConst51 + (fRec1[0] * (fConst53 + (fConst54 * fRec1[0]))))) + (fRec0[1] * (fConst56 + (fRec1[0] * (fConst58 + (fConst59 * fRec1[0])))))) + (fRec0[2] * (fConst61 + (fRec1[0] * (fConst63 + (fConst64 * fRec1[0])))))) + (fRec0[3] * (fConst66 + (fRec1[0] * (fConst68 + (fConst69 * fRec1[0])))))) + (fRec0[4] * (fConst71 + (fRec1[0] * (fConst73 + (fConst74 * fRec1[0])))))) + (fRec0[5] * (fConst75 + (fRec1[0] * (fConst76 + (fConst77 * fRec1[0])))))) + (fRec0[6] * (fConst78 + (fRec1[0] * (fConst79 + (fConst80 * fRec1[0])))))) + (fRec0[7] * (fConst81 + (fRec1[0] * (fConst82 + (fConst83 * fRec1[0])))))) + (fRec0[8] * (fConst84 + (fRec1[0] * (fConst85 + (fConst86 * fRec1[0])))))) + (fRec0[9] * (fConst87 + (fRec1[0] * (fConst88 + (fConst89 * fRec1[0])))))) + (fRec0[10] * (fConst90 + (fRec1[0] * (fConst91 + (fConst92 * fRec1[0])))))) / fTemp0)));
			fRec1[1] = fRec1[0];
			for (int j0 = 10; (j0 > 0); j0 = (j0 - 1)) {
				fRec0[j0] = fRec0[(j0 - 1)];
				
			}
			
		}
		
	}

	
};

#endif
