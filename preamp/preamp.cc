// generated from file 'dkbuild/preamp/preamp.dsp' by dsp2cc:
// Code generated with Faust 0.9.95 (http://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace preamp {

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
	double 	fRec1[11];
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
	id = "preamp";
	name = N_("Tube Preamp");
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
	for (int i=0; i<11; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (8.40299902672067e-54 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-1.9276929244867e-45 - fConst1)) + -2.09419815586119e-38)) + -2.87535434283182e-33)) + -9.46450748435305e-29)) + -5.35764107626475e-25)) + -9.49845516087586e-22)) + -4.44845391069848e-19)) + -9.32296348938844e-18)) + 1.00419429059393e-30);
	fConst3 = (8.40299061605748e-54 * fConst0);
	fConst4 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst3 + 1.92774224918492e-45)) + 2.09530364610539e-38)) + 2.93116301405905e-33)) + 1.00383309850293e-28)) + 6.45685866928191e-25)) + 1.34602380523579e-21)) + 6.97525353190717e-19)) + 2.39985772257666e-17));
	fConst5 = (4.20149530802874e-51 * fConst0);
	fConst6 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst5 + 9.61955082492353e-43)) + 1.04533519422991e-35)) + 1.45144254509164e-30)) + 4.95651674505049e-26)) + 3.19656005357728e-22)) + 6.68788715156814e-19)) + 3.4729196597769e-16));
	fConst7 = (6.19025428413845e-49 * fConst0);
	fConst8 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst7 + 3.71507236163915e-40)) + 5.43925317364033e-32)) + 1.00683406653392e-24)) + -4.83297285622499e-21)) + 6.40113638423185e-18)) + -1.40513381883066e-15);
	fConst9 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-3.7150754567663e-40 - fConst7)) + -5.43927174900214e-32)) + -1.00686126279978e-24)) + 4.32955582295803e-21)) + -3.98464995611936e-18)) + -1.79543437328526e-15);
	fConst10 = (3.09512714206923e-46 * fConst0);
	fConst11 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst10 + 1.85753618081958e-37)) + 2.71962658682016e-29)) + 5.03417033266958e-22)) + -2.41648642811249e-18)) + 3.20056819211593e-15));
	fConst12 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.9276929244867e-45 - fConst1)) + -2.09419815586119e-38)) + 2.87535434283182e-33)) + -9.46450748435305e-29)) + 5.35764107626475e-25)) + -9.49845516087586e-22)) + 4.44845391069848e-19)) + -9.32296348938844e-18)) + -1.00419429059393e-30);
	fConst13 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst3 + -1.92774224918492e-45)) + 2.09530364610539e-38)) + -2.93116301405905e-33)) + 1.00383309850293e-28)) + -6.45685866928191e-25)) + 1.34602380523579e-21)) + -6.97525353190717e-19)) + 2.39985772257666e-17));
	fConst14 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (9.61955082492353e-43 - fConst5)) + -1.04533519422991e-35)) + 1.45144254509164e-30)) + -4.95651674505049e-26)) + 3.19656005357728e-22)) + -6.68788715156814e-19)) + 3.4729196597769e-16));
	fConst15 = (8.40299902672067e-53 * fConst0);
	fConst16 = faustpower<2>(fConst0);
	fConst17 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst15 + -1.54215433958936e-44)) + 1.25651889351671e-37)) + -1.15014173713273e-32)) + 1.89290149687061e-28)) + -1.89969103217517e-21)) + 1.77938156427939e-18)) + -5.59377809363306e-17)) + -8.03355432475141e-30);
	fConst18 = (8.40299061605748e-53 * fConst0);
	fConst19 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * ((fConst0 * (1.54219379934794e-44 - fConst18)) + -1.25718218766323e-37)) + 1.17246520562362e-32)) + -2.00766619700586e-28)) + 2.69204761047157e-21)) + -2.79010141276287e-18)) + 1.43991463354599e-16));
	fConst20 = (3.36119624642299e-50 * fConst0);
	fConst21 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (fConst20 + -5.77173049495411e-42)) + 4.18134077691963e-35)) + -2.90288509018327e-30)) + 6.39312010715456e-22)) + -2.67515486062726e-18)) + 2.08375179586614e-15));
	fConst22 = (3.7813495620243e-52 * fConst0);
	fConst23 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (5.20477089611408e-44 - fConst22)) + -2.72245760261955e-37)) + 8.62606302849545e-33)) + 2.83935224530592e-28)) + -2.67882053813238e-24)) + 2.84953654826276e-21)) + 1.33453617320954e-18)) + -1.2119852536205e-16)) + -2.7113245846036e-29);
	fConst24 = (3.78134577722587e-52 * fConst0);
	fConst25 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst24 + -5.20490407279929e-44)) + 2.72389473993701e-37)) + -8.79348904217714e-33)) + -3.01149929550879e-28)) + 3.22842933464095e-24)) + -4.03807141570736e-21)) + -2.09257605957215e-18)) + 3.11981503934965e-16));
	fConst26 = (1.13440373316776e-49 * fConst0);
	fConst27 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.25054160724006e-41 - fConst26)) + -3.13600558268972e-35)) + -4.35432763527491e-30)) + 2.47825837252525e-25)) + -9.58968016073184e-22)) + -2.00636614547044e-18)) + 4.51479555770997e-15));
	fConst28 = (1.00835988320648e-51 * fConst0);
	fConst29 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst28 + -9.25292603753614e-44)) + 1.67535852468895e-37)) + 2.30028347426545e-32)) + -7.57160598748244e-28)) + 7.59876412870068e-21)) + -3.55876312855878e-18)) + -7.45837079151075e-17)) + -4.82013259485085e-29);
	fConst30 = (1.0083588739269e-51 * fConst0);
	fConst31 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * ((fConst0 * (9.25316279608762e-44 - fConst30)) + -1.67624291688431e-37)) + -2.34493041124724e-32)) + 8.03066478802345e-28)) + -1.07681904418863e-20)) + 5.58020282552574e-18)) + 1.91988617806132e-16));
	fConst32 = (2.0167177478538e-49 * fConst0);
	fConst33 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (fConst32 + -7.69564065993882e-42)) + -8.36268155383926e-35)) + 1.16115403607331e-29)) + -2.55724804286183e-21)) + 5.35030972125452e-18)) + 2.77833572782152e-15));
	fConst34 = (1.76462979561134e-51 * fConst0);
	fConst35 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (8.09631028284412e-44 - fConst34)) + 2.93187741820567e-37)) + -4.02549607996455e-32)) + -1.89290149687061e-28)) + 5.35764107626475e-24)) + -1.89969103217517e-21)) + -6.22783547497787e-18)) + 1.30521488851438e-16)) + -4.21761602049449e-29);
	fConst36 = (1.76462802937207e-51 * fConst0);
	fConst37 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst36 + -8.09651744657667e-44)) + -2.93342510454754e-37)) + 4.10362821968266e-32)) + 2.00766619700586e-28)) + -6.45685866928191e-24)) + 2.69204761047157e-21)) + 9.76535494467004e-18)) + -3.35980081160732e-16));
	fConst38 = (1.76462802937207e-49 * fConst0);
	fConst39 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-1.34673711548929e-41 - fConst38)) + 1.46346927192187e-34)) + 2.90288509018327e-30)) + -4.95651674505049e-25)) + 6.39312010715456e-22)) + 9.3630420121954e-18)) + -4.86208752368766e-15));
	fConst40 = ((fConst16 * ((fConst16 * ((fConst16 * ((2.11755575473361e-51 * fConst16) + -5.86375483641133e-37)) + 1.13574089812237e-27)) + -1.1398146193051e-20)) + 2.61042977702876e-16);
	fConst41 = (fConst16 * ((fConst16 * ((fConst16 * (5.86685020909509e-37 - (2.11755363524648e-51 * fConst16))) + -1.20459971820352e-27)) + 1.61522856628294e-20));
	fConst42 = (fConst16 * ((fConst16 * ((2.69347423097859e-41 * fConst16) + -1.74173105410996e-29)) + 3.83587206429274e-21));
	fConst43 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-8.09631028284412e-44 - fConst34)) + 2.93187741820567e-37)) + 4.02549607996455e-32)) + -1.89290149687061e-28)) + -5.35764107626475e-24)) + -1.89969103217517e-21)) + 6.22783547497787e-18)) + 1.30521488851438e-16)) + 4.21761602049449e-29);
	fConst44 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst36 + 8.09651744657667e-44)) + -2.93342510454754e-37)) + -4.10362821968266e-32)) + 2.00766619700586e-28)) + 6.45685866928191e-24)) + 2.69204761047157e-21)) + -9.76535494467004e-18)) + -3.35980081160732e-16));
	fConst45 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst38 + -1.34673711548929e-41)) + -1.46346927192187e-34)) + 2.90288509018327e-30)) + 4.95651674505049e-25)) + 6.39312010715456e-22)) + -9.3630420121954e-18)) + -4.86208752368766e-15));
	fConst46 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst28 + 9.25292603753614e-44)) + 1.67535852468895e-37)) + -2.30028347426545e-32)) + -7.57160598748244e-28)) + 7.59876412870068e-21)) + 3.55876312855878e-18)) + -7.45837079151075e-17)) + 4.82013259485085e-29);
	fConst47 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * ((fConst0 * (-9.25316279608762e-44 - fConst30)) + -1.67624291688431e-37)) + 2.34493041124724e-32)) + 8.03066478802345e-28)) + -1.07681904418863e-20)) + -5.58020282552574e-18)) + 1.91988617806132e-16));
	fConst48 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (-7.69564065993882e-42 - fConst32)) + 8.36268155383926e-35)) + 1.16115403607331e-29)) + -2.55724804286183e-21)) + -5.35030972125452e-18)) + 2.77833572782152e-15));
	fConst49 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-5.20477089611408e-44 - fConst22)) + -2.72245760261955e-37)) + -8.62606302849545e-33)) + 2.83935224530592e-28)) + 2.67882053813238e-24)) + 2.84953654826276e-21)) + -1.33453617320954e-18)) + -1.2119852536205e-16)) + 2.7113245846036e-29);
	fConst50 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst24 + 5.20490407279929e-44)) + 2.72389473993701e-37)) + 8.79348904217714e-33)) + -3.01149929550879e-28)) + -3.22842933464095e-24)) + -4.03807141570736e-21)) + 2.09257605957215e-18)) + 3.11981503934965e-16));
	fConst51 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst26 + 1.25054160724006e-41)) + 3.13600558268972e-35)) + -4.35432763527491e-30)) + -2.47825837252525e-25)) + -9.58968016073184e-22)) + 2.00636614547044e-18)) + 4.51479555770997e-15));
	fConst52 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst15 + 1.54215433958936e-44)) + 1.25651889351671e-37)) + 1.15014173713273e-32)) + 1.89290149687061e-28)) + -1.89969103217517e-21)) + -1.77938156427939e-18)) + -5.59377809363306e-17)) + 8.03355432475141e-30);
	fConst53 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * ((fConst0 * (-1.54219379934794e-44 - fConst18)) + -1.25718218766323e-37)) + -1.17246520562362e-32)) + -2.00766619700586e-28)) + 2.69204761047157e-21)) + 2.79010141276287e-18)) + 1.43991463354599e-16));
	fConst54 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (-5.77173049495411e-42 - fConst20)) + -4.18134077691963e-35)) + -2.90288509018327e-30)) + 6.39312010715456e-22)) + 2.67515486062726e-18)) + 2.08375179586614e-15));
	fConst55 = (4.95220342731076e-48 * fConst0);
	fConst56 = ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (-2.22904341698349e-39 - fConst55)) + -2.17570126945613e-31)) + -2.01366813306783e-24)) + 1.28022727684637e-17)) + -5.62053527532265e-15);
	fConst57 = ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (fConst55 + 2.22904527405978e-39)) + 2.17570869960085e-31)) + 2.01372252559957e-24)) + -7.96929991223872e-18)) + -7.18173749314105e-15);
	fConst58 = (1.85707628524153e-45 * fConst0);
	fConst59 = (fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * (-7.43014472327831e-37 - fConst58)) + -5.43925317364033e-29)) + -4.83297285622499e-18)) + 1.28022727684637e-14));
	fConst60 = (1.67136865671738e-47 * fConst0);
	fConst61 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst60 + 4.8295940701309e-39)) + 1.6317759520921e-31)) + -3.02050219960175e-24)) + 2.41648642811249e-20)) + -1.92034091526956e-17)) + -4.21540145649199e-15);
	fConst62 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-4.82959809379619e-39 - fConst60)) + -1.63178152470064e-31)) + 3.02058378839935e-24)) + -2.16477791147901e-20)) + 1.19539498683581e-17)) + -5.38630311985579e-15);
	fConst63 = (4.02366528468999e-45 * fConst0);
	fConst64 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst63 + 5.57260854245873e-37)) + -8.15887976046049e-29)) + -2.51708516633479e-21)) + 7.24945928433748e-18)) + 9.60170457634778e-15));
	fConst65 = (2.97132205638646e-47 * fConst0);
	fConst66 = ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (-2.97205788931132e-39 - fConst65)) + 4.35140253891226e-31)) + 8.05467253227132e-24)) + -5.12090910738548e-17)) + 1.12410705506453e-14);
	fConst67 = ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (fConst65 + 2.97206036541304e-39)) + -4.35141739920171e-31)) + -8.05489010239827e-24)) + 3.18771996489549e-17)) + 1.43634749862821e-14);
	fConst68 = (2.47610171365538e-45 * fConst0);
	fConst69 = (fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * (1.48602894465566e-36 - fConst68)) + 2.17570126945613e-28)) + 1.93318914248999e-17)) + -2.56045455369274e-14));
	fConst70 = (2.59990679933815e-47 * fConst0);
	fConst71 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst70 + -5.20110130629482e-39)) + -7.61495444309646e-31)) + 2.01366813306783e-24)) + -4.83297285622499e-20)) + 1.28022727684637e-17)) + 1.96718734636293e-14);
	fConst72 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (5.20110563947282e-39 - fConst70)) + 7.61498044860299e-31)) + -2.01372252559957e-24)) + 4.32955582295803e-20)) + -7.96929991223872e-18)) + 2.51360812259937e-14);
	fConst73 = (4.33317799889692e-45 * fConst0);
	fConst74 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-2.60055065314741e-36 - fConst73)) + 5.43925317364033e-29)) + 5.03417033266958e-21)) + -4.83297285622499e-18)) + -4.4807954689623e-14));
	fConst75 = ((fConst16 * ((1.04022026125896e-38 * fConst16) + -1.2082008798407e-23)) + 7.68136366107822e-17);
	fConst76 = ((fConst16 * (1.20823351535974e-23 - (1.04022112789456e-38 * fConst16))) + -4.78157994734323e-17);
	fConst77 = (fConst16 * ((fConst16 * ((8.66635599779383e-45 * fConst16) + -3.2635519041842e-28)) + -2.89978371373499e-17));
	fConst78 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-5.20110130629482e-39 - fConst70)) + 7.61495444309646e-31)) + 2.01366813306783e-24)) + 4.83297285622499e-20)) + 1.28022727684637e-17)) + -1.96718734636293e-14);
	fConst79 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst70 + 5.20110563947282e-39)) + -7.61498044860299e-31)) + -2.01372252559957e-24)) + -4.32955582295803e-20)) + -7.96929991223872e-18)) + -2.51360812259937e-14);
	fConst80 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (2.60055065314741e-36 - fConst73)) + 5.43925317364033e-29)) + -5.03417033266958e-21)) + -4.83297285622499e-18)) + 4.4807954689623e-14));
	fConst81 = ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (fConst65 + -2.97205788931132e-39)) + -4.35140253891226e-31)) + 8.05467253227132e-24)) + -5.12090910738548e-17)) + -1.12410705506453e-14);
	fConst82 = ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (2.97206036541304e-39 - fConst65)) + 4.35141739920171e-31)) + -8.05489010239827e-24)) + 3.18771996489549e-17)) + -1.43634749862821e-14);
	fConst83 = (fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * (-1.48602894465566e-36 - fConst68)) + 2.17570126945613e-28)) + 1.93318914248999e-17)) + 2.56045455369274e-14));
	fConst84 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (4.8295940701309e-39 - fConst60)) + -1.6317759520921e-31)) + -3.02050219960175e-24)) + -2.41648642811249e-20)) + -1.92034091526956e-17)) + 4.21540145649199e-15);
	fConst85 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst60 + -4.82959809379619e-39)) + 1.63178152470064e-31)) + 3.02058378839935e-24)) + 2.16477791147901e-20)) + 1.19539498683581e-17)) + 5.38630311985579e-15);
	fConst86 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst63 + -5.57260854245873e-37)) + -8.15887976046049e-29)) + 2.51708516633479e-21)) + 7.24945928433748e-18)) + -9.60170457634778e-15));
	fConst87 = ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (fConst55 + -2.22904341698349e-39)) + 2.17570126945613e-31)) + -2.01366813306783e-24)) + 1.28022727684637e-17)) + 5.62053527532265e-15);
	fConst88 = ((fConst0 * ((fConst16 * ((fConst0 * ((fConst0 * (2.22904527405978e-39 - fConst55)) + -2.17570869960085e-31)) + 2.01372252559957e-24)) + -7.96929991223872e-18)) + 7.18173749314105e-15);
	fConst89 = (fConst0 * ((fConst0 * ((fConst16 * ((fConst0 * (7.43014472327831e-37 - fConst58)) + -5.43925317364033e-29)) + -4.83297285622499e-18)) + -1.28022727684637e-14));
	fConst90 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (3.71507236163915e-40 - fConst7)) + -5.43925317364033e-32)) + 1.00683406653392e-24)) + 4.83297285622499e-21)) + 6.40113638423185e-18)) + 1.40513381883066e-15);
	fConst91 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst7 + -3.7150754567663e-40)) + 5.43927174900214e-32)) + -1.00686126279978e-24)) + -4.32955582295803e-21)) + -3.98464995611936e-18)) + 1.79543437328526e-15);
	fConst92 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst10 + -1.85753618081958e-37)) + 2.71962658682016e-29)) + -5.03417033266958e-22)) + -2.41648642811249e-18)) + -3.20056819211593e-15));
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
		double fTemp0 = ((fConst0 * (fConst6 + ((fRec0[0] * (fConst4 + ((fConst2 * fRec0[0]) + 2.04412947700812e-16))) + 1.2043524989028e-14))) + 1.04033106020143e-13);
		fRec1[0] = ((double)input0[i] - (((((((((((fRec1[1] * ((fConst0 * (fConst54 + ((fRec0[0] * (fConst53 + ((fConst52 * fRec0[0]) + 1.63530358160649e-15))) + 9.63481999122239e-14))) + 1.04033106020143e-12)) + (fRec1[2] * ((fConst0 * (fConst51 + ((fRec0[0] * (fConst50 + ((fConst49 * fRec0[0]) + 5.51914958792191e-15))) + 3.25175174703756e-13))) + 4.68148977090645e-12))) + (fRec1[3] * ((fConst0 * (fConst48 + ((fRec0[0] * (fConst47 + ((fConst46 * fRec0[0]) + 9.81182148963896e-15))) + 5.78089199473343e-13))) + 1.24839727224172e-11))) + (fRec1[4] * ((fConst0 * (fConst45 + ((fRec0[0] * (fConst44 + ((fConst43 * fRec0[0]) + 8.58534380343409e-15))) + 5.05828049539175e-13))) + 2.18469522642301e-11))) + (fRec1[5] * ((fConst16 * (fConst42 + ((fRec0[0] * (fConst41 + ((fConst40 * fRec0[0]) + -6.71960162321464e-16))) + -9.72417504737533e-15))) + 2.62163427170761e-11))) + (fRec1[6] * ((fConst0 * (fConst39 + ((fRec0[0] * (fConst37 + ((fConst35 * fRec0[0]) + -8.58534380343409e-15))) + -5.05828049539175e-13))) + 2.18469522642301e-11))) + (fRec1[7] * ((fConst0 * (fConst33 + ((fRec0[0] * (fConst31 + ((fConst29 * fRec0[0]) + -9.81182148963896e-15))) + -5.78089199473343e-13))) + 1.24839727224172e-11))) + (fRec1[8] * ((fConst0 * (fConst27 + ((fRec0[0] * (fConst25 + ((fConst23 * fRec0[0]) + -5.51914958792191e-15))) + -3.25175174703756e-13))) + 4.68148977090645e-12))) + (fRec1[9] * ((fConst0 * (fConst21 + ((fRec0[0] * (fConst19 + ((fConst17 * fRec0[0]) + -1.63530358160649e-15))) + -9.63481999122239e-14))) + 1.04033106020143e-12))) + (fRec1[10] * ((fConst0 * (fConst14 + ((fRec0[0] * (fConst13 + ((fConst12 * fRec0[0]) + -2.04412947700812e-16))) + -1.2043524989028e-14))) + 1.04033106020143e-13))) / fTemp0));
		output0[i] = (FAUSTFLOAT)(fConst16 * ((((((((((((fRec1[0] * (fConst92 + ((fRec0[0] * ((fConst0 * (fConst91 + (fConst90 * fRec0[0]))) + 7.02566909415331e-13)) + -7.02566909415331e-13))) + (fRec1[1] * (fConst89 + ((fRec0[0] * ((fConst0 * (fConst88 + (fConst87 * fRec0[0]))) + 4.21540145649199e-12)) + -4.21540145649199e-12)))) + (fRec1[2] * (fConst86 + ((fRec0[0] * ((fConst0 * (fConst85 + (fConst84 * fRec0[0]))) + 9.13336982239931e-12)) + -9.13336982239931e-12)))) + (fRec1[3] * (fConst83 + ((fRec0[0] * ((fConst0 * (fConst82 + (fConst81 * fRec0[0]))) + 5.62053527532265e-12)) + -5.62053527532265e-12)))) + (fRec1[4] * (fConst80 + ((fRec0[0] * ((fConst0 * (fConst79 + (fConst78 * fRec0[0]))) + -9.83593673181464e-12)) + 9.83593673181464e-12)))) + (fRec1[5] * (fConst77 + ((fRec0[0] * ((fConst16 * (fConst76 + (fConst75 * fRec0[0]))) + -1.96718734636293e-11)) + 1.96718734636293e-11)))) + (fRec1[6] * (fConst74 + ((fRec0[0] * ((fConst0 * (fConst72 + (fConst71 * fRec0[0]))) + -9.83593673181464e-12)) + 9.83593673181464e-12)))) + (fRec1[7] * (fConst69 + ((fRec0[0] * ((fConst0 * (fConst67 + (fConst66 * fRec0[0]))) + 5.62053527532265e-12)) + -5.62053527532265e-12)))) + (fRec1[8] * (fConst64 + ((fRec0[0] * ((fConst0 * (fConst62 + (fConst61 * fRec0[0]))) + 9.13336982239931e-12)) + -9.13336982239931e-12)))) + (fRec1[9] * (fConst59 + ((fRec0[0] * ((fConst0 * (fConst57 + (fConst56 * fRec0[0]))) + 4.21540145649199e-12)) + -4.21540145649199e-12)))) + (fRec1[10] * (fConst11 + ((fRec0[0] * ((fConst0 * (fConst9 + (fConst8 * fRec0[0]))) + 7.02566909415331e-13)) + -7.02566909415331e-13)))) / fTemp0));
		// post processing
		for (int i=10; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec0[1] = fRec0[0];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerVar("preamp.PR6v",N_("PR6v"),"S","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("preamp" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("PR6v"), "PR6v");
b.closeBox();
b.openHorizontalBox("");

    b.create_small_rackknobr(PARAM("PR6v"), "PR6v");
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

} // end namespace preamp
