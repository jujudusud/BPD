// generated from file 'dkbuild/bddi-p11/bddi-p11.dsp' by dsp2cc:
// Code generated with Faust 0.9.95 (http://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace bddi_p11 {

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
	double 	fConst9;
	double 	fConst10;
	FAUSTFLOAT 	fslider1;
	double 	fRec1[2];
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fRec2[6];
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;

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
	id = "bddi-p11";
	name = N_("BDDI part 11");
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
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<6; i++) fRec2[i] = 0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (4.43710939403223e-25 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * (-2.32516306039478e-19 - fConst1)) + -2.39996883649437e-16)) + -5.70427286652445e-14);
	fConst3 = ((fConst0 * ((fConst0 * (fConst1 + 1.65110734431555e-19)) + -9.85016940777801e-17)) + -1.00715463535881e-13);
	fConst4 = (1.46424610003064e-26 * fConst0);
	fConst5 = (fConst0 * ((fConst0 * ((fConst0 * (fConst4 + 7.51326092582141e-20)) + 3.92589162530567e-16)) + 2.31184202006561e-13));
	fConst6 = (2.95807292935482e-24 * fConst0);
	fConst7 = ((fConst0 * (fConst6 + 5.2281698062006e-20)) + 1.13066837175752e-16);
	fConst8 = ((fConst0 * (3.97088779324146e-19 - fConst6)) + 9.26490200266144e-16);
	fConst9 = (9.76164066687091e-26 * fConst0);
	fConst10 = ((fConst0 * ((fConst0 * (-4.51455770428789e-19 - fConst9)) + -1.20654438422157e-15)) + -2.24844172006165e-13);
	fConst11 = ((fConst0 * ((fConst0 * (-5.2281698062006e-20 - fConst6)) + -1.13133807483017e-15)) + 5.09310077368254e-15);
	fConst12 = ((fConst0 * ((fConst0 * (fConst6 + -3.97088779324146e-19)) + 9.17810373882701e-17)) + -4.07240118199924e-13);
	fConst13 = (fConst0 * ((fConst0 * ((fConst0 * (fConst9 + 4.51455770428789e-19)) + 1.24014733506417e-15)) + 7.01362333734443e-13));
	fConst14 = (2.24093624107205e-19 * fConst0);
	fConst15 = (fConst14 + -1.12046812053603e-15);
	fConst16 = (2.91321711339366e-19 * fConst0);
	fConst17 = (1.25390568761804e-15 - fConst16);
	fConst18 = (7.39508959553777e-21 * fConst0);
	fConst19 = ((fConst0 * (1.86703602924918e-16 - fConst18)) + -7.03312746223551e-13);
	fConst20 = (4.4818724821441e-19 * fConst0);
	fConst21 = (fConst20 + -1.01860738230548e-15);
	fConst22 = (1.90479580491124e-16 * fConst0);
	fConst23 = (fConst22 + 1.84877239888444e-14);
	fConst24 = ((fConst0 * ((fConst0 * (fConst1 + -2.32516306039478e-19)) + 2.39996883649437e-16)) + -5.70427286652445e-14);
	fConst25 = ((fConst0 * ((fConst0 * (1.65110734431555e-19 - fConst1)) + 9.85016940777801e-17)) + -1.00715463535881e-13);
	fConst26 = (fConst0 * ((fConst0 * ((fConst0 * (7.51326092582141e-20 - fConst4)) + -3.92589162530567e-16)) + 2.31184202006561e-13));
	fConst27 = ((fConst0 * (5.2281698062006e-20 - fConst6)) + -1.13066837175752e-16);
	fConst28 = ((fConst0 * (fConst6 + 3.97088779324146e-19)) + -9.26490200266144e-16);
	fConst29 = ((fConst0 * ((fConst0 * (fConst9 + -4.51455770428789e-19)) + 1.20654438422157e-15)) + -2.24844172006165e-13);
	fConst30 = ((fConst0 * ((fConst0 * (fConst6 + -5.2281698062006e-20)) + 1.13133807483017e-15)) + 5.09310077368254e-15);
	fConst31 = ((fConst0 * ((fConst0 * (-3.97088779324146e-19 - fConst6)) + -9.17810373882701e-17)) + -4.07240118199924e-13);
	fConst32 = (fConst0 * ((fConst0 * ((fConst0 * (4.51455770428789e-19 - fConst9)) + -1.24014733506417e-15)) + 7.01362333734443e-13));
	fConst33 = (2.21855469701612e-24 * fConst0);
	fConst34 = ((fConst0 * ((fConst0 * (6.97548918118433e-19 - fConst33)) + -2.39996883649437e-16)) + -5.70427286652445e-14);
	fConst35 = ((fConst0 * ((fConst0 * (fConst33 + -4.95332203294664e-19)) + -9.85016940777801e-17)) + -1.00715463535881e-13);
	fConst36 = (7.32123050015318e-26 * fConst0);
	fConst37 = (fConst0 * ((fConst0 * ((fConst0 * (fConst36 + -2.25397827774642e-19)) + 3.92589162530567e-16)) + 2.31184202006561e-13));
	fConst38 = (1.47903646467741e-23 * fConst0);
	fConst39 = ((fConst0 * (fConst38 + -1.56845094186018e-19)) + 1.13066837175752e-16);
	fConst40 = ((fConst0 * (-1.19126633797244e-18 - fConst38)) + 9.26490200266144e-16);
	fConst41 = (4.88082033343545e-25 * fConst0);
	fConst42 = ((fConst0 * ((fConst0 * (1.35436731128637e-18 - fConst41)) + -1.20654438422157e-15)) + -2.24844172006165e-13);
	fConst43 = ((fConst0 * ((fConst0 * (1.56845094186018e-19 - fConst38)) + -1.13133807483017e-15)) + 5.09310077368254e-15);
	fConst44 = ((fConst0 * ((fConst0 * (fConst38 + 1.19126633797244e-18)) + 9.17810373882701e-17)) + -4.07240118199924e-13);
	fConst45 = (fConst0 * ((fConst0 * ((fConst0 * (fConst41 + -1.35436731128637e-18)) + 1.24014733506417e-15)) + 7.01362333734443e-13));
	fConst46 = (4.43710939403223e-24 * fConst0);
	fConst47 = ((fConst0 * ((fConst0 * (fConst46 + -4.65032612078955e-19)) + -4.79993767298874e-16)) + 1.14085457330489e-13);
	fConst48 = ((fConst0 * ((fConst0 * (3.30221468863109e-19 - fConst46)) + -1.9700338815556e-16)) + 2.01430927071761e-13);
	fConst49 = (1.46424610003064e-25 * fConst0);
	fConst50 = (fConst0 * ((fConst0 * ((fConst0 * (1.50265218516428e-19 - fConst49)) + 7.85178325061135e-16)) + -4.62368404013121e-13));
	fConst51 = (2.95807292935482e-23 * fConst0);
	fConst52 = ((fConst0 * (1.04563396124012e-19 - fConst51)) + 2.26133674351505e-16);
	fConst53 = ((fConst0 * (fConst51 + 7.94177558648292e-19)) + 1.85298040053229e-15);
	fConst54 = (9.76164066687091e-25 * fConst0);
	fConst55 = ((fConst0 * ((fConst0 * (fConst54 + -9.02911540857577e-19)) + -2.41308876844315e-15)) + 4.4968834401233e-13);
	fConst56 = ((fConst0 * ((fConst0 * (fConst51 + -1.04563396124012e-19)) + -2.26267614966033e-15)) + -1.01862015473651e-14);
	fConst57 = ((fConst0 * ((fConst0 * (-7.94177558648292e-19 - fConst51)) + 1.8356207477654e-16)) + 8.14480236399848e-13);
	fConst58 = (fConst0 * ((fConst0 * ((fConst0 * (9.02911540857577e-19 - fConst54)) + 2.48029467012834e-15)) + -1.40272466746889e-12));
	fConst59 = ((fConst0 * ((fConst0 * (-4.65032612078955e-19 - fConst46)) + 4.79993767298874e-16)) + 1.14085457330489e-13);
	fConst60 = ((fConst0 * ((fConst0 * (fConst46 + 3.30221468863109e-19)) + 1.9700338815556e-16)) + 2.01430927071761e-13);
	fConst61 = (fConst0 * ((fConst0 * ((fConst0 * (fConst49 + 1.50265218516428e-19)) + -7.85178325061135e-16)) + -4.62368404013121e-13));
	fConst62 = ((fConst0 * (fConst51 + 1.04563396124012e-19)) + -2.26133674351505e-16);
	fConst63 = ((fConst0 * (7.94177558648292e-19 - fConst51)) + -1.85298040053229e-15);
	fConst64 = ((fConst0 * ((fConst0 * (-9.02911540857577e-19 - fConst54)) + 2.41308876844315e-15)) + 4.4968834401233e-13);
	fConst65 = ((fConst0 * ((fConst0 * (-1.04563396124012e-19 - fConst51)) + 2.26267614966033e-15)) + -1.01862015473651e-14);
	fConst66 = ((fConst0 * ((fConst0 * (fConst51 + -7.94177558648292e-19)) + -1.8356207477654e-16)) + 8.14480236399848e-13);
	fConst67 = (fConst0 * ((fConst0 * ((fConst0 * (fConst54 + 9.02911540857577e-19)) + -2.48029467012834e-15)) + -1.40272466746889e-12));
	fConst68 = ((fConst0 * ((fConst0 * (fConst33 + 6.97548918118433e-19)) + 2.39996883649437e-16)) + -5.70427286652445e-14);
	fConst69 = ((fConst0 * ((fConst0 * (-4.95332203294664e-19 - fConst33)) + 9.85016940777801e-17)) + -1.00715463535881e-13);
	fConst70 = (fConst0 * ((fConst0 * ((fConst0 * (-2.25397827774642e-19 - fConst36)) + -3.92589162530567e-16)) + 2.31184202006561e-13));
	fConst71 = ((fConst0 * (-1.56845094186018e-19 - fConst38)) + -1.13066837175752e-16);
	fConst72 = ((fConst0 * (fConst38 + -1.19126633797244e-18)) + -9.26490200266144e-16);
	fConst73 = ((fConst0 * ((fConst0 * (fConst41 + 1.35436731128637e-18)) + 1.20654438422157e-15)) + -2.24844172006165e-13);
	fConst74 = ((fConst0 * ((fConst0 * (fConst38 + 1.56845094186018e-19)) + 1.13133807483017e-15)) + 5.09310077368254e-15);
	fConst75 = ((fConst0 * ((fConst0 * (1.19126633797244e-18 - fConst38)) + -9.17810373882701e-17)) + -4.07240118199924e-13);
	fConst76 = (fConst0 * ((fConst0 * ((fConst0 * (-1.35436731128637e-18 - fConst41)) + -1.24014733506417e-15)) + 7.01362333734443e-13));
	fConst77 = (6.72280872321615e-19 * fConst0);
	fConst78 = (1.12046812053603e-15 - fConst77);
	fConst79 = (8.739651340181e-19 * fConst0);
	fConst80 = (fConst79 + -1.25390568761804e-15);
	fConst81 = (2.21852687866133e-20 * fConst0);
	fConst82 = ((fConst0 * (fConst81 + -1.86703602924918e-16)) + -7.03312746223551e-13);
	fConst83 = (1.34456174464323e-18 * fConst0);
	fConst84 = (1.01860738230548e-15 - fConst83);
	fConst85 = (1.84877239888444e-14 - fConst22);
	fConst86 = (fConst20 + 2.24093624107205e-15);
	fConst87 = (5.82643422678733e-19 * fConst0);
	fConst88 = (-2.50781137523608e-15 - fConst87);
	fConst89 = (1.47901791910755e-20 * fConst0);
	fConst90 = ((fConst0 * (-3.73407205849836e-16 - fConst89)) + 1.4066254924471e-12);
	fConst91 = (8.9637449642882e-19 * fConst0);
	fConst92 = (fConst91 + 2.03721476461095e-15);
	fConst93 = (3.80959160982249e-16 * fConst0);
	fConst94 = (-3.69754479776888e-14 - fConst93);
	fConst95 = (fConst20 + -2.24093624107205e-15);
	fConst96 = (2.50781137523608e-15 - fConst87);
	fConst97 = ((fConst0 * (3.73407205849836e-16 - fConst89)) + 1.4066254924471e-12);
	fConst98 = (fConst91 + -2.03721476461095e-15);
	fConst99 = (fConst93 + -3.69754479776888e-14);
	fConst100 = (-1.12046812053603e-15 - fConst77);
	fConst101 = (fConst79 + 1.25390568761804e-15);
	fConst102 = ((fConst0 * (fConst81 + 1.86703602924918e-16)) + -7.03312746223551e-13);
	fConst103 = (-1.01860738230548e-15 - fConst83);
	fConst104 = (fConst14 + 1.12046812053603e-15);
	fConst105 = (-1.25390568761804e-15 - fConst16);
	fConst106 = ((fConst0 * (-1.86703602924918e-16 - fConst18)) + -7.03312746223551e-13);
	fConst107 = (fConst20 + 1.01860738230548e-15);
	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		fRec1[0] = (fSlow1 + (0.993 * fRec1[1]));
		double fTemp0 = (((fRec1[0] * ((fConst0 * (fConst13 + (((fRec0[0] * ((fConst0 * (fConst12 + (fConst11 * fRec0[0]))) + 2.29189534815714e-12)) + (fRec1[0] * ((fConst0 * (fConst10 + (fRec0[0] * ((fConst0 * (fConst8 + (fConst7 * fRec0[0]))) + 4.57869759554061e-14)))) + -5.37322131623508e-12))) + 5.11099655732833e-11))) + -1.27327519342064e-10)) + (fConst0 * (fConst5 + ((fRec0[0] * ((fConst0 * (fConst3 + (fConst2 * fRec0[0]))) + -2.566922789936e-11)) + 4.42912797759979e-11)))) + 1.42606821663111e-09);
		double fTemp1 = (1.01860738230548e-15 * fRec0[0]);
		fRec2[0] = ((double)input0[i] - ((((((fRec2[1] * (((fRec1[0] * ((fConst0 * (fConst76 + (((fRec0[0] * ((fConst0 * (fConst75 + (fConst74 * fRec0[0]))) + 6.87568604447143e-12)) + (fRec1[0] * ((fConst0 * (fConst73 + (fRec0[0] * ((fConst0 * (fConst72 + (fConst71 * fRec0[0]))) + 4.57869759554061e-14)))) + -1.61196639487052e-11))) + 1.5332989671985e-10))) + -6.36637596710318e-10)) + (fConst0 * (fConst70 + ((fRec0[0] * ((fConst0 * (fConst69 + (fConst68 * fRec0[0]))) + -7.70076836980801e-11)) + 1.32873839327994e-10)))) + 7.13034108315556e-09)) + (fRec2[2] * (((fRec1[0] * ((fConst0 * (fConst67 + (((fRec0[0] * ((fConst0 * (fConst66 + (fConst65 * fRec0[0]))) + 4.58379069631429e-12)) + (fRec1[0] * ((fConst0 * (fConst64 + (fRec0[0] * ((fConst0 * (fConst63 + (fConst62 * fRec0[0]))) + -9.15739519108121e-14)))) + -1.07464426324702e-11))) + 1.02219931146567e-10))) + -1.27327519342064e-09)) + (fConst0 * (fConst61 + ((fRec0[0] * ((fConst0 * (fConst60 + (fConst59 * fRec0[0]))) + -5.133845579872e-11)) + 8.85825595519958e-11)))) + 1.42606821663111e-08))) + (fRec2[3] * (((fRec1[0] * ((fConst0 * (fConst58 + (((fRec0[0] * ((fConst0 * (fConst57 + (fConst56 * fRec0[0]))) + -4.58379069631429e-12)) + (fRec1[0] * ((fConst0 * (fConst55 + (fRec0[0] * ((fConst0 * (fConst53 + (fConst52 * fRec0[0]))) + -9.15739519108121e-14)))) + 1.07464426324702e-11))) + -1.02219931146567e-10))) + -1.27327519342064e-09)) + (fConst0 * (fConst50 + ((fRec0[0] * ((fConst0 * (fConst48 + (fConst47 * fRec0[0]))) + 5.133845579872e-11)) + -8.85825595519958e-11)))) + 1.42606821663111e-08))) + (fRec2[4] * (((fRec1[0] * ((fConst0 * (fConst45 + (((fRec0[0] * ((fConst0 * (fConst44 + (fConst43 * fRec0[0]))) + -6.87568604447143e-12)) + (fRec1[0] * ((fConst0 * (fConst42 + (fRec0[0] * ((fConst0 * (fConst40 + (fConst39 * fRec0[0]))) + 4.57869759554061e-14)))) + 1.61196639487052e-11))) + -1.5332989671985e-10))) + -6.36637596710318e-10)) + (fConst0 * (fConst37 + ((fRec0[0] * ((fConst0 * (fConst35 + (fConst34 * fRec0[0]))) + 7.70076836980801e-11)) + -1.32873839327994e-10)))) + 7.13034108315556e-09))) + (fRec2[5] * (((fRec1[0] * ((fConst0 * (fConst32 + (((fRec0[0] * ((fConst0 * (fConst31 + (fConst30 * fRec0[0]))) + -2.29189534815714e-12)) + (fRec1[0] * ((fConst0 * (fConst29 + (fRec0[0] * ((fConst0 * (fConst28 + (fConst27 * fRec0[0]))) + 4.57869759554061e-14)))) + 5.37322131623508e-12))) + -5.11099655732833e-11))) + -1.27327519342064e-10)) + (fConst0 * (fConst26 + ((fRec0[0] * ((fConst0 * (fConst25 + (fConst24 * fRec0[0]))) + 2.566922789936e-11)) + -4.42912797759979e-11)))) + 1.42606821663111e-09))) / fTemp0));
		double fTemp2 = (0 - fTemp1);
		double fTemp3 = (2.03721476461095e-15 * fRec0[0]);
		output0[i] = (FAUSTFLOAT)(fConst0 * (((((((fRec2[0] * (((fRec1[0] * ((fConst0 * (fConst85 + ((fRec0[0] * ((fConst0 * (fTemp2 - fConst20)) + -4.58373322037465e-13)) + (fRec1[0] * ((fConst0 * ((fConst107 * fRec0[0]) + 2.24093624107205e-16)) + 5.09303691152739e-13))))) + 2.54651845576369e-11)) + (fConst0 * (fConst106 + (fRec0[0] * ((fConst0 * (fConst105 + (fConst104 * fRec0[0]))) + 5.04210654241211e-13))))) + -2.80117030134006e-11)) + (fRec2[1] * (((fRec1[0] * ((fConst0 * (fConst23 + ((fRec0[0] * ((fConst0 * (fConst83 + fTemp1)) + -4.58373322037465e-13)) + (fRec1[0] * ((fConst0 * ((fConst103 * fRec0[0]) + -2.24093624107205e-16)) + 5.09303691152739e-13))))) + 7.63955536729108e-11)) + (fConst0 * (fConst102 + (fRec0[0] * ((fConst0 * (fConst101 + (fConst100 * fRec0[0]))) + 5.04210654241211e-13))))) + -8.40351090402019e-11))) + (fRec2[2] * (((fRec1[0] * ((fConst0 * (fConst99 + ((fRec0[0] * ((fConst0 * (fTemp3 - fConst91)) + 9.16746644074929e-13)) + (fRec1[0] * ((fConst0 * ((fConst98 * fRec0[0]) + -4.4818724821441e-16)) + -1.01860738230548e-12))))) + 5.09303691152739e-11)) + (fConst0 * (fConst97 + (fRec0[0] * ((fConst0 * (fConst96 + (fConst95 * fRec0[0]))) + -1.00842130848242e-12))))) + -5.60234060268012e-11))) + (fRec2[3] * (((fRec1[0] * ((fConst0 * (fConst94 + ((fRec0[0] * ((fConst0 * ((0 - fTemp3) - fConst91)) + 9.16746644074929e-13)) + (fRec1[0] * ((fConst0 * ((fConst92 * fRec0[0]) + 4.4818724821441e-16)) + -1.01860738230548e-12))))) + -5.09303691152739e-11)) + (fConst0 * (fConst90 + (fRec0[0] * ((fConst0 * (fConst88 + (fConst86 * fRec0[0]))) + -1.00842130848242e-12))))) + 5.60234060268012e-11))) + (fRec2[4] * (((fRec1[0] * ((fConst0 * (fConst85 + ((fRec0[0] * ((fConst0 * (fConst83 + fTemp2)) + -4.58373322037465e-13)) + (fRec1[0] * ((fConst0 * ((fConst84 * fRec0[0]) + 2.24093624107205e-16)) + 5.09303691152739e-13))))) + -7.63955536729108e-11)) + (fConst0 * (fConst82 + (fRec0[0] * ((fConst0 * (fConst80 + (fConst78 * fRec0[0]))) + 5.04210654241211e-13))))) + 8.40351090402019e-11))) + (fRec2[5] * (((fRec1[0] * ((fConst0 * (fConst23 + ((fRec0[0] * ((fConst0 * (fTemp1 - fConst20)) + -4.58373322037465e-13)) + (fRec1[0] * ((fConst0 * ((fConst21 * fRec0[0]) + -2.24093624107205e-16)) + 5.09303691152739e-13))))) + -2.54651845576369e-11)) + (fConst0 * (fConst19 + (fRec0[0] * ((fConst0 * (fConst17 + (fConst15 * fRec0[0]))) + 5.04210654241211e-13))))) + 2.80117030134006e-11))) / fTemp0));
		// post processing
		for (int i=5; i>0; i--) fRec2[i] = fRec2[i-1];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerVar("bddi-p11.PR24v",N_("PR24v"),"S","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	reg.registerVar("bddi-p11.PR41v",N_("PR41v"),"S","",&fslider1, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("bddi-p11" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("PR24v"), "PR24v");
b.closeBox();
b.openHorizontalBox("");

    b.create_small_rackknobr(PARAM("PR24v"), "PR24v");

    b.create_small_rackknobr(PARAM("PR41v"), "PR41v");
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

} // end namespace bddi_p11
