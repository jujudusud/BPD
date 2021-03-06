// generated from file 'dkbuild/bddi-p2/bddi-p2.dsp' by dsp2cc:
// Code generated with Faust 0.9.95 (http://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace bddi_p2 {

class Dsp: public PluginDef {
private:
	int fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fRec0[4];
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;

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
	id = "bddi-p2";
	name = N_("BDDI part 2");
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
	for (int i=0; i<4; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (7.06776156977829e-15 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * (9.24358073072243e-11 - fConst1)) + -1.11934786830977e-07)) + 1.71426713475523e-05);
	fConst3 = (2.12032847093349e-14 * fConst0);
	fConst4 = ((fConst0 * ((fConst0 * (fConst3 + -9.24358073072243e-11)) + -1.11934786830977e-07)) + 5.14280140426569e-05);
	fConst5 = ((fConst0 * ((fConst0 * (-9.24358073072243e-11 - fConst3)) + 1.11934786830977e-07)) + 5.14280140426569e-05);
	fConst6 = (1.0 / ((fConst0 * ((fConst0 * (fConst1 + 9.24358073072243e-11)) + 1.11934786830977e-07)) + 1.71426713475523e-05));
	fConst7 = ((fConst0 * ((fConst0 * (4.81892834303065e-12 - fConst1)) + -3.65070329017474e-08)) + 1.71426713475523e-05);
	fConst8 = ((fConst0 * ((fConst0 * (fConst3 + -4.81892834303065e-12)) + -3.65070329017474e-08)) + 5.14280140426569e-05);
	fConst9 = ((fConst0 * ((fConst0 * (-4.81892834303065e-12 - fConst3)) + 3.65070329017474e-08)) + 5.14280140426569e-05);
	fConst10 = ((fConst0 * ((fConst0 * (fConst1 + 4.81892834303065e-12)) + 3.65070329017474e-08)) + 1.71426713475523e-05);
	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst6 * (((fConst5 * fRec0[1]) + (fConst4 * fRec0[2])) + (fConst2 * fRec0[3]))));
		output0[i] = (FAUSTFLOAT)(fConst6 * ((((fConst10 * fRec0[0]) + (fConst9 * fRec0[1])) + (fConst8 * fRec0[2])) + (fConst7 * fRec0[3])));
		// post processing
		for (int i=3; i>0; i--) fRec0[i] = fRec0[i-1];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("bddi-p2" "." p)

b.openHorizontalhideBox("");
b.closeBox();
b.openHorizontalBox("");
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

} // end namespace bddi_p2
