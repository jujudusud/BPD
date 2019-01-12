// generated from file 'dkbuild/alembic/alembic.dsp' by dsp2cc:
// Code generated with Faust 0.9.95 (http://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace alembic {

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
	FAUSTFLOAT 	fslider1;
	double 	fRec1[2];
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
	FAUSTFLOAT 	fslider2;
	double 	fRec2[2];
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	FAUSTFLOAT 	fslider3;
	double 	fRec3[2];
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
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fConst132;
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fConst138;
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	double 	fConst142;
	double 	fConst143;
	double 	fConst144;
	double 	fConst145;
	double 	fConst146;
	double 	fConst147;
	double 	fConst148;
	double 	fConst149;
	double 	fConst150;
	double 	fConst151;
	double 	fConst152;
	double 	fConst153;
	double 	fConst154;
	double 	fConst155;
	double 	fConst156;
	double 	fConst157;
	double 	fConst158;
	double 	fConst159;
	double 	fConst160;
	double 	fConst161;
	double 	fConst162;
	double 	fConst163;
	double 	fConst164;
	double 	fConst165;
	double 	fConst166;
	double 	fConst167;
	double 	fConst168;
	double 	fConst169;
	double 	fConst170;
	double 	fConst171;
	double 	fConst172;
	double 	fConst173;
	double 	fConst174;
	double 	fConst175;
	double 	fConst176;
	double 	fConst177;
	double 	fConst178;
	double 	fConst179;
	double 	fConst180;
	double 	fConst181;
	double 	fConst182;
	double 	fConst183;
	double 	fConst184;
	double 	fConst185;
	double 	fConst186;
	double 	fConst187;
	double 	fConst188;
	double 	fConst189;
	double 	fConst190;
	double 	fConst191;
	double 	fConst192;
	double 	fConst193;
	double 	fConst194;
	double 	fConst195;
	double 	fConst196;
	double 	fConst197;
	double 	fConst198;
	double 	fConst199;
	double 	fConst200;
	double 	fConst201;
	double 	fConst202;
	double 	fConst203;
	double 	fConst204;
	double 	fConst205;
	double 	fConst206;
	double 	fConst207;
	double 	fConst208;
	double 	fConst209;
	double 	fConst210;
	double 	fConst211;
	double 	fConst212;
	double 	fConst213;
	double 	fConst214;
	double 	fConst215;
	double 	fConst216;
	double 	fConst217;
	double 	fConst218;
	double 	fConst219;
	double 	fConst220;
	double 	fConst221;
	double 	fConst222;
	double 	fConst223;
	double 	fConst224;
	double 	fConst225;
	double 	fConst226;
	double 	fConst227;
	double 	fConst228;
	double 	fConst229;
	double 	fConst230;
	double 	fConst231;
	double 	fConst232;
	double 	fConst233;
	double 	fConst234;
	double 	fConst235;
	double 	fConst236;
	double 	fConst237;
	double 	fConst238;
	double 	fConst239;
	double 	fConst240;
	double 	fConst241;
	double 	fConst242;
	double 	fConst243;
	double 	fConst244;
	double 	fConst245;
	double 	fConst246;
	double 	fConst247;
	double 	fConst248;
	double 	fConst249;
	double 	fConst250;
	double 	fConst251;
	double 	fConst252;
	double 	fConst253;
	double 	fConst254;
	double 	fConst255;
	double 	fConst256;
	double 	fConst257;
	double 	fConst258;
	double 	fConst259;
	double 	fConst260;
	double 	fConst261;
	double 	fConst262;
	double 	fConst263;
	double 	fConst264;
	double 	fConst265;
	double 	fConst266;
	double 	fConst267;
	double 	fConst268;
	double 	fConst269;
	double 	fConst270;
	double 	fConst271;
	double 	fConst272;
	double 	fConst273;
	double 	fConst274;
	double 	fConst275;
	double 	fConst276;
	double 	fConst277;
	double 	fConst278;
	double 	fConst279;
	double 	fConst280;
	double 	fConst281;
	double 	fConst282;
	double 	fConst283;
	double 	fConst284;
	double 	fConst285;
	double 	fConst286;
	double 	fConst287;
	double 	fConst288;
	double 	fConst289;
	double 	fConst290;
	double 	fConst291;
	double 	fConst292;
	double 	fConst293;
	double 	fConst294;
	double 	fConst295;
	double 	fConst296;
	double 	fConst297;
	double 	fConst298;
	double 	fRec4[6];
	double 	fConst299;
	double 	fConst300;
	double 	fConst301;
	double 	fConst302;
	double 	fConst303;
	double 	fConst304;
	double 	fConst305;
	double 	fConst306;
	double 	fConst307;
	double 	fConst308;
	double 	fConst309;
	double 	fConst310;
	double 	fConst311;
	double 	fConst312;
	double 	fConst313;
	double 	fConst314;
	double 	fConst315;
	double 	fConst316;
	double 	fConst317;
	double 	fConst318;
	double 	fConst319;
	double 	fConst320;
	double 	fConst321;
	double 	fConst322;
	double 	fConst323;
	double 	fConst324;
	double 	fConst325;
	double 	fConst326;
	double 	fConst327;
	double 	fConst328;
	double 	fConst329;
	double 	fConst330;
	double 	fConst331;
	double 	fConst332;
	double 	fConst333;
	double 	fConst334;
	double 	fConst335;
	double 	fConst336;
	FAUSTFLOAT 	fslider4;
	double 	fRec5[2];
	double 	fConst337;

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
	id = "alembic";
	name = N_("Alembic Preamp");
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
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<6; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (6.4815418981162e-23 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * (fConst1 + 2.99095367015308e-21)) + 3.38701967357912e-20)) + 9.97739702179912e-20);
	fConst3 = (fConst0 * ((fConst0 * (-2.99095367015308e-21 - fConst1)) + -3.38701967357912e-20));
	fConst4 = (6.9222867471881e-23 * fConst0);
	fConst5 = (fConst0 * ((fConst0 * (-3.19433851972348e-21 - fConst4)) + -3.6173370113825e-20));
	fConst6 = (6.22837159378651e-23 * fConst0);
	fConst7 = (fConst0 * ((fConst0 * (fConst6 + -5.51032162701814e-19)) + -2.55264149017735e-17));
	fConst8 = (5.83180860841434e-23 * fConst0);
	fConst9 = ((fConst0 * ((fConst0 * ((fConst0 * (5.15947717885594e-19 - fConst8)) + 2.39011375484771e-17)) + 2.70887949321903e-16)) + 7.98191761743929e-16);
	fConst10 = (fConst0 * ((fConst0 * ((fConst0 * (fConst8 + -5.15947717885594e-19)) + -2.39011375484771e-17)) + -2.70887949321903e-16));
	fConst11 = (4.85720867386155e-24 * fConst0);
	fConst12 = ((fConst0 * (fConst11 + 8.53036904159285e-23)) + 2.93335472440894e-22);
	fConst13 = (fConst0 * (-8.53036904159285e-23 - fConst11));
	fConst14 = (5.18749886368413e-24 * fConst0);
	fConst15 = (fConst0 * (-9.11043413642117e-23 - fConst14));
	fConst16 = (7.26249840915779e-24 * fConst0);
	fConst17 = ((fConst0 * (fConst16 + -4.13018666157307e-20)) + -7.27156620866807e-19);
	fConst18 = (6.80009214340617e-24 * fConst0);
	fConst19 = ((fConst0 * ((fConst0 * (3.86721597525569e-20 - fConst18)) + 6.80858259238584e-19)) + 2.34269282071843e-18);
	fConst20 = (fConst0 * ((fConst0 * (fConst18 + -3.86721597525569e-20)) + -6.80858259238584e-19));
	fConst21 = (7.76492543100315e-26 * fConst0);
	fConst22 = ((fConst0 * (fConst21 + 1.36369845222743e-24)) + 4.68937660024558e-24);
	fConst23 = (fConst0 * (-1.36369845222743e-24 - fConst21));
	fConst24 = (8.29294036031137e-26 * fConst0);
	fConst25 = (fConst0 * (-1.45642994697889e-24 - fConst24));
	fConst26 = (1.16101165044359e-25 * fConst0);
	fConst27 = ((fConst0 * (fConst26 + -6.59737638827077e-22)) + -1.16152994209989e-20);
	fConst28 = (1.08708956034044e-25 * fConst0);
	fConst29 = ((fConst0 * ((fConst0 * (6.17731871560933e-22 - fConst28)) + 1.08757485215345e-20)) + 3.74212252699598e-20);
	fConst30 = (fConst0 * ((fConst0 * (fConst28 + -6.17731871560933e-22)) + -1.08757485215345e-20));
	fConst31 = (4.79935142182139e-25 * fConst0);
	fConst32 = ((fConst0 * ((fConst0 * (fConst31 + 3.68677255620388e-21)) + 7.89937124627823e-20)) + 4.60313050181275e-19);
	fConst33 = (4.49377473953313e-25 * fConst0);
	fConst34 = ((fConst0 * ((fConst0 * ((fConst0 * (-3.45203422865532e-21 - fConst33)) + -7.39641502460509e-20)) + -4.31004728634153e-19)) + -7.50300256039294e-19);
	fConst35 = (fConst0 * ((fConst0 * ((fConst0 * (fConst33 + 3.45203422865532e-21)) + 7.39641502460509e-20)) + 4.31004728634153e-19));
	fConst36 = (3.00214748513934e-23 * fConst0);
	fConst37 = (fConst0 * ((fConst0 * (fConst36 + 2.30482265359607e-19)) + 4.67347173267374e-18));
	fConst38 = (2.81099951792073e-23 * fConst0);
	fConst39 = ((fConst0 * ((fConst0 * ((fConst0 * (-2.1580736456892e-19 - fConst38)) + -4.37590986205406e-18)) + -2.25888916645555e-17)) + -3.19276704697572e-17);
	fConst40 = (fConst0 * ((fConst0 * ((fConst0 * (fConst38 + 2.1580736456892e-19)) + 4.37590986205406e-18)) + 2.25888916645555e-17));
	fConst41 = (1.03616486126347e-24 * fConst0);
	fConst42 = ((fConst0 * ((fConst0 * (fConst41 + 1.04008844176952e-22)) + 1.52836235209224e-21)) + 4.98869851089956e-21);
	fConst43 = (fConst0 * ((fConst0 * (-1.04008844176952e-22 - fConst41)) + -1.52836235209224e-21));
	fConst44 = (1.10662407182939e-24 * fConst0);
	fConst45 = (fConst0 * ((fConst0 * (-1.11081445580985e-22 - fConst44)) + -1.63229099203451e-21));
	fConst46 = (9.95692057510089e-25 * fConst0);
	fConst47 = ((fConst0 * ((fConst0 * (fConst46 + -8.68780729022959e-21)) + -8.84191013275713e-19)) + -1.30182230144219e-17);
	fConst48 = (9.3229593399821e-25 * fConst0);
	fConst49 = ((fConst0 * ((fConst0 * ((fConst0 * (8.13465102081422e-21 - fConst48)) + 8.27894207186997e-19)) + 1.21893473917808e-17)) + 3.98098141169785e-17);
	fConst50 = (fConst0 * ((fConst0 * ((fConst0 * (fConst48 + -8.13465102081422e-21)) + -8.27894207186997e-19)) + -1.21893473917808e-17));
	fConst51 = (4.98115635891407e-24 * fConst0);
	fConst52 = (fConst0 * ((fConst0 * ((fConst0 * (fConst51 + 4.49743041952052e-20)) + 5.01579761573506e-18)) + 9.10160440189538e-17));
	fConst53 = (4.66400408138021e-24 * fConst0);
	fConst54 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-4.21107717183569e-20 - fConst53)) + -4.69643971510774e-18)) + -8.52210149990205e-17)) + -4.70934759608975e-16)) + -7.98191761743929e-16);
	fConst55 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst53 + 4.21107717183569e-20)) + 4.69643971510774e-18)) + 8.52210149990205e-17)) + 4.70934759608975e-16));
	fConst56 = (2.91748340409741e-22 * fConst0);
	fConst57 = ((fConst0 * ((fConst0 * ((fConst0 * (-2.60665717245935e-18 - fConst56)) + -1.19810519513008e-16)) + -1.35533771234148e-15)) + -3.99095880871965e-15);
	fConst58 = (fConst0 * ((fConst0 * ((fConst0 * (fConst56 + 2.60665717245935e-18)) + 1.19810519513008e-16)) + 1.35533771234148e-15));
	fConst59 = (3.11587227557603e-22 * fConst0);
	fConst60 = (fConst0 * ((fConst0 * ((fConst0 * (fConst59 + 2.78390986018658e-18)) + 1.27957634839892e-16)) + 1.4475006767807e-15));
	fConst61 = (7.96061742583906e-22 * fConst0);
	fConst62 = ((fConst0 * (4.56560363222884e-18 - fConst61)) + -3.04019770262998e-17);
	fConst63 = (4.9796202621206e-20 * fConst0);
	fConst64 = (fConst63 + -2.85365632059169e-16);
	fConst65 = (5.68615530417075e-21 * fConst0);
	fConst66 = (fConst0 * (fConst65 + -3.79077020278052e-20));
	fConst67 = ((fConst0 * (9.98505002349418e-19 - fConst65)) + -4.85778329470953e-15);
	fConst68 = (3.55687161580043e-19 * fConst0);
	fConst69 = ((fConst0 * (1.44694505186984e-17 - fConst68)) + -8.0654685165543e-17);
	fConst70 = (fConst0 * (fConst68 + -1.44694505186984e-17));
	fConst71 = ((fConst0 * ((fConst0 * (fConst1 + -2.99095367015308e-21)) + 3.38701967357912e-20)) + -9.97739702179912e-20);
	fConst72 = (fConst0 * ((fConst0 * (2.99095367015308e-21 - fConst1)) + -3.38701967357912e-20));
	fConst73 = (fConst0 * ((fConst0 * (3.19433851972348e-21 - fConst4)) + -3.6173370113825e-20));
	fConst74 = (fConst0 * ((fConst0 * (fConst6 + 5.51032162701814e-19)) + -2.55264149017735e-17));
	fConst75 = ((fConst0 * ((fConst0 * ((fConst0 * (-5.15947717885594e-19 - fConst8)) + 2.39011375484771e-17)) + -2.70887949321903e-16)) + 7.98191761743929e-16);
	fConst76 = (fConst0 * ((fConst0 * ((fConst0 * (fConst8 + 5.15947717885594e-19)) + -2.39011375484771e-17)) + 2.70887949321903e-16));
	fConst77 = ((fConst0 * (fConst11 + -8.53036904159285e-23)) + 2.93335472440894e-22);
	fConst78 = (fConst0 * (8.53036904159285e-23 - fConst11));
	fConst79 = (fConst0 * (9.11043413642117e-23 - fConst14));
	fConst80 = ((fConst0 * (fConst16 + 4.13018666157307e-20)) + -7.27156620866807e-19);
	fConst81 = ((fConst0 * ((fConst0 * (-3.86721597525569e-20 - fConst18)) + 6.80858259238584e-19)) + -2.34269282071843e-18);
	fConst82 = (fConst0 * ((fConst0 * (fConst18 + 3.86721597525569e-20)) + -6.80858259238584e-19));
	fConst83 = ((fConst0 * (1.36369845222743e-24 - fConst21)) + -4.68937660024558e-24);
	fConst84 = (fConst0 * (fConst21 + -1.36369845222743e-24));
	fConst85 = (fConst0 * (fConst24 + -1.45642994697889e-24));
	fConst86 = ((fConst0 * (-6.59737638827077e-22 - fConst26)) + 1.16152994209989e-20);
	fConst87 = ((fConst0 * ((fConst0 * (fConst28 + 6.17731871560933e-22)) + -1.08757485215345e-20)) + 3.74212252699598e-20);
	fConst88 = (fConst0 * ((fConst0 * (-6.17731871560933e-22 - fConst28)) + 1.08757485215345e-20));
	fConst89 = ((fConst0 * ((fConst0 * (3.68677255620388e-21 - fConst31)) + -7.89937124627823e-20)) + 4.60313050181275e-19);
	fConst90 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst33 + -3.45203422865532e-21)) + 7.39641502460509e-20)) + -4.31004728634153e-19)) + 7.50300256039294e-19);
	fConst91 = (fConst0 * ((fConst0 * ((fConst0 * (3.45203422865532e-21 - fConst33)) + -7.39641502460509e-20)) + 4.31004728634153e-19));
	fConst92 = (fConst0 * ((fConst0 * (fConst36 + -2.30482265359607e-19)) + 4.67347173267374e-18));
	fConst93 = ((fConst0 * ((fConst0 * ((fConst0 * (2.1580736456892e-19 - fConst38)) + -4.37590986205406e-18)) + 2.25888916645555e-17)) + -3.19276704697572e-17);
	fConst94 = (fConst0 * ((fConst0 * ((fConst0 * (fConst38 + -2.1580736456892e-19)) + 4.37590986205406e-18)) + -2.25888916645555e-17));
	fConst95 = ((fConst0 * ((fConst0 * (1.04008844176952e-22 - fConst41)) + -1.52836235209224e-21)) + 4.98869851089956e-21);
	fConst96 = (fConst0 * ((fConst0 * (fConst41 + -1.04008844176952e-22)) + 1.52836235209224e-21));
	fConst97 = (fConst0 * ((fConst0 * (fConst44 + -1.11081445580985e-22)) + 1.63229099203451e-21));
	fConst98 = ((fConst0 * ((fConst0 * (-8.68780729022959e-21 - fConst46)) + 8.84191013275713e-19)) + -1.30182230144219e-17);
	fConst99 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst48 + 8.13465102081422e-21)) + -8.27894207186997e-19)) + 1.21893473917808e-17)) + -3.98098141169785e-17);
	fConst100 = (fConst0 * ((fConst0 * ((fConst0 * (-8.13465102081422e-21 - fConst48)) + 8.27894207186997e-19)) + -1.21893473917808e-17));
	fConst101 = (fConst0 * ((fConst0 * ((fConst0 * (4.49743041952052e-20 - fConst51)) + -5.01579761573506e-18)) + 9.10160440189538e-17));
	fConst102 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst53 + -4.21107717183569e-20)) + 4.69643971510774e-18)) + -8.52210149990205e-17)) + 4.70934759608975e-16)) + -7.98191761743929e-16);
	fConst103 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (4.21107717183569e-20 - fConst53)) + -4.69643971510774e-18)) + 8.52210149990205e-17)) + -4.70934759608975e-16));
	fConst104 = ((fConst0 * ((fConst0 * ((fConst0 * (2.60665717245935e-18 - fConst56)) + -1.19810519513008e-16)) + 1.35533771234148e-15)) + -3.99095880871965e-15);
	fConst105 = (fConst0 * ((fConst0 * ((fConst0 * (fConst56 + -2.60665717245935e-18)) + 1.19810519513008e-16)) + -1.35533771234148e-15));
	fConst106 = (fConst0 * ((fConst0 * ((fConst0 * (fConst59 + -2.78390986018658e-18)) + 1.27957634839892e-16)) + -1.4475006767807e-15));
	fConst107 = (1.94446256943486e-22 * fConst0);
	fConst108 = ((fConst0 * ((fConst0 * (2.99095367015308e-21 - fConst107)) + 3.38701967357912e-20)) + -2.99321910653974e-19);
	fConst109 = (fConst0 * ((fConst0 * (fConst107 + -2.99095367015308e-21)) + -3.38701967357912e-20));
	fConst110 = (2.07668602415643e-22 * fConst0);
	fConst111 = (fConst0 * ((fConst0 * (fConst110 + -3.19433851972348e-21)) + -3.6173370113825e-20));
	fConst112 = (1.86851147813595e-22 * fConst0);
	fConst113 = (fConst0 * ((fConst0 * (-5.51032162701814e-19 - fConst112)) + -2.55264149017735e-17));
	fConst114 = (1.7495425825243e-22 * fConst0);
	fConst115 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst114 + 5.15947717885594e-19)) + 2.39011375484771e-17)) + -8.12663847965709e-16)) + 3.99095880871965e-15);
	fConst116 = (fConst0 * ((fConst0 * ((fConst0 * (-5.15947717885594e-19 - fConst114)) + -2.39011375484771e-17)) + 8.12663847965709e-16));
	fConst117 = (1.45716260215846e-23 * fConst0);
	fConst118 = ((fConst0 * (8.53036904159285e-23 - fConst117)) + 2.93335472440894e-22);
	fConst119 = (fConst0 * (fConst117 + -8.53036904159285e-23));
	fConst120 = (1.55624965910524e-23 * fConst0);
	fConst121 = (fConst0 * (fConst120 + -9.11043413642117e-23));
	fConst122 = (2.17874952274734e-23 * fConst0);
	fConst123 = ((fConst0 * (-4.13018666157307e-20 - fConst122)) + -7.27156620866807e-19);
	fConst124 = (2.04002764302185e-23 * fConst0);
	fConst125 = ((fConst0 * ((fConst0 * (fConst124 + 3.86721597525569e-20)) + 6.80858259238584e-19)) + -7.0280784621553e-18);
	fConst126 = (fConst0 * ((fConst0 * (-3.86721597525569e-20 - fConst124)) + -6.80858259238584e-19));
	fConst127 = (3.88246271550158e-25 * fConst0);
	fConst128 = ((fConst0 * (fConst127 + -4.09109535668229e-24)) + 4.68937660024558e-24);
	fConst129 = (fConst0 * (4.09109535668229e-24 - fConst127));
	fConst130 = (4.14647018015568e-25 * fConst0);
	fConst131 = (fConst0 * (4.36928984093668e-24 - fConst130));
	fConst132 = (5.80505825221796e-25 * fConst0);
	fConst133 = ((fConst0 * (fConst132 + 1.97921291648123e-21)) + -1.16152994209989e-20);
	fConst134 = (5.43544780170221e-25 * fConst0);
	fConst135 = ((fConst0 * ((fConst0 * (-1.8531956146828e-21 - fConst134)) + 1.08757485215345e-20)) + 3.74212252699598e-20);
	fConst136 = (fConst0 * ((fConst0 * (fConst134 + 1.8531956146828e-21)) + -1.08757485215345e-20));
	fConst137 = (2.39967571091069e-24 * fConst0);
	fConst138 = ((fConst0 * ((fConst0 * (fConst137 + -1.10603176686116e-20)) + 7.89937124627823e-20)) + 4.60313050181275e-19);
	fConst139 = (2.24688736976657e-24 * fConst0);
	fConst140 = ((fConst0 * ((fConst0 * ((fConst0 * (1.03561026859659e-20 - fConst139)) + -7.39641502460509e-20)) + -4.31004728634153e-19)) + 2.25090076811788e-18);
	fConst141 = (fConst0 * ((fConst0 * ((fConst0 * (fConst139 + -1.03561026859659e-20)) + 7.39641502460509e-20)) + 4.31004728634153e-19));
	fConst142 = (9.00644245541801e-23 * fConst0);
	fConst143 = (fConst0 * ((fConst0 * (2.30482265359607e-19 - fConst142)) + 4.67347173267374e-18));
	fConst144 = (8.43299855376218e-23 * fConst0);
	fConst145 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst144 + -2.1580736456892e-19)) + -4.37590986205406e-18)) + 6.77666749936664e-17)) + -1.59638352348786e-16);
	fConst146 = (fConst0 * ((fConst0 * ((fConst0 * (2.1580736456892e-19 - fConst144)) + 4.37590986205406e-18)) + -6.77666749936664e-17));
	fConst147 = (5.18082430631737e-24 * fConst0);
	fConst148 = ((fConst0 * ((fConst0 * (fConst147 + -3.12026532530858e-22)) + 1.52836235209224e-21)) + 4.98869851089956e-21);
	fConst149 = (fConst0 * ((fConst0 * (3.12026532530858e-22 - fConst147)) + -1.52836235209224e-21));
	fConst150 = (5.53312035914695e-24 * fConst0);
	fConst151 = (fConst0 * ((fConst0 * (3.33244336742956e-22 - fConst150)) + -1.63229099203451e-21));
	fConst152 = (4.97846028755044e-24 * fConst0);
	fConst153 = ((fConst0 * ((fConst0 * (fConst152 + 2.60634218706888e-20)) + -8.84191013275713e-19)) + -1.30182230144219e-17);
	fConst154 = (4.66147966999105e-24 * fConst0);
	fConst155 = ((fConst0 * ((fConst0 * ((fConst0 * (-2.44039530624427e-20 - fConst154)) + 8.27894207186997e-19)) + 1.21893473917808e-17)) + -1.19429442350935e-16);
	fConst156 = (fConst0 * ((fConst0 * ((fConst0 * (fConst154 + 2.44039530624427e-20)) + -8.27894207186997e-19)) + -1.21893473917808e-17));
	fConst157 = (2.49057817945703e-23 * fConst0);
	fConst158 = (fConst0 * ((fConst0 * ((fConst0 * (fConst157 + -1.34922912585615e-19)) + 5.01579761573506e-18)) + 9.10160440189538e-17));
	fConst159 = (2.33200204069011e-23 * fConst0);
	fConst160 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.26332315155071e-19 - fConst159)) + -4.69643971510774e-18)) + -8.52210149990205e-17)) + 1.41280427882693e-15)) + -3.99095880871965e-15);
	fConst161 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst159 + -1.26332315155071e-19)) + 4.69643971510774e-18)) + 8.52210149990205e-17)) + -1.41280427882693e-15));
	fConst162 = (8.75245021229223e-22 * fConst0);
	fConst163 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst162 + -2.60665717245935e-18)) + -1.19810519513008e-16)) + 4.06601313702443e-15)) + -1.99547940435982e-14);
	fConst164 = (fConst0 * ((fConst0 * ((fConst0 * (2.60665717245935e-18 - fConst162)) + 1.19810519513008e-16)) + -4.06601313702443e-15));
	fConst165 = (9.3476168267281e-22 * fConst0);
	fConst166 = (fConst0 * ((fConst0 * ((fConst0 * (2.78390986018658e-18 - fConst165)) + 1.27957634839892e-16)) + -4.34250203034209e-15));
	fConst167 = (1.29630837962324e-22 * fConst0);
	fConst168 = ((fConst0 * ((fConst0 * (fConst167 + 5.98190734030615e-21)) + -6.77403934715823e-20)) + -1.99547940435982e-19);
	fConst169 = (fConst0 * ((fConst0 * (-5.98190734030615e-21 - fConst167)) + 6.77403934715823e-20));
	fConst170 = (1.38445734943762e-22 * fConst0);
	fConst171 = (fConst0 * ((fConst0 * (-6.38867703944697e-21 - fConst170)) + 7.23467402276499e-20));
	fConst172 = (1.2456743187573e-22 * fConst0);
	fConst173 = (fConst0 * ((fConst0 * (fConst172 + -1.10206432540363e-18)) + 5.10528298035471e-17));
	fConst174 = (1.16636172168287e-22 * fConst0);
	fConst175 = ((fConst0 * ((fConst0 * ((fConst0 * (1.03189543577119e-18 - fConst174)) + -4.78022750969542e-17)) + -5.41775898643806e-16)) + 7.98191761743929e-15);
	fConst176 = (fConst0 * ((fConst0 * ((fConst0 * (fConst174 + -1.03189543577119e-18)) + 4.78022750969542e-17)) + 5.41775898643806e-16));
	fConst177 = (9.71441734772309e-24 * fConst0);
	fConst178 = ((fConst0 * (fConst177 + 1.70607380831857e-22)) + -5.86670944881788e-22);
	fConst179 = (fConst0 * (-1.70607380831857e-22 - fConst177));
	fConst180 = (1.03749977273683e-23 * fConst0);
	fConst181 = (fConst0 * (-1.82208682728423e-22 - fConst180));
	fConst182 = (1.45249968183156e-23 * fConst0);
	fConst183 = ((fConst0 * (fConst182 + -8.26037332314615e-20)) + 1.45431324173361e-18);
	fConst184 = (1.36001842868123e-23 * fConst0);
	fConst185 = ((fConst0 * ((fConst0 * (7.73443195051137e-20 - fConst184)) + -1.36171651847717e-18)) + -4.68538564143687e-18);
	fConst186 = (fConst0 * ((fConst0 * (fConst184 + -7.73443195051137e-20)) + 1.36171651847717e-18));
	fConst187 = (7.76492543100315e-25 * fConst0);
	fConst188 = ((fConst0 * (2.72739690445486e-24 - fConst187)) + 9.37875320049117e-24);
	fConst189 = (fConst0 * (fConst187 + -2.72739690445486e-24));
	fConst190 = (8.29294036031137e-25 * fConst0);
	fConst191 = (fConst0 * (fConst190 + -2.91285989395779e-24));
	fConst192 = (1.16101165044359e-24 * fConst0);
	fConst193 = ((fConst0 * (-1.31947527765415e-21 - fConst192)) + -2.32305988419978e-20);
	fConst194 = (1.08708956034044e-24 * fConst0);
	fConst195 = ((fConst0 * ((fConst0 * (fConst194 + 1.23546374312187e-21)) + 2.17514970430691e-20)) + -7.48424505399195e-20);
	fConst196 = (fConst0 * ((fConst0 * (-1.23546374312187e-21 - fConst194)) + -2.17514970430691e-20));
	fConst197 = (4.79935142182139e-24 * fConst0);
	fConst198 = ((fConst0 * ((fConst0 * (7.37354511240776e-21 - fConst197)) + 1.57987424925565e-19)) + -9.2062610036255e-19);
	fConst199 = (4.49377473953313e-24 * fConst0);
	fConst200 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst199 + -6.90406845731063e-21)) + -1.47928300492102e-19)) + 8.62009457268305e-19)) + 1.50060051207859e-18);
	fConst201 = (fConst0 * ((fConst0 * ((fConst0 * (6.90406845731063e-21 - fConst199)) + 1.47928300492102e-19)) + -8.62009457268305e-19));
	fConst202 = (6.00429497027867e-23 * fConst0);
	fConst203 = (fConst0 * ((fConst0 * (fConst202 + 4.60964530719214e-19)) + -9.34694346534748e-18));
	fConst204 = (5.62199903584145e-23 * fConst0);
	fConst205 = ((fConst0 * ((fConst0 * ((fConst0 * (-4.31614729137841e-19 - fConst204)) + 8.75181972410813e-18)) + 4.5177783329111e-17)) + -3.19276704697572e-16);
	fConst206 = (fConst0 * ((fConst0 * ((fConst0 * (fConst204 + 4.31614729137841e-19)) + -8.75181972410813e-18)) + -4.5177783329111e-17));
	fConst207 = (1.03616486126347e-23 * fConst0);
	fConst208 = ((fConst0 * ((fConst0 * (2.08017688353905e-22 - fConst207)) + 3.05672470418448e-21)) + -9.97739702179912e-21);
	fConst209 = (fConst0 * ((fConst0 * (fConst207 + -2.08017688353905e-22)) + -3.05672470418448e-21));
	fConst210 = (1.10662407182939e-23 * fConst0);
	fConst211 = (fConst0 * ((fConst0 * (fConst210 + -2.22162891161971e-22)) + -3.26458198406902e-21));
	fConst212 = (9.95692057510089e-24 * fConst0);
	fConst213 = ((fConst0 * ((fConst0 * (-1.73756145804592e-20 - fConst212)) + -1.76838202655143e-18)) + 2.60364460288438e-17);
	fConst214 = (9.3229593399821e-24 * fConst0);
	fConst215 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst214 + 1.62693020416284e-20)) + 1.65578841437399e-18)) + -2.43786947835616e-17)) + -7.96196282339569e-17);
	fConst216 = (fConst0 * ((fConst0 * ((fConst0 * (-1.62693020416284e-20 - fConst214)) + -1.65578841437399e-18)) + 2.43786947835616e-17));
	fConst217 = (4.98115635891407e-23 * fConst0);
	fConst218 = (fConst0 * ((fConst0 * ((fConst0 * (8.99486083904103e-20 - fConst217)) + 1.00315952314701e-17)) + -1.82032088037908e-16));
	fConst219 = (4.66400408138021e-23 * fConst0);
	fConst220 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst219 + -8.42215434367138e-20)) + -9.39287943021548e-18)) + 1.70442029998041e-16)) + 9.4186951921795e-16)) + -7.98191761743929e-15);
	fConst221 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (8.42215434367138e-20 - fConst219)) + 9.39287943021548e-18)) + -1.70442029998041e-16)) + -9.4186951921795e-16));
	fConst222 = (5.83496680819482e-22 * fConst0);
	fConst223 = ((fConst0 * ((fConst0 * ((fConst0 * (-5.21331434491869e-18 - fConst222)) + 2.39621039026015e-16)) + 2.71067542468295e-15)) + -3.99095880871965e-14);
	fConst224 = (fConst0 * ((fConst0 * ((fConst0 * (fConst222 + 5.21331434491869e-18)) + -2.39621039026015e-16)) + -2.71067542468295e-15));
	fConst225 = (6.23174455115207e-22 * fConst0);
	fConst226 = (fConst0 * ((fConst0 * ((fConst0 * (fConst225 + 5.56781972037316e-18)) + -2.55915269679784e-16)) + -2.89500135356139e-15));
	fConst227 = ((fConst0 * ((fConst0 * (fConst167 + -5.98190734030615e-21)) + -6.77403934715823e-20)) + 1.99547940435982e-19);
	fConst228 = (fConst0 * ((fConst0 * (5.98190734030615e-21 - fConst167)) + 6.77403934715823e-20));
	fConst229 = (fConst0 * ((fConst0 * (6.38867703944697e-21 - fConst170)) + 7.23467402276499e-20));
	fConst230 = (fConst0 * ((fConst0 * (fConst172 + 1.10206432540363e-18)) + 5.10528298035471e-17));
	fConst231 = ((fConst0 * ((fConst0 * ((fConst0 * (-1.03189543577119e-18 - fConst174)) + -4.78022750969542e-17)) + 5.41775898643806e-16)) + 7.98191761743929e-15);
	fConst232 = (fConst0 * ((fConst0 * ((fConst0 * (fConst174 + 1.03189543577119e-18)) + 4.78022750969542e-17)) + -5.41775898643806e-16));
	fConst233 = ((fConst0 * (fConst177 + -1.70607380831857e-22)) + -5.86670944881788e-22);
	fConst234 = (fConst0 * (1.70607380831857e-22 - fConst177));
	fConst235 = (fConst0 * (1.82208682728423e-22 - fConst180));
	fConst236 = ((fConst0 * (fConst182 + 8.26037332314615e-20)) + 1.45431324173361e-18);
	fConst237 = ((fConst0 * ((fConst0 * (-7.73443195051137e-20 - fConst184)) + -1.36171651847717e-18)) + 4.68538564143687e-18);
	fConst238 = (fConst0 * ((fConst0 * (fConst184 + 7.73443195051137e-20)) + 1.36171651847717e-18));
	fConst239 = ((fConst0 * (fConst187 + 2.72739690445486e-24)) + -9.37875320049117e-24);
	fConst240 = (fConst0 * (-2.72739690445486e-24 - fConst187));
	fConst241 = (fConst0 * (-2.91285989395779e-24 - fConst190));
	fConst242 = ((fConst0 * (fConst192 + -1.31947527765415e-21)) + 2.32305988419978e-20);
	fConst243 = ((fConst0 * ((fConst0 * (1.23546374312187e-21 - fConst194)) + -2.17514970430691e-20)) + -7.48424505399195e-20);
	fConst244 = (fConst0 * ((fConst0 * (fConst194 + -1.23546374312187e-21)) + 2.17514970430691e-20));
	fConst245 = ((fConst0 * ((fConst0 * (fConst197 + 7.37354511240776e-21)) + -1.57987424925565e-19)) + -9.2062610036255e-19);
	fConst246 = ((fConst0 * ((fConst0 * ((fConst0 * (-6.90406845731063e-21 - fConst199)) + 1.47928300492102e-19)) + 8.62009457268305e-19)) + -1.50060051207859e-18);
	fConst247 = (fConst0 * ((fConst0 * ((fConst0 * (fConst199 + 6.90406845731063e-21)) + -1.47928300492102e-19)) + -8.62009457268305e-19));
	fConst248 = (fConst0 * ((fConst0 * (fConst202 + -4.60964530719214e-19)) + -9.34694346534748e-18));
	fConst249 = ((fConst0 * ((fConst0 * ((fConst0 * (4.31614729137841e-19 - fConst204)) + 8.75181972410813e-18)) + -4.5177783329111e-17)) + -3.19276704697572e-16);
	fConst250 = (fConst0 * ((fConst0 * ((fConst0 * (fConst204 + -4.31614729137841e-19)) + -8.75181972410813e-18)) + 4.5177783329111e-17));
	fConst251 = ((fConst0 * ((fConst0 * (fConst207 + 2.08017688353905e-22)) + -3.05672470418448e-21)) + -9.97739702179912e-21);
	fConst252 = (fConst0 * ((fConst0 * (-2.08017688353905e-22 - fConst207)) + 3.05672470418448e-21));
	fConst253 = (fConst0 * ((fConst0 * (-2.22162891161971e-22 - fConst210)) + 3.26458198406902e-21));
	fConst254 = ((fConst0 * ((fConst0 * (fConst212 + -1.73756145804592e-20)) + 1.76838202655143e-18)) + 2.60364460288438e-17);
	fConst255 = ((fConst0 * ((fConst0 * ((fConst0 * (1.62693020416284e-20 - fConst214)) + -1.65578841437399e-18)) + -2.43786947835616e-17)) + 7.96196282339569e-17);
	fConst256 = (fConst0 * ((fConst0 * ((fConst0 * (fConst214 + -1.62693020416284e-20)) + 1.65578841437399e-18)) + 2.43786947835616e-17));
	fConst257 = (fConst0 * ((fConst0 * ((fConst0 * (fConst217 + 8.99486083904103e-20)) + -1.00315952314701e-17)) + -1.82032088037908e-16));
	fConst258 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-8.42215434367138e-20 - fConst219)) + 9.39287943021548e-18)) + 1.70442029998041e-16)) + -9.4186951921795e-16)) + -7.98191761743929e-15);
	fConst259 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst219 + 8.42215434367138e-20)) + -9.39287943021548e-18)) + -1.70442029998041e-16)) + 9.4186951921795e-16));
	fConst260 = ((fConst0 * ((fConst0 * ((fConst0 * (5.21331434491869e-18 - fConst222)) + 2.39621039026015e-16)) + -2.71067542468295e-15)) + -3.99095880871965e-14);
	fConst261 = (fConst0 * ((fConst0 * ((fConst0 * (fConst222 + -5.21331434491869e-18)) + -2.39621039026015e-16)) + 2.71067542468295e-15));
	fConst262 = (fConst0 * ((fConst0 * ((fConst0 * (fConst225 + -5.56781972037316e-18)) + -2.55915269679784e-16)) + 2.89500135356139e-15));
	fConst263 = ((fConst0 * ((fConst0 * (-2.99095367015308e-21 - fConst107)) + 3.38701967357912e-20)) + 2.99321910653974e-19);
	fConst264 = (fConst0 * ((fConst0 * (fConst107 + 2.99095367015308e-21)) + -3.38701967357912e-20));
	fConst265 = (fConst0 * ((fConst0 * (fConst110 + 3.19433851972348e-21)) + -3.6173370113825e-20));
	fConst266 = (fConst0 * ((fConst0 * (5.51032162701814e-19 - fConst112)) + -2.55264149017735e-17));
	fConst267 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst114 + -5.15947717885594e-19)) + 2.39011375484771e-17)) + 8.12663847965709e-16)) + 3.99095880871965e-15);
	fConst268 = (fConst0 * ((fConst0 * ((fConst0 * (5.15947717885594e-19 - fConst114)) + -2.39011375484771e-17)) + -8.12663847965709e-16));
	fConst269 = ((fConst0 * (-8.53036904159285e-23 - fConst117)) + 2.93335472440894e-22);
	fConst270 = (fConst0 * (fConst117 + 8.53036904159285e-23));
	fConst271 = (fConst0 * (fConst120 + 9.11043413642117e-23));
	fConst272 = ((fConst0 * (4.13018666157307e-20 - fConst122)) + -7.27156620866807e-19);
	fConst273 = ((fConst0 * ((fConst0 * (fConst124 + -3.86721597525569e-20)) + 6.80858259238584e-19)) + 7.0280784621553e-18);
	fConst274 = (fConst0 * ((fConst0 * (3.86721597525569e-20 - fConst124)) + -6.80858259238584e-19));
	fConst275 = ((fConst0 * (-4.09109535668229e-24 - fConst127)) + -4.68937660024558e-24);
	fConst276 = (fConst0 * (fConst127 + 4.09109535668229e-24));
	fConst277 = (fConst0 * (fConst130 + 4.36928984093668e-24));
	fConst278 = ((fConst0 * (1.97921291648123e-21 - fConst132)) + 1.16152994209989e-20);
	fConst279 = ((fConst0 * ((fConst0 * (fConst134 + -1.8531956146828e-21)) + -1.08757485215345e-20)) + 3.74212252699598e-20);
	fConst280 = (fConst0 * ((fConst0 * (1.8531956146828e-21 - fConst134)) + 1.08757485215345e-20));
	fConst281 = ((fConst0 * ((fConst0 * (-1.10603176686116e-20 - fConst137)) + -7.89937124627823e-20)) + 4.60313050181275e-19);
	fConst282 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst139 + 1.03561026859659e-20)) + 7.39641502460509e-20)) + -4.31004728634153e-19)) + -2.25090076811788e-18);
	fConst283 = (fConst0 * ((fConst0 * ((fConst0 * (-1.03561026859659e-20 - fConst139)) + -7.39641502460509e-20)) + 4.31004728634153e-19));
	fConst284 = (fConst0 * ((fConst0 * (-2.30482265359607e-19 - fConst142)) + 4.67347173267374e-18));
	fConst285 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst144 + 2.1580736456892e-19)) + -4.37590986205406e-18)) + -6.77666749936664e-17)) + -1.59638352348786e-16);
	fConst286 = (fConst0 * ((fConst0 * ((fConst0 * (-2.1580736456892e-19 - fConst144)) + 4.37590986205406e-18)) + 6.77666749936664e-17));
	fConst287 = ((fConst0 * ((fConst0 * (-3.12026532530858e-22 - fConst147)) + -1.52836235209224e-21)) + 4.98869851089956e-21);
	fConst288 = (fConst0 * ((fConst0 * (fConst147 + 3.12026532530858e-22)) + 1.52836235209224e-21));
	fConst289 = (fConst0 * ((fConst0 * (fConst150 + 3.33244336742956e-22)) + 1.63229099203451e-21));
	fConst290 = ((fConst0 * ((fConst0 * (2.60634218706888e-20 - fConst152)) + 8.84191013275713e-19)) + -1.30182230144219e-17);
	fConst291 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst154 + -2.44039530624427e-20)) + -8.27894207186997e-19)) + 1.21893473917808e-17)) + 1.19429442350935e-16);
	fConst292 = (fConst0 * ((fConst0 * ((fConst0 * (2.44039530624427e-20 - fConst154)) + 8.27894207186997e-19)) + -1.21893473917808e-17));
	fConst293 = (fConst0 * ((fConst0 * ((fConst0 * (-1.34922912585615e-19 - fConst157)) + -5.01579761573506e-18)) + 9.10160440189538e-17));
	fConst294 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst159 + 1.26332315155071e-19)) + 4.69643971510774e-18)) + -8.52210149990205e-17)) + -1.41280427882693e-15)) + -3.99095880871965e-15);
	fConst295 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-1.26332315155071e-19 - fConst159)) + -4.69643971510774e-18)) + 8.52210149990205e-17)) + 1.41280427882693e-15));
	fConst296 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst162 + 2.60665717245935e-18)) + -1.19810519513008e-16)) + -4.06601313702443e-15)) + -1.99547940435982e-14);
	fConst297 = (fConst0 * ((fConst0 * ((fConst0 * (-2.60665717245935e-18 - fConst162)) + 1.19810519513008e-16)) + 4.06601313702443e-15));
	fConst298 = (fConst0 * ((fConst0 * ((fConst0 * (-2.78390986018658e-18 - fConst165)) + 1.27957634839892e-16)) + 4.34250203034209e-15));
	fConst299 = (3.98030871291953e-21 * fConst0);
	fConst300 = ((fConst0 * (fConst299 + -1.36968108966865e-17)) + 3.04019770262998e-17);
	fConst301 = (1.49388607863618e-19 * fConst0);
	fConst302 = (2.85365632059169e-16 - fConst301);
	fConst303 = (2.84307765208538e-20 * fConst0);
	fConst304 = (fConst0 * (1.13723106083416e-19 - fConst303));
	fConst305 = ((fConst0 * (fConst303 + -2.99551500704825e-18)) + 4.85778329470953e-15);
	fConst306 = (1.06706148474013e-18 * fConst0);
	fConst307 = ((fConst0 * (fConst306 + -1.44694505186984e-17)) + -8.0654685165543e-17);
	fConst308 = (fConst0 * (1.44694505186984e-17 - fConst306));
	fConst309 = (7.96061742583906e-21 * fConst0);
	fConst310 = ((fConst0 * (9.13120726445768e-18 - fConst309)) + 6.08039540525995e-17);
	fConst311 = (9.9592405242412e-20 * fConst0);
	fConst312 = (fConst311 + 5.70731264118338e-16);
	fConst313 = (5.68615530417075e-20 * fConst0);
	fConst314 = (fConst0 * (fConst313 + -7.58154040556104e-20));
	fConst315 = ((fConst0 * (1.99701000469884e-18 - fConst313)) + 9.71556658941906e-15);
	fConst316 = (7.11374323160086e-19 * fConst0);
	fConst317 = ((fConst0 * (-2.89389010373967e-17 - fConst316)) + 1.61309370331086e-16);
	fConst318 = (fConst0 * (fConst316 + 2.89389010373967e-17));
	fConst319 = ((fConst0 * (fConst309 + 9.13120726445768e-18)) + -6.08039540525995e-17);
	fConst320 = (fConst311 + -5.70731264118338e-16);
	fConst321 = (fConst0 * (-7.58154040556104e-20 - fConst313));
	fConst322 = ((fConst0 * (fConst313 + 1.99701000469884e-18)) + -9.71556658941906e-15);
	fConst323 = ((fConst0 * (2.89389010373967e-17 - fConst316)) + 1.61309370331086e-16);
	fConst324 = (fConst0 * (fConst316 + -2.89389010373967e-17));
	fConst325 = ((fConst0 * (-1.36968108966865e-17 - fConst299)) + -3.04019770262998e-17);
	fConst326 = (-2.85365632059169e-16 - fConst301);
	fConst327 = (fConst0 * (fConst303 + 1.13723106083416e-19));
	fConst328 = ((fConst0 * (-2.99551500704825e-18 - fConst303)) + -4.85778329470953e-15);
	fConst329 = ((fConst0 * (fConst306 + 1.44694505186984e-17)) + -8.0654685165543e-17);
	fConst330 = (fConst0 * (-1.44694505186984e-17 - fConst306));
	fConst331 = ((fConst0 * (fConst61 + 4.56560363222884e-18)) + 3.04019770262998e-17);
	fConst332 = (fConst63 + 2.85365632059169e-16);
	fConst333 = (fConst0 * (-3.79077020278052e-20 - fConst65));
	fConst334 = ((fConst0 * (fConst65 + 9.98505002349418e-19)) + 4.85778329470953e-15);
	fConst335 = ((fConst0 * (-1.44694505186984e-17 - fConst68)) + -8.0654685165543e-17);
	fConst336 = (fConst0 * (fConst68 + 1.44694505186984e-17));
	fConst337 = faustpower<2>(fConst0);
	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double 	fSlow0 = (0.004073836948085289 * (exp(double(fslider0)) + -1));
	double 	fSlow1 = (0.007000000000000006 * (1 - double(fslider1)));
	double 	fSlow2 = (0.004073836948085289 * (exp(double(fslider2)) + -1));
	double 	fSlow3 = (0.007000000000000006 * double(fslider3));
	double 	fSlow4 = (0.004073836948085289 * (exp(double(fslider4)) + -1));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		fRec1[0] = (fSlow1 + (0.993 * fRec1[1]));
		fRec2[0] = (fSlow2 + (0.993 * fRec2[1]));
		fRec3[0] = (fSlow3 + (0.993 * fRec3[1]));
		double fTemp0 = (fConst60 + (((((fRec0[0] * (fConst58 + ((fConst57 * fRec0[0]) + 3.99095880871965e-15))) + (fRec2[0] * (((fRec0[0] * (fConst55 + ((fConst54 * fRec0[0]) + 7.98191761743929e-16))) + (fConst0 * (fConst52 + ((fRec1[0] * (((fRec0[0] * (fConst50 + ((fConst49 * fRec0[0]) + -3.98098141169785e-17))) + (fConst0 * (fConst47 + (fRec1[0] * (fConst45 + ((fRec0[0] * (fConst43 + ((fConst42 * fRec0[0]) + -4.98869851089956e-21))) + -5.32793000964073e-21)))))) + -4.2516881476933e-17)) + 5.02958323262386e-16)))) + 8.52468801542517e-16))) + (fRec3[0] * (((fRec0[0] * (fConst40 + ((fConst39 * fRec0[0]) + 3.19276704697572e-17))) + (fConst0 * (fConst37 + (((fRec2[0] * (((fRec0[0] * (fConst35 + ((fConst34 * fRec0[0]) + 7.50300256039294e-19))) + (fConst0 * (fConst32 + (fRec1[0] * (((fRec0[0] * (fConst30 + ((fConst29 * fRec0[0]) + -3.74212252699598e-20))) + (fConst0 * (fConst27 + (fRec1[0] * (fConst25 + ((fRec0[0] * (fConst23 + ((fConst22 * fRec0[0]) + -4.68937660024558e-24))) + -5.00825420906228e-24)))))) + -3.9965868588317e-20))))) + 8.01320673449966e-19)) + (fRec1[0] * (((fRec0[0] * (fConst20 + ((fConst19 * fRec0[0]) + -2.34269282071843e-18))) + (fConst0 * (fConst17 + (fRec1[0] * (fConst15 + ((fRec0[0] * (fConst13 + ((fConst12 * fRec0[0]) + -2.93335472440894e-22))) + -3.13282284566875e-22)))))) + -2.50199593252729e-18))) + 2.41249362977453e-17)))) + 3.40987520617007e-17))) + (fRec1[0] * (((fRec0[0] * (fConst10 + ((fConst9 * fRec0[0]) + -7.98191761743929e-16))) + (fConst0 * (fConst7 + ((fRec1[0] * (fConst5 + ((fRec0[0] * (fConst3 + ((fConst2 * fRec0[0]) + -9.97739702179912e-20))) + -1.06558600192815e-19))) + -2.89308329875792e-16)))) + -8.52468801542517e-16))) + 4.26234400771258e-15));
		fRec4[0] = ((double)input0[i] - ((((((fRec4[1] * (fConst298 + (((((fRec0[0] * (fConst297 + ((fConst296 * fRec0[0]) + 1.99547940435982e-14))) + (fRec2[0] * (((fRec0[0] * (fConst295 + ((fConst294 * fRec0[0]) + 3.99095880871965e-15))) + (fConst0 * (fConst293 + ((fRec1[0] * (((fRec0[0] * (fConst292 + ((fConst291 * fRec0[0]) + -1.19429442350935e-16))) + (fConst0 * (fConst290 + (fRec1[0] * (fConst289 + ((fRec0[0] * (fConst288 + ((fConst287 * fRec0[0]) + -4.98869851089956e-21))) + -5.32793000964073e-21)))))) + -1.27550644430799e-16)) + 1.50887496978716e-15)))) + 4.26234400771258e-15))) + (fRec3[0] * (((fRec0[0] * (fConst286 + ((fConst285 * fRec0[0]) + 1.59638352348786e-16))) + (fConst0 * (fConst284 + (((fRec2[0] * (((fRec0[0] * (fConst283 + ((fConst282 * fRec0[0]) + 2.25090076811788e-18))) + (fConst0 * (fConst281 + (fRec1[0] * (((fRec0[0] * (fConst280 + ((fConst279 * fRec0[0]) + -3.74212252699598e-20))) + (fConst0 * (fConst278 + (fRec1[0] * (fConst277 + ((fRec0[0] * (fConst276 + ((fConst275 * fRec0[0]) + 4.68937660024558e-24))) + 5.00825420906228e-24)))))) + -3.9965868588317e-20))))) + 2.4039620203499e-18)) + (fRec1[0] * (((fRec0[0] * (fConst274 + ((fConst273 * fRec0[0]) + -7.0280784621553e-18))) + (fConst0 * (fConst272 + (fRec1[0] * (fConst271 + ((fRec0[0] * (fConst270 + ((fConst269 * fRec0[0]) + -2.93335472440894e-22))) + -3.13282284566875e-22)))))) + -7.50598779758186e-18))) + 7.23748088932358e-17)))) + 1.70493760308503e-16))) + (fRec1[0] * (((fRec0[0] * (fConst268 + ((fConst267 * fRec0[0]) + -3.99095880871965e-15))) + (fConst0 * (fConst266 + ((fRec1[0] * (fConst265 + ((fRec0[0] * (fConst264 + ((fConst263 * fRec0[0]) + -2.99321910653974e-19))) + -3.19675800578444e-19))) + -8.67924989627377e-16)))) + -4.26234400771258e-15))) + 2.13117200385629e-14))) + (fRec4[2] * (fConst262 + (((((fRec0[0] * (fConst261 + ((fConst260 * fRec0[0]) + 3.99095880871965e-14))) + (fRec2[0] * (((fRec0[0] * (fConst259 + ((fConst258 * fRec0[0]) + 7.98191761743929e-15))) + (fConst0 * (fConst257 + ((fRec1[0] * (((fRec0[0] * (fConst256 + ((fConst255 * fRec0[0]) + -7.96196282339569e-17))) + (fConst0 * (fConst254 + (fRec1[0] * (fConst253 + ((fRec0[0] * (fConst252 + ((fConst251 * fRec0[0]) + 9.97739702179912e-21))) + 1.06558600192815e-20)))))) + -8.5033762953866e-17)) + 1.00591664652477e-15)))) + 8.52468801542516e-15))) + (fRec3[0] * (((fRec0[0] * (fConst250 + ((fConst249 * fRec0[0]) + 3.19276704697572e-16))) + (fConst0 * (fConst248 + (((fRec2[0] * (((fRec0[0] * (fConst247 + ((fConst246 * fRec0[0]) + 1.50060051207859e-18))) + (fConst0 * (fConst245 + (fRec1[0] * (((fRec0[0] * (fConst244 + ((fConst243 * fRec0[0]) + 7.48424505399195e-20))) + (fConst0 * (fConst242 + (fRec1[0] * (fConst241 + ((fRec0[0] * (fConst240 + ((fConst239 * fRec0[0]) + 9.37875320049117e-24))) + 1.00165084181246e-23)))))) + 7.99317371766341e-20))))) + 1.60264134689993e-18)) + (fRec1[0] * (((fRec0[0] * (fConst238 + ((fConst237 * fRec0[0]) + -4.68538564143687e-18))) + (fConst0 * (fConst236 + (fRec1[0] * (fConst235 + ((fRec0[0] * (fConst234 + ((fConst233 * fRec0[0]) + 5.86670944881788e-22))) + 6.2656456913375e-22)))))) + -5.00399186505457e-18))) + 4.82498725954905e-17)))) + 3.40987520617007e-16))) + (fRec1[0] * (((fRec0[0] * (fConst232 + ((fConst231 * fRec0[0]) + -7.98191761743929e-15))) + (fConst0 * (fConst230 + ((fRec1[0] * (fConst229 + ((fRec0[0] * (fConst228 + ((fConst227 * fRec0[0]) + -1.99547940435982e-19))) + -2.13117200385629e-19))) + -5.78616659751585e-16)))) + -8.52468801542516e-15))) + 4.26234400771258e-14)))) + (fRec4[3] * (fConst226 + (((((fRec0[0] * (fConst224 + ((fConst223 * fRec0[0]) + 3.99095880871965e-14))) + (fRec2[0] * (((fRec0[0] * (fConst221 + ((fConst220 * fRec0[0]) + 7.98191761743929e-15))) + (fConst0 * (fConst218 + ((fRec1[0] * (((fRec0[0] * (fConst216 + ((fConst215 * fRec0[0]) + 7.96196282339569e-17))) + (fConst0 * (fConst213 + (fRec1[0] * (fConst211 + ((fRec0[0] * (fConst209 + ((fConst208 * fRec0[0]) + 9.97739702179912e-21))) + 1.06558600192815e-20)))))) + 8.5033762953866e-17)) + -1.00591664652477e-15)))) + 8.52468801542516e-15))) + (fRec3[0] * (((fRec0[0] * (fConst206 + ((fConst205 * fRec0[0]) + 3.19276704697572e-16))) + (fConst0 * (fConst203 + (((fRec2[0] * (((fRec0[0] * (fConst201 + ((fConst200 * fRec0[0]) + -1.50060051207859e-18))) + (fConst0 * (fConst198 + (fRec1[0] * (((fRec0[0] * (fConst196 + ((fConst195 * fRec0[0]) + 7.48424505399195e-20))) + (fConst0 * (fConst193 + (fRec1[0] * (fConst191 + ((fRec0[0] * (fConst189 + ((fConst188 * fRec0[0]) + -9.37875320049117e-24))) + -1.00165084181246e-23)))))) + 7.99317371766341e-20))))) + -1.60264134689993e-18)) + (fRec1[0] * (((fRec0[0] * (fConst186 + ((fConst185 * fRec0[0]) + 4.68538564143687e-18))) + (fConst0 * (fConst183 + (fRec1[0] * (fConst181 + ((fRec0[0] * (fConst179 + ((fConst178 * fRec0[0]) + 5.86670944881788e-22))) + 6.2656456913375e-22)))))) + 5.00399186505457e-18))) + -4.82498725954905e-17)))) + 3.40987520617007e-16))) + (fRec1[0] * (((fRec0[0] * (fConst176 + ((fConst175 * fRec0[0]) + -7.98191761743929e-15))) + (fConst0 * (fConst173 + ((fRec1[0] * (fConst171 + ((fRec0[0] * (fConst169 + ((fConst168 * fRec0[0]) + 1.99547940435982e-19))) + 2.13117200385629e-19))) + 5.78616659751585e-16)))) + -8.52468801542516e-15))) + 4.26234400771258e-14)))) + (fRec4[4] * (fConst166 + (((((fRec0[0] * (fConst164 + ((fConst163 * fRec0[0]) + 1.99547940435982e-14))) + (fRec2[0] * (((fRec0[0] * (fConst161 + ((fConst160 * fRec0[0]) + 3.99095880871965e-15))) + (fConst0 * (fConst158 + ((fRec1[0] * (((fRec0[0] * (fConst156 + ((fConst155 * fRec0[0]) + 1.19429442350935e-16))) + (fConst0 * (fConst153 + (fRec1[0] * (fConst151 + ((fRec0[0] * (fConst149 + ((fConst148 * fRec0[0]) + -4.98869851089956e-21))) + -5.32793000964073e-21)))))) + 1.27550644430799e-16)) + -1.50887496978716e-15)))) + 4.26234400771258e-15))) + (fRec3[0] * (((fRec0[0] * (fConst146 + ((fConst145 * fRec0[0]) + 1.59638352348786e-16))) + (fConst0 * (fConst143 + (((fRec2[0] * (((fRec0[0] * (fConst141 + ((fConst140 * fRec0[0]) + -2.25090076811788e-18))) + (fConst0 * (fConst138 + (fRec1[0] * (((fRec0[0] * (fConst136 + ((fConst135 * fRec0[0]) + -3.74212252699598e-20))) + (fConst0 * (fConst133 + (fRec1[0] * (fConst131 + ((fRec0[0] * (fConst129 + ((fConst128 * fRec0[0]) + -4.68937660024558e-24))) + -5.00825420906228e-24)))))) + -3.9965868588317e-20))))) + -2.4039620203499e-18)) + (fRec1[0] * (((fRec0[0] * (fConst126 + ((fConst125 * fRec0[0]) + 7.0280784621553e-18))) + (fConst0 * (fConst123 + (fRec1[0] * (fConst121 + ((fRec0[0] * (fConst119 + ((fConst118 * fRec0[0]) + -2.93335472440894e-22))) + -3.13282284566875e-22)))))) + 7.50598779758186e-18))) + -7.23748088932358e-17)))) + 1.70493760308503e-16))) + (fRec1[0] * (((fRec0[0] * (fConst116 + ((fConst115 * fRec0[0]) + -3.99095880871965e-15))) + (fConst0 * (fConst113 + ((fRec1[0] * (fConst111 + ((fRec0[0] * (fConst109 + ((fConst108 * fRec0[0]) + 2.99321910653974e-19))) + 3.19675800578444e-19))) + 8.67924989627377e-16)))) + -4.26234400771258e-15))) + 2.13117200385629e-14)))) + (fRec4[5] * (fConst106 + (((((fRec0[0] * (fConst105 + ((fConst104 * fRec0[0]) + 3.99095880871965e-15))) + (fRec2[0] * (((fRec0[0] * (fConst103 + ((fConst102 * fRec0[0]) + 7.98191761743929e-16))) + (fConst0 * (fConst101 + ((fRec1[0] * (((fRec0[0] * (fConst100 + ((fConst99 * fRec0[0]) + 3.98098141169785e-17))) + (fConst0 * (fConst98 + (fRec1[0] * (fConst97 + ((fRec0[0] * (fConst96 + ((fConst95 * fRec0[0]) + -4.98869851089956e-21))) + -5.32793000964073e-21)))))) + 4.2516881476933e-17)) + -5.02958323262386e-16)))) + 8.52468801542517e-16))) + (fRec3[0] * (((fRec0[0] * (fConst94 + ((fConst93 * fRec0[0]) + 3.19276704697572e-17))) + (fConst0 * (fConst92 + (((fRec2[0] * (((fRec0[0] * (fConst91 + ((fConst90 * fRec0[0]) + -7.50300256039294e-19))) + (fConst0 * (fConst89 + (fRec1[0] * (((fRec0[0] * (fConst88 + ((fConst87 * fRec0[0]) + -3.74212252699598e-20))) + (fConst0 * (fConst86 + (fRec1[0] * (fConst85 + ((fRec0[0] * (fConst84 + ((fConst83 * fRec0[0]) + 4.68937660024558e-24))) + 5.00825420906228e-24)))))) + -3.9965868588317e-20))))) + -8.01320673449966e-19)) + (fRec1[0] * (((fRec0[0] * (fConst82 + ((fConst81 * fRec0[0]) + 2.34269282071843e-18))) + (fConst0 * (fConst80 + (fRec1[0] * (fConst79 + ((fRec0[0] * (fConst78 + ((fConst77 * fRec0[0]) + -2.93335472440894e-22))) + -3.13282284566875e-22)))))) + 2.50199593252729e-18))) + -2.41249362977453e-17)))) + 3.40987520617007e-17))) + (fRec1[0] * (((fRec0[0] * (fConst76 + ((fConst75 * fRec0[0]) + -7.98191761743929e-16))) + (fConst0 * (fConst74 + ((fRec1[0] * (fConst73 + ((fRec0[0] * (fConst72 + ((fConst71 * fRec0[0]) + 9.97739702179912e-20))) + 1.06558600192815e-19))) + 2.89308329875792e-16)))) + -8.52468801542517e-16))) + 4.26234400771258e-15)))) / fTemp0));
		fRec5[0] = (fSlow4 + (0.993 * fRec5[1]));
		output0[i] = (FAUSTFLOAT)(fConst337 * (((fRec0[0] * fRec5[0]) * ((((((fRec4[0] * (fConst336 + ((((fConst335 * fRec1[0]) + (fRec2[0] * ((fConst0 * (fConst334 + (fConst333 * fRec1[0]))) + 3.23425287513827e-14))) + (fRec3[0] * ((fConst0 * (fConst332 + (fConst331 * fRec2[0]))) + 1.90022438250019e-15))) + 8.0654685165543e-17))) + (fRec4[1] * (fConst330 + ((((fConst329 * fRec1[0]) + (fRec2[0] * ((fConst0 * (fConst328 + (fConst327 * fRec1[0]))) + 3.23425287513827e-14))) + (fRec3[0] * ((fConst0 * (fConst326 + (fConst325 * fRec2[0]))) + 1.90022438250019e-15))) + 8.0654685165543e-17)))) + (fRec4[2] * (fConst324 + ((((fConst323 * fRec1[0]) + (fRec2[0] * ((fConst0 * (fConst322 + (fConst321 * fRec1[0]))) + -6.46850575027655e-14))) + (fRec3[0] * ((fConst0 * (fConst320 + (fConst319 * fRec2[0]))) + -3.80044876500038e-15))) + -1.61309370331086e-16)))) + (fRec4[3] * (fConst318 + ((((fConst317 * fRec1[0]) + (fRec2[0] * ((fConst0 * (fConst315 + (fConst314 * fRec1[0]))) + -6.46850575027655e-14))) + (fRec3[0] * ((fConst0 * (fConst312 + (fConst310 * fRec2[0]))) + -3.80044876500038e-15))) + -1.61309370331086e-16)))) + (fRec4[4] * (fConst308 + ((((fConst307 * fRec1[0]) + (fRec2[0] * ((fConst0 * (fConst305 + (fConst304 * fRec1[0]))) + 3.23425287513827e-14))) + (fRec3[0] * ((fConst0 * (fConst302 + (fConst300 * fRec2[0]))) + 1.90022438250019e-15))) + 8.0654685165543e-17)))) + (fRec4[5] * (fConst70 + ((((fConst69 * fRec1[0]) + (fRec2[0] * ((fConst0 * (fConst67 + (fConst66 * fRec1[0]))) + 3.23425287513827e-14))) + (fRec3[0] * ((fConst0 * (fConst64 + (fConst62 * fRec2[0]))) + 1.90022438250019e-15))) + 8.0654685165543e-17))))) / fTemp0));
		// post processing
		fRec5[1] = fRec5[0];
		for (int i=5; i>0; i--) fRec4[i] = fRec4[i-1];
		fRec3[1] = fRec3[0];
		fRec2[1] = fRec2[0];
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
	reg.registerVar("alembic.Bass",N_("Bass"),"S","",&fslider2, 0.5, 0.0, 1.0, 0.01);
	reg.registerVar("alembic.Input",N_("Input"),"S","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	reg.registerVar("alembic.Middle",N_("Middle"),"S","",&fslider3, 0.5, 0.0, 1.0, 0.01);
	reg.registerVar("alembic.Treble",N_("Treble"),"S","",&fslider1, 0.5, 0.0, 1.0, 0.01);
	reg.registerVar("alembic.Volume",N_("Volume"),"S","",&fslider4, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("alembic" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("Input"), "Input");
b.closeBox();
b.openHorizontalBox("");

    b.create_small_rackknobr(PARAM("Input"), "Input");

    b.create_small_rackknobr(PARAM("Bass"), "Bass");

    b.create_small_rackknobr(PARAM("Middle"), "Middle");

    b.create_small_rackknobr(PARAM("Treble"), "Treble");

    b.create_small_rackknobr(PARAM("Volume"), "Volume");
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

} // end namespace alembic
