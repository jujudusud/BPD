/* ------------------------------------------------------------
name: "VTBassDI"
Code generated with Faust 2.5.23 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */

#ifndef  __VtbdiMid_Stage1_H__
#define  __VtbdiMid_Stage1_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <cmath>
#include <math.h>

double VtbdiMid_Stage1_faustpower2_f(double value) {
	return (value * value);
	
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS VtbdiMid_Stage1
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class VtbdiMid_Stage1 : public dsp {
	
 private:
	
	int fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	double fRec0[3];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("category", "External");
		m->declare("filename", "VtbdiMid_Stage1");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("id", "VTBassDI");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "VTBassDI");
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
		fConst1 = (2.32086727536791e-10 * fConst0);
		fConst2 = (1.0 / ((fConst0 * (fConst1 + 9.6830972029069193e-06)) + 0.00048351401570164798));
		fConst3 = (9.6701590587832499e-05 * fConst0);
		fConst4 = (0.0 - fConst3);
		fConst5 = (0.00096702803140329596 - (4.64173455073582e-10 * VtbdiMid_Stage1_faustpower2_f(fConst0)));
		fConst6 = (((fConst1 + -9.6830972029069193e-06) * fConst0) + 0.00048351401570164798);
		
	}
	
	virtual void instanceResetUserInterface() {
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 3); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0;
			
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
	
	virtual VtbdiMid_Stage1* clone() {
		return new VtbdiMid_Stage1();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("VTBassDI");
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (double(input0[i]) - (fConst2 * ((fConst5 * fRec0[1]) + (fConst6 * fRec0[2]))));
			output0[i] = FAUSTFLOAT((fConst2 * ((fConst4 * fRec0[0]) + (fConst3 * fRec0[2]))));
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			
		}
		
	}

	
};

#endif
