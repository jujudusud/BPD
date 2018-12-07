/* ------------------------------------------------------------
name: "VTBassDI-presence"
Code generated with Faust 2.5.23 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */

#ifndef  __VtbdiPresence_H__
#define  __VtbdiPresence_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <cmath>
#include <math.h>


#ifndef FAUSTCLASS 
#define FAUSTCLASS VtbdiPresence
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class VtbdiPresence : public dsp {
	
 private:
	
	int fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	FAUSTFLOAT fVslider0;
	double fRec1[2];
	double fConst3;
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
	double fRec0[6];
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
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.0");
		m->declare("category", "External");
		m->declare("filename", "VtbdiPresence");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("id", "VTBassDI-presence");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "VTBassDI-presence");
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
		fConst0 = min(192000.0, max(1.0, double(fSamplingFreq)));
		fConst1 = (1.72962326171492e-19 * fConst0);
		fConst2 = (((((-5.5434970689172896e-16 - fConst1) * fConst0) + 2.9965621913392299e-12) * fConst0) + 3.0742822543785698e-08);
		fConst3 = (6.7205425216757894e-24 * fConst0);
		fConst4 = (((((((-4.8795598316927003e-19 - fConst3) * fConst0) + -7.7322758182430201e-15) * fConst0) + 3.9199589341385303e-11) * fConst0) + 1.34514991071765e-10);
		fConst5 = ((((fConst0 * ((fConst0 * (fConst3 + 4.8997214592577304e-19)) + 4.9495962706243097e-15)) + -1.9472051612869001e-11) * fConst0) + -1.3149070485998499e-10);
		fConst6 = (1.1530821744766201e-19 * fConst0);
		fConst7 = (((((fConst6 + -1.1086994137834601e-15) * fConst0) + -5.9931243826784599e-12) * fConst0) + 2.0495215029190501e-08);
		fConst8 = (1.3441085043351599e-23 * fConst0);
		fConst9 = ((((((fConst0 * (fConst8 + 3.2530398877951302e-19)) + -1.5464551636485999e-14) * fConst0) + -7.8399178682770606e-11) * fConst0) + 8.9676660714509997e-11);
		fConst10 = (((((((-3.26648097283848e-19 - fConst8) * fConst0) + 9.89919254124861e-15) * fConst0) + 3.89441032257379e-11) * fConst0) + -8.7660469906656905e-11);
		fConst11 = ((((fConst0 * (fConst6 + 1.1086994137834601e-15)) + -5.9931243826784599e-12) * fConst0) + -2.0495215029190501e-08);
		fConst12 = (((((((3.2530398877951302e-19 - fConst8) * fConst0) + 1.5464551636485999e-14) * fConst0) + -7.8399178682770606e-11) * fConst0) + -8.9676660714509997e-11);
		fConst13 = (((((((fConst8 + -3.26648097283848e-19) * fConst0) + -9.89919254124861e-15) * fConst0) + 3.89441032257379e-11) * fConst0) + 8.7660469906656905e-11);
		fConst14 = (((((5.5434970689172896e-16 - fConst1) * fConst0) + 2.9965621913392299e-12) * fConst0) + -3.0742822543785698e-08);
		fConst15 = (((((((fConst3 + -4.8795598316927003e-19) * fConst0) + 7.7322758182430201e-15) * fConst0) + 3.9199589341385303e-11) * fConst0) + -1.34514991071765e-10);
		fConst16 = (((((((4.8997214592577304e-19 - fConst3) * fConst0) + -4.9495962706243097e-15) * fConst0) + -1.9472051612869001e-11) * fConst0) + 1.3149070485998499e-10);
		fConst17 = (5.76541087238308e-20 * fConst0);
		fConst18 = (((((fConst17 + -5.5434970689172896e-16) * fConst0) + 2.9965621913392299e-12) * fConst0) + -1.0247607514595201e-08);
		fConst19 = (1.3441085043351601e-24 * fConst0);
		fConst20 = (((((((1.6265199438975699e-19 - fConst19) * fConst0) + -7.7322758182430201e-15) * fConst0) + 3.9199589341385303e-11) * fConst0) + -4.4838330357254999e-11);
		fConst21 = (((((((fConst19 + -1.63324048641924e-19) * fConst0) + 4.9495962706243097e-15) * fConst0) + -1.9472051612869001e-11) * fConst0) + 4.3830234953328401e-11);
		fConst22 = ((fConst0 * ((fConst0 * (fConst17 + 5.5434970689172896e-16)) + 2.9965621913392299e-12)) + 1.0247607514595201e-08);
		fConst23 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst19 + 1.6265199438975699e-19)) + 7.7322758182430201e-15)) + 3.9199589341385303e-11)) + 4.4838330357254999e-11);
		fConst24 = (((((((-1.63324048641924e-19 - fConst19) * fConst0) + -4.9495962706243097e-15) * fConst0) + -1.9472051612869001e-11) * fConst0) + -4.3830234953328401e-11);
		fConst25 = (4.1417369612656002e-15 * fConst0);
		fConst26 = ((-2.23640373505496e-11 - fConst25) * fConst0);
		fConst27 = (fConst26 + -1.00571596044962e-08);
		fConst28 = (5.6003818775564396e-20 * fConst0);
		fConst29 = (((-1.6305133849299e-15 - fConst28) * fConst0) + -4.4355641592217002e-13);
		fConst30 = ((fConst0 * (fConst28 + 4.4587062330958997e-15)) + 1.92850615618335e-11);
		fConst31 = ((fConst25 + -2.23640373505496e-11) * fConst0);
		fConst32 = (fConst31 + -3.0171478813488503e-08);
		fConst33 = (1.6801145632669301e-19 * fConst0);
		fConst34 = ((fConst0 * (fConst33 + 1.6305133849299e-15)) + -4.4355641592217002e-13);
		fConst35 = (((-4.4587062330958997e-15 - fConst33) * fConst0) + 1.92850615618335e-11);
		fConst36 = (8.2834739225312099e-15 * fConst0);
		fConst37 = ((fConst0 * (fConst36 + 4.4728074701099097e-11)) + -2.01143192089923e-08);
		fConst38 = (1.1200763755112901e-19 * fConst0);
		fConst39 = (((3.2610267698597901e-15 - fConst38) * fConst0) + 8.8711283184434004e-13);
		fConst40 = (((fConst38 + -8.9174124661917995e-15) * fConst0) + -3.8570123123666903e-11);
		fConst41 = (((4.4728074701099097e-11 - fConst36) * fConst0) + 2.01143192089923e-08);
		fConst42 = (((-3.2610267698597901e-15 - fConst38) * fConst0) + 8.8711283184434004e-13);
		fConst43 = ((fConst0 * (fConst38 + 8.9174124661917995e-15)) + -3.8570123123666903e-11);
		fConst44 = (fConst26 + 3.0171478813488503e-08);
		fConst45 = (((fConst33 + -1.6305133849299e-15) * fConst0) + -4.4355641592217002e-13);
		fConst46 = (((4.4587062330958997e-15 - fConst33) * fConst0) + 1.92850615618335e-11);
		fConst47 = (fConst31 + 1.00571596044962e-08);
		fConst48 = (((1.6305133849299e-15 - fConst28) * fConst0) + -4.4355641592217002e-13);
		fConst49 = (((fConst28 + -4.4587062330958997e-15) * fConst0) + 1.92850615618335e-11);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec1[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 6); l1 = (l1 + 1)) {
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
	
	virtual VtbdiPresence* clone() {
		return new VtbdiPresence();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("VTBassDI-presence");
		ui_interface->declare(&fVslider0, "name", "PRprv");
		ui_interface->addVerticalSlider("PRprv", &fVslider0, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0070000000000000062 * (1.0 - double(fVslider0)));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec1[0] = (fSlow0 + (0.99299999999999999 * fRec1[1]));
			double fTemp0 = ((fConst0 * (fConst22 + (fRec1[0] * (fConst23 + (fConst24 * fRec1[0]))))) + 6.6687702481489194e-08);
			fRec0[0] = (double(input0[i]) - ((((((fRec0[1] * ((fConst0 * (fConst2 + (fRec1[0] * (fConst4 + (fConst5 * fRec1[0]))))) + 3.3343851240744598e-07)) + (fRec0[2] * ((fConst0 * (fConst7 + (fRec1[0] * (fConst9 + (fConst10 * fRec1[0]))))) + 6.6687702481489197e-07))) + (fRec0[3] * ((fConst0 * (fConst11 + (fRec1[0] * (fConst12 + (fConst13 * fRec1[0]))))) + 6.6687702481489197e-07))) + (fRec0[4] * ((fConst0 * (fConst14 + (fRec1[0] * (fConst15 + (fConst16 * fRec1[0]))))) + 3.3343851240744598e-07))) + (fRec0[5] * ((fConst0 * (fConst18 + (fRec1[0] * (fConst20 + (fConst21 * fRec1[0]))))) + 6.6687702481489194e-08))) / fTemp0));
			output0[i] = FAUSTFLOAT((fConst0 * (((((((fRec0[0] * (fConst27 + (fConst0 * (fRec1[0] * (fConst29 + (fConst30 * fRec1[0])))))) + (fRec0[1] * (fConst32 + (fConst0 * (fRec1[0] * (fConst34 + (fConst35 * fRec1[0]))))))) + (fRec0[2] * (fConst37 + (fConst0 * (fRec1[0] * (fConst39 + (fConst40 * fRec1[0]))))))) + (fRec0[3] * (fConst41 + (fConst0 * (fRec1[0] * (fConst42 + (fConst43 * fRec1[0]))))))) + (fRec0[4] * (fConst44 + (fConst0 * (fRec1[0] * (fConst45 + (fConst46 * fRec1[0]))))))) + (fRec0[5] * (fConst47 + (fConst0 * (fRec1[0] * (fConst48 + (fConst49 * fRec1[0]))))))) / fTemp0)));
			fRec1[1] = fRec1[0];
			for (int j0 = 5; (j0 > 0); j0 = (j0 - 1)) {
				fRec0[j0] = fRec0[(j0 - 1)];
				
			}
			
		}
		
	}

	
};

#endif
