/* ------------------------------------------------------------
name: "VTBassDI"
Code generated with Faust 2.5.23 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */

#ifndef  __VtbdiMid_Stage2_H__
#define  __VtbdiMid_Stage2_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <cmath>
#include <math.h>


#ifndef FAUSTCLASS 
#define FAUSTCLASS VtbdiMid_Stage2
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class VtbdiMid_Stage2 : public dsp {
	
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
	double fRec0[4];
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
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.0");
		m->declare("category", "External");
		m->declare("filename", "VtbdiMid_Stage2");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("id", "VTBassDI");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "VTBassDI");
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
		fConst1 = (4.41983174190694e-16 * fConst0);
		fConst2 = (((-1.9524606473678699e-10 - fConst1) * fConst0) + 1.45909073240292e-06);
		fConst3 = (2.6786859041860301e-14 * fConst0);
		fConst4 = (((-4.0280636684358599e-10 - fConst3) * fConst0) + 1.34810933040613e-10);
		fConst5 = ((fConst0 * (fConst3 + 4.0280636684358599e-10)) + -1.28119587969078e-06);
		fConst6 = (((fConst1 + -1.9524606473678699e-10) * fConst0) + -1.45909073240292e-06);
		fConst7 = (((fConst3 + -4.0280636684358599e-10) * fConst0) + -1.34810933040613e-10);
		fConst8 = (((4.0280636684358599e-10 - fConst3) * fConst0) + 1.28119587969078e-06);
		fConst9 = (1.47327724730231e-16 * fConst0);
		fConst10 = (((1.9524606473678699e-10 - fConst9) * fConst0) + -1.45909073240292e-06);
		fConst11 = (8.9289530139534193e-15 * fConst0);
		fConst12 = (((4.0280636684358599e-10 - fConst11) * fConst0) + -1.34810933040613e-10);
		fConst13 = (((fConst11 + -4.0280636684358599e-10) * fConst0) + 1.28119587969078e-06);
		fConst14 = ((fConst0 * (fConst9 + 1.9524606473678699e-10)) + 1.45909073240292e-06);
		fConst15 = ((fConst0 * (fConst11 + 4.0280636684358599e-10)) + 1.34810933040613e-10);
		fConst16 = (((-4.0280636684358599e-10 - fConst11) * fConst0) + -1.28119587969078e-06);
		fConst17 = (1.92148399400684e-10 * fConst0);
		fConst18 = (-1.7049513657989899e-07 - fConst17);
		fConst19 = (3.7202013436724902e-10 * fConst0);
		fConst20 = (-2.56212213751549e-06 - fConst19);
		fConst21 = (fConst19 + 1.2810610687577399e-06);
		fConst22 = (fConst17 + -1.7049513657989899e-07);
		fConst23 = (fConst19 + -2.56212213751549e-06);
		fConst24 = (1.2810610687577399e-06 - fConst19);
		fConst25 = (fConst17 + 1.7049513657989899e-07);
		fConst26 = (fConst19 + 2.56212213751549e-06);
		fConst27 = (-1.2810610687577399e-06 - fConst19);
		fConst28 = (1.7049513657989899e-07 - fConst17);
		fConst29 = (2.56212213751549e-06 - fConst19);
		fConst30 = (fConst19 + -1.2810610687577399e-06);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec1[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 4); l1 = (l1 + 1)) {
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
	
	virtual VtbdiMid_Stage2* clone() {
		return new VtbdiMid_Stage2();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("VTBassDI");
		ui_interface->declare(&fVslider0, "name", "PRmidv");
		ui_interface->addVerticalSlider("PRmidv", &fVslider0, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0070000000000000062 * double(fVslider0));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec1[0] = (fSlow0 + (0.99299999999999999 * fRec1[1]));
			double fTemp0 = ((fConst0 * (fConst14 + (fRec1[0] * (fConst15 + (fConst16 * fRec1[0]))))) + 0.00031039881994326702);
			fRec0[0] = (double(input0[i]) - ((((fRec0[1] * ((fConst0 * (fConst2 + (fRec1[0] * (fConst4 + (fConst5 * fRec1[0]))))) + 0.00093119645982980099)) + (fRec0[2] * ((fConst0 * (fConst6 + (fRec1[0] * (fConst7 + (fConst8 * fRec1[0]))))) + 0.00093119645982980099))) + (fRec0[3] * ((fConst0 * (fConst10 + (fRec1[0] * (fConst12 + (fConst13 * fRec1[0]))))) + 0.00031039881994326702))) / fTemp0));
			output0[i] = FAUSTFLOAT((((((fRec0[0] * ((fConst0 * (fConst18 + (fRec1[0] * (fConst20 + (fConst21 * fRec1[0]))))) + -0.00031036615893085298)) + (fRec0[1] * ((fConst0 * (fConst22 + (fRec1[0] * (fConst23 + (fConst24 * fRec1[0]))))) + -0.00093109847679255899))) + (fRec0[2] * ((fConst0 * (fConst25 + (fRec1[0] * (fConst26 + (fConst27 * fRec1[0]))))) + -0.00093109847679255899))) + (fRec0[3] * ((fConst0 * (fConst28 + (fRec1[0] * (fConst29 + (fConst30 * fRec1[0]))))) + -0.00031036615893085298))) / fTemp0));
			fRec1[1] = fRec1[0];
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec0[j0] = fRec0[(j0 - 1)];
				
			}
			
		}
		
	}

	
};

#endif
