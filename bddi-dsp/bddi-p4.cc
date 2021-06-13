// generated from file 'dkbuild/bddi-p4/bddi-p4.dsp' by dsp2cc:
// Code generated with Faust 0.9.95 (http://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace bddi_p4 {

class Dsp: public PluginDef {
private:
	int fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fRec1[3];
	double 	fConst9;

	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	void init(unsigned int samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
	static void init_static(unsigned int samplingFreq, PluginDef*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef*);
	static int register_params_static(const ParamReg& reg);
	static void del_instance(PluginDef *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginDef() {
	version = PLUGINDEF_VERSION;
	flags = 0;
	id = "bddi-p4";
	name = N_("BDDI part 4");
	groups = 0;
	description = ""; // description (tooltip)
	category = N_("External");       // category
	shortname = "";     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = load_ui_f_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<3; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (6.98477774151794e-10 * fConst0);
	fConst2 = (-4.81045299002613e-06 - fConst1);
	fConst3 = (7.21527540698803e-10 * fConst0);
	fConst4 = (6.984707894439e-10 * fConst0);
	fConst5 = (4.81040488597727e-06 - fConst4);
	fConst6 = (7.21520325495548e-10 * fConst0);
	fConst7 = (4.81045299002613e-06 - fConst1);
	fConst8 = faustpower<2>(fConst0);
	fConst9 = (-4.81040488597727e-06 - fConst4);
	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		double fTemp0 = ((fConst0 * (fConst3 + ((fConst2 * fRec0[0]) + 5.31859556913413e-06))) + 0.00240522649501306);
		fRec1[0] = ((double)input0[i] - (((fRec1[1] * ((fConst8 * ((1.39695554830359e-09 * fRec0[0]) + -1.44305508139761e-09)) + 0.00481045299002613)) + (fRec1[2] * ((fConst0 * (fConst3 + ((fConst7 * fRec0[0]) + -5.31859556913413e-06))) + 0.00240522649501306))) / fTemp0));
		output0[i] = (FAUSTFLOAT)((((fRec1[1] * ((fConst8 * ((1.3969415788878e-09 * fRec0[0]) + -1.4430406509911e-09)) + 0.00481040488597727)) + (fRec1[0] * ((fConst0 * (fConst6 + ((fConst9 * fRec0[0]) + 2.11927197656615e-05))) + 0.00240520244298863))) + (fRec1[2] * ((fConst0 * (fConst6 + ((fConst5 * fRec0[0]) + -2.11927197656615e-05))) + 0.00240520244298863))) / fTemp0);
		// post processing
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerVar("bddi-p4.PR19v",N_("PR19v"),"S","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("bddi-p4" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("PR19v"), "PR19v");
b.closeBox();
b.openHorizontalBox("");

    b.create_small_rackknobr(PARAM("PR19v"), "PR19v");
b.closeBox();

#undef PARAM
        return 0;
    }
	return -1;
}

int Dsp::load_ui_f_static(const UiBuilder& b, int form)
{
	return static_cast<Dsp*>(b.plugin)->load_ui_f(b, form);
}
PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

extern "C" __attribute__ ((visibility ("default"))) int
get_gx_plugin(unsigned int idx, PluginDef **pplugin)
{
    if (!pplugin) {
        return 1;
    }
    if (idx > 0) {
        return -1;
    }
    *pplugin = new Dsp();
    return 1;
}

} // end namespace bddi_p4
