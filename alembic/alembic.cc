/* ------------------------------------------------------------
name: "Alembic Preamp"
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
	FAUSTFLOAT fVslider0;
	double fRec0[2];
	FAUSTFLOAT fVslider1;
	double fRec1[2];
	double fConst2;
	double fConst3;
	FAUSTFLOAT fVslider2;
	double fRec3[2];
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	double fConst8;
	FAUSTFLOAT fVslider3;
	double fRec4[2];
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
	FAUSTFLOAT fVslider4;
	double fRec5[2];
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
	double fConst93;
	double fConst94;
	double fConst95;
	double fConst96;
	double fConst97;
	double fConst98;
	double fConst99;
	double fConst100;
	double fConst101;
	double fConst102;
	double fConst103;
	double fConst104;
	double fConst105;
	double fConst106;
	double fConst107;
	double fConst108;
	double fConst109;
	double fConst110;
	double fConst111;
	double fConst112;
	double fConst113;
	double fConst114;
	double fConst115;
	double fConst116;
	double fConst117;
	double fConst118;
	double fConst119;
	double fConst120;
	double fConst121;
	double fConst122;
	double fConst123;
	double fConst124;
	double fConst125;
	double fConst126;
	double fConst127;
	double fConst128;
	double fConst129;
	double fConst130;
	double fConst131;
	double fConst132;
	double fConst133;
	double fConst134;
	double fConst135;
	double fConst136;
	double fConst137;
	double fConst138;
	double fConst139;
	double fConst140;
	double fConst141;
	double fConst142;
	double fConst143;
	double fConst144;
	double fConst145;
	double fConst146;
	double fConst147;
	double fConst148;
	double fConst149;
	double fConst150;
	double fConst151;
	double fConst152;
	double fConst153;
	double fConst154;
	double fConst155;
	double fConst156;
	double fConst157;
	double fConst158;
	double fConst159;
	double fConst160;
	double fConst161;
	double fConst162;
	double fConst163;
	double fConst164;
	double fConst165;
	double fConst166;
	double fConst167;
	double fConst168;
	double fConst169;
	double fConst170;
	double fConst171;
	double fConst172;
	double fConst173;
	double fConst174;
	double fConst175;
	double fConst176;
	double fConst177;
	double fConst178;
	double fConst179;
	double fConst180;
	double fConst181;
	double fConst182;
	double fConst183;
	double fConst184;
	double fConst185;
	double fConst186;
	double fConst187;
	double fConst188;
	double fConst189;
	double fConst190;
	double fConst191;
	double fConst192;
	double fConst193;
	double fConst194;
	double fConst195;
	double fConst196;
	double fConst197;
	double fConst198;
	double fConst199;
	double fConst200;
	double fConst201;
	double fConst202;
	double fConst203;
	double fConst204;
	double fConst205;
	double fConst206;
	double fConst207;
	double fConst208;
	double fConst209;
	double fConst210;
	double fConst211;
	double fConst212;
	double fConst213;
	double fConst214;
	double fConst215;
	double fConst216;
	double fConst217;
	double fConst218;
	double fConst219;
	double fConst220;
	double fConst221;
	double fConst222;
	double fConst223;
	double fConst224;
	double fConst225;
	double fConst226;
	double fConst227;
	double fConst228;
	double fConst229;
	double fConst230;
	double fConst231;
	double fConst232;
	double fConst233;
	double fConst234;
	double fConst235;
	double fConst236;
	double fConst237;
	double fConst238;
	double fConst239;
	double fConst240;
	double fConst241;
	double fConst242;
	double fConst243;
	double fConst244;
	double fConst245;
	double fConst246;
	double fConst247;
	double fConst248;
	double fConst249;
	double fConst250;
	double fConst251;
	double fConst252;
	double fConst253;
	double fConst254;
	double fConst255;
	double fConst256;
	double fConst257;
	double fConst258;
	double fConst259;
	double fConst260;
	double fConst261;
	double fConst262;
	double fConst263;
	double fConst264;
	double fConst265;
	double fConst266;
	double fConst267;
	double fConst268;
	double fConst269;
	double fConst270;
	double fConst271;
	double fConst272;
	double fConst273;
	double fConst274;
	double fConst275;
	double fConst276;
	double fConst277;
	double fConst278;
	double fConst279;
	double fConst280;
	double fConst281;
	double fConst282;
	double fConst283;
	double fConst284;
	double fConst285;
	double fConst286;
	double fConst287;
	double fConst288;
	double fConst289;
	double fRec2[6];
	double fConst290;
	double fConst291;
	double fConst292;
	double fConst293;
	double fConst294;
	double fConst295;
	double fConst296;
	double fConst297;
	double fConst298;
	double fConst299;
	double fConst300;
	double fConst301;
	double fConst302;
	double fConst303;
	double fConst304;
	double fConst305;
	double fConst306;
	double fConst307;
	double fConst308;
	double fConst309;
	double fConst310;
	double fConst311;
	double fConst312;
	double fConst313;
	double fConst314;
	double fConst315;
	double fConst316;
	double fConst317;
	double fConst318;
	double fConst319;
	double fConst320;
	double fConst321;
	double fConst322;
	double fConst323;
	double fConst324;
	double fConst325;
	double fConst326;
	double fConst327;
	double fConst328;
	double fConst329;
	double fConst330;
	double fConst331;
	double fConst332;
	double fConst333;
	double fConst334;
	double fConst335;
	double fConst336;
	double fConst337;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.0");
		m->declare("category", "External");
		m->declare("filename", "alembic");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("id", "alembic");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "Alembic Preamp");
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
		fConst2 = (9.3476168267280999e-22 * fConst0);
		fConst3 = ((((((-2.7839098601865799e-18 - fConst2) * fConst0) + 1.27957634839892e-16) * fConst0) + 4.3425020303420898e-15) * fConst0);
		fConst4 = (2.3320020406901101e-23 * fConst0);
		fConst5 = ((((((((-1.2633231515507101e-19 - fConst4) * fConst0) + -4.6964397151077401e-18) * fConst0) + 8.5221014999020503e-17) * fConst0) + 1.4128042788269299e-15) * fConst0);
		fConst6 = (((((((((fConst4 + 1.2633231515507101e-19) * fConst0) + 4.6964397151077401e-18) * fConst0) + -8.5221014999020503e-17) * fConst0) + -1.4128042788269299e-15) * fConst0) + -3.9909588087196502e-15);
		fConst7 = (2.49057817945703e-23 * fConst0);
		fConst8 = (((((((-1.3492291258561499e-19 - fConst7) * fConst0) + -5.0157976157350603e-18) * fConst0) + 9.1016044018953801e-17) * fConst0) + 1.5088749697871601e-15);
		fConst9 = (4.9784602875504403e-24 * fConst0);
		fConst10 = (((((((2.60634218706888e-20 - fConst9) * fConst0) + 8.8419101327571306e-19) * fConst0) + -1.30182230144219e-17) * fConst0) + -1.27550644430799e-16);
		fConst11 = (4.6614796699910497e-24 * fConst0);
		fConst12 = (((((((2.4403953062442701e-20 - fConst11) * fConst0) + 8.2789420718699695e-19) * fConst0) + -1.21893473917808e-17) * fConst0) + -1.19429442350935e-16);
		fConst13 = (((((((fConst11 + -2.4403953062442701e-20) * fConst0) + -8.2789420718699695e-19) * fConst0) + 1.21893473917808e-17) * fConst0) + 1.19429442350935e-16);
		fConst14 = (5.53312035914695e-24 * fConst0);
		fConst15 = (((((fConst14 + 3.33244336742956e-22) * fConst0) + 1.63229099203451e-21) * fConst0) + -5.32793000964073e-21);
		fConst16 = (5.1808243063173699e-24 * fConst0);
		fConst17 = (((((fConst16 + 3.1202653253085801e-22) * fConst0) + 1.5283623520922399e-21) * fConst0) + -4.9886985108995597e-21);
		fConst18 = (((((-3.1202653253085801e-22 - fConst16) * fConst0) + -1.5283623520922399e-21) * fConst0) + 4.9886985108995597e-21);
		fConst19 = (8.7524502122922301e-22 * fConst0);
		fConst20 = ((((((-2.6066571724593501e-18 - fConst19) * fConst0) + 1.1981051951300801e-16) * fConst0) + 4.0660131370244303e-15) * fConst0);
		fConst21 = (((((((fConst19 + 2.6066571724593501e-18) * fConst0) + -1.1981051951300801e-16) * fConst0) + -4.0660131370244303e-15) * fConst0) + -1.9954794043598201e-14);
		fConst22 = (8.4329985537621802e-23 * fConst0);
		fConst23 = ((((((-2.1580736456892001e-19 - fConst22) * fConst0) + 4.3759098620540603e-18) * fConst0) + 6.7766674993666405e-17) * fConst0);
		fConst24 = (((((((fConst22 + 2.1580736456892001e-19) * fConst0) + -4.3759098620540603e-18) * fConst0) + -6.7766674993666405e-17) * fConst0) + -1.5963835234878601e-16);
		fConst25 = (9.0064424554180099e-23 * fConst0);
		fConst26 = (((((-2.3048226535960701e-19 - fConst25) * fConst0) + 4.6734717326737396e-18) * fConst0) + 7.2374808893235794e-17);
		fConst27 = (2.3996757109106899e-24 * fConst0);
		fConst28 = (((((((-1.10603176686116e-20 - fConst27) * fConst0) + -7.89937124627823e-20) * fConst0) + 4.6031305018127497e-19) * fConst0) + 2.4039620203499002e-18);
		fConst29 = (2.2468873697665698e-24 * fConst0);
		fConst30 = (((((((-1.0356102685965901e-20 - fConst29) * fConst0) + -7.3964150246050895e-20) * fConst0) + 4.31004728634153e-19) * fConst0) + 2.2509007681178798e-18);
		fConst31 = (((((((fConst29 + 1.0356102685965901e-20) * fConst0) + 7.3964150246050895e-20) * fConst0) + -4.31004728634153e-19) * fConst0) + -2.2509007681178798e-18);
		fConst32 = (5.8050582522179604e-25 * fConst0);
		fConst33 = (((((1.97921291648123e-21 - fConst32) * fConst0) + 1.16152994209989e-20) * fConst0) + -3.9965868588316998e-20);
		fConst34 = (5.4354478017022097e-25 * fConst0);
		fConst35 = (((((1.8531956146828e-21 - fConst34) * fConst0) + 1.08757485215345e-20) * fConst0) + -3.74212252699598e-20);
		fConst36 = (((((fConst34 + -1.8531956146828e-21) * fConst0) + -1.08757485215345e-20) * fConst0) + 3.74212252699598e-20);
		fConst37 = (4.1464701801556802e-25 * fConst0);
		fConst38 = (((fConst37 + 4.3692898409366801e-24) * fConst0) + 5.0082542090622801e-24);
		fConst39 = (3.8824627155015799e-25 * fConst0);
		fConst40 = (((fConst39 + 4.0910953566822896e-24) * fConst0) + 4.6893766002455802e-24);
		fConst41 = (((-4.0910953566822896e-24 - fConst39) * fConst0) + -4.6893766002455802e-24);
		fConst42 = (2.17874952274734e-23 * fConst0);
		fConst43 = (((((4.1301866615730703e-20 - fConst42) * fConst0) + -7.2715662086680697e-19) * fConst0) + -7.5059877975818597e-18);
		fConst44 = (2.0400276430218499e-23 * fConst0);
		fConst45 = (((((3.86721597525569e-20 - fConst44) * fConst0) + -6.80858259238584e-19) * fConst0) + -7.0280784621553003e-18);
		fConst46 = (((((fConst44 + -3.86721597525569e-20) * fConst0) + 6.80858259238584e-19) * fConst0) + 7.0280784621553003e-18);
		fConst47 = (1.5562496591052401e-23 * fConst0);
		fConst48 = (((fConst47 + 9.1104341364211697e-23) * fConst0) + -3.13282284566875e-22);
		fConst49 = (1.4571626021584601e-23 * fConst0);
		fConst50 = (((fConst49 + 8.5303690415928501e-23) * fConst0) + -2.9333547244089399e-22);
		fConst51 = (((-8.5303690415928501e-23 - fConst49) * fConst0) + 2.9333547244089399e-22);
		fConst52 = (1.7495425825242999e-22 * fConst0);
		fConst53 = ((((((5.1594771788559396e-19 - fConst52) * fConst0) + -2.3901137548477101e-17) * fConst0) + -8.1266384796570904e-16) * fConst0);
		fConst54 = (((((((fConst52 + -5.1594771788559396e-19) * fConst0) + 2.3901137548477101e-17) * fConst0) + 8.1266384796570904e-16) * fConst0) + 3.9909588087196502e-15);
		fConst55 = (1.8685114781359499e-22 * fConst0);
		fConst56 = (((((5.5103216270181403e-19 - fConst55) * fConst0) + -2.5526414901773499e-17) * fConst0) + -8.6792498962737701e-16);
		fConst57 = (2.07668602415643e-22 * fConst0);
		fConst58 = (((((fConst57 + 3.1943385197234802e-21) * fConst0) + -3.6173370113824998e-20) * fConst0) + -3.1967580057844399e-19);
		fConst59 = (1.9444625694348601e-22 * fConst0);
		fConst60 = (((((fConst59 + 2.9909536701530801e-21) * fConst0) + -3.38701967357912e-20) * fConst0) + -2.9932191065397399e-19);
		fConst61 = (((((-2.9909536701530801e-21 - fConst59) * fConst0) + 3.38701967357912e-20) * fConst0) + 2.9932191065397399e-19);
		fConst62 = (6.2317445511520701e-22 * fConst0);
		fConst63 = ((((((fConst62 + -5.5678197203731598e-18) * fConst0) + -2.5591526967978399e-16) * fConst0) + 2.8950013535613899e-15) * fConst0);
		fConst64 = (4.6640040813802101e-23 * fConst0);
		fConst65 = ((((((((fConst64 + 8.4221543436713806e-20) * fConst0) + -9.3928794302154803e-18) * fConst0) + -1.7044202999804101e-16) * fConst0) + 9.4186951921795007e-16) * fConst0);
		fConst66 = (((((((((-8.4221543436713806e-20 - fConst64) * fConst0) + 9.3928794302154803e-18) * fConst0) + 1.7044202999804101e-16) * fConst0) + -9.4186951921795007e-16) * fConst0) + -7.9819176174392894e-15);
		fConst67 = (4.98115635891407e-23 * fConst0);
		fConst68 = (((((((fConst67 + 8.9948608390410295e-20) * fConst0) + -1.0031595231470101e-17) * fConst0) + -1.82032088037908e-16) * fConst0) + 1.0059166465247699e-15);
		fConst69 = (9.9569205751008895e-24 * fConst0);
		fConst70 = (((((((fConst69 + -1.73756145804592e-20) * fConst0) + 1.76838202655143e-18) * fConst0) + 2.6036446028843799e-17) * fConst0) + -8.5033762953866005e-17);
		fConst71 = (9.3229593399820993e-24 * fConst0);
		fConst72 = (((((((fConst71 + -1.6269302041628401e-20) * fConst0) + 1.6557884143739901e-18) * fConst0) + 2.4378694783561601e-17) * fConst0) + -7.9619628233956894e-17);
		fConst73 = (((((((1.6269302041628401e-20 - fConst71) * fConst0) + -1.6557884143739901e-18) * fConst0) + -2.4378694783561601e-17) * fConst0) + 7.9619628233956894e-17);
		fConst74 = (1.10662407182939e-23 * fConst0);
		fConst75 = (((((-2.2216289116197101e-22 - fConst74) * fConst0) + 3.2645819840690199e-21) * fConst0) + 1.0655860019281501e-20);
		fConst76 = (1.03616486126347e-23 * fConst0);
		fConst77 = (((((-2.08017688353905e-22 - fConst76) * fConst0) + 3.0567247041844798e-21) * fConst0) + 9.9773970217991194e-21);
		fConst78 = (((((fConst76 + 2.08017688353905e-22) * fConst0) + -3.0567247041844798e-21) * fConst0) + -9.9773970217991194e-21);
		fConst79 = (5.8349668081948204e-22 * fConst0);
		fConst80 = ((((((fConst79 + -5.2133143449186902e-18) * fConst0) + -2.3962103902601498e-16) * fConst0) + 2.7106754246829498e-15) * fConst0);
		fConst81 = (((((((5.2133143449186902e-18 - fConst79) * fConst0) + 2.3962103902601498e-16) * fConst0) + -2.7106754246829498e-15) * fConst0) + -3.9909588087196502e-14);
		fConst82 = (5.6219990358414495e-23 * fConst0);
		fConst83 = ((((((fConst82 + -4.3161472913784098e-19) * fConst0) + -8.7518197241081298e-18) * fConst0) + 4.5177783329110998e-17) * fConst0);
		fConst84 = (((((((4.3161472913784098e-19 - fConst82) * fConst0) + 8.7518197241081298e-18) * fConst0) + -4.5177783329110998e-17) * fConst0) + -3.1927670469757201e-16);
		fConst85 = (6.0042949702786697e-23 * fConst0);
		fConst86 = (((((fConst85 + -4.6096453071921402e-19) * fConst0) + -9.3469434653474793e-18) * fConst0) + 4.8249872595490503e-17);
		fConst87 = (4.7993514218213902e-24 * fConst0);
		fConst88 = (((((((fConst87 + 7.3735451124077607e-21) * fConst0) + -1.5798742492556501e-19) * fConst0) + -9.2062610036254994e-19) * fConst0) + 1.6026413468999299e-18);
		fConst89 = (4.4937747395331301e-24 * fConst0);
		fConst90 = (((((((fConst89 + 6.9040684573106295e-21) * fConst0) + -1.4792830049210201e-19) * fConst0) + -8.6200945726830504e-19) * fConst0) + 1.5006005120785901e-18);
		fConst91 = (((((((-6.9040684573106295e-21 - fConst89) * fConst0) + 1.4792830049210201e-19) * fConst0) + 8.6200945726830504e-19) * fConst0) + -1.5006005120785901e-18);
		fConst92 = (1.1610116504435901e-24 * fConst0);
		fConst93 = (((((fConst92 + -1.31947527765415e-21) * fConst0) + 2.3230598841997801e-20) * fConst0) + 7.9931737176634104e-20);
		fConst94 = (1.0870895603404399e-24 * fConst0);
		fConst95 = (((((fConst94 + -1.2354637431218701e-21) * fConst0) + 2.17514970430691e-20) * fConst0) + 7.4842450539919503e-20);
		fConst96 = (((((1.2354637431218701e-21 - fConst94) * fConst0) + -2.17514970430691e-20) * fConst0) + -7.4842450539919503e-20);
		fConst97 = (8.2929403603113697e-25 * fConst0);
		fConst98 = (((-2.9128598939577901e-24 - fConst97) * fConst0) + 1.00165084181246e-23);
		fConst99 = (7.7649254310031496e-25 * fConst0);
		fConst100 = (((-2.7273969044548599e-24 - fConst99) * fConst0) + 9.3787532004911707e-24);
		fConst101 = (((fConst99 + 2.7273969044548599e-24) * fConst0) + -9.3787532004911707e-24);
		fConst102 = (1.4524996818315601e-23 * fConst0);
		fConst103 = (((((fConst102 + 8.2603733231461502e-20) * fConst0) + 1.4543132417336101e-18) * fConst0) + -5.0039918650545698e-18);
		fConst104 = (1.36001842868123e-23 * fConst0);
		fConst105 = (((((fConst104 + 7.7344319505113703e-20) * fConst0) + 1.3617165184771699e-18) * fConst0) + -4.6853856414368699e-18);
		fConst106 = (((((-7.7344319505113703e-20 - fConst104) * fConst0) + -1.3617165184771699e-18) * fConst0) + 4.6853856414368699e-18);
		fConst107 = (1.03749977273683e-23 * fConst0);
		fConst108 = (((1.8220868272842299e-22 - fConst107) * fConst0) + 6.2656456913375e-22);
		fConst109 = (9.7144173477230904e-24 * fConst0);
		fConst110 = (((1.70607380831857e-22 - fConst109) * fConst0) + 5.8667094488178797e-22);
		fConst111 = (((fConst109 + -1.70607380831857e-22) * fConst0) + -5.8667094488178797e-22);
		fConst112 = (1.1663617216828699e-22 * fConst0);
		fConst113 = ((((((fConst112 + 1.03189543577119e-18) * fConst0) + 4.7802275096954202e-17) * fConst0) + -5.4177589864380596e-16) * fConst0);
		fConst114 = (((((((-1.03189543577119e-18 - fConst112) * fConst0) + -4.7802275096954202e-17) * fConst0) + 5.4177589864380596e-16) * fConst0) + 7.9819176174392894e-15);
		fConst115 = (1.2456743187573e-22 * fConst0);
		fConst116 = (((((fConst115 + 1.10206432540363e-18) * fConst0) + 5.1052829803547098e-17) * fConst0) + -5.7861665975158497e-16);
		fConst117 = (1.3844573494376201e-22 * fConst0);
		fConst118 = (((((6.3886770394469701e-21 - fConst117) * fConst0) + 7.2346740227649899e-20) * fConst0) + -2.1311720038562899e-19);
		fConst119 = (1.29630837962324e-22 * fConst0);
		fConst120 = (((((5.9819073403061496e-21 - fConst119) * fConst0) + 6.7740393471582303e-20) * fConst0) + -1.99547940435982e-19);
		fConst121 = (((((fConst119 + -5.9819073403061496e-21) * fConst0) + -6.7740393471582303e-20) * fConst0) + 1.99547940435982e-19);
		fConst122 = ((((((fConst62 + 5.5678197203731598e-18) * fConst0) + -2.5591526967978399e-16) * fConst0) + -2.8950013535613899e-15) * fConst0);
		fConst123 = ((((((((8.4221543436713806e-20 - fConst64) * fConst0) + 9.3928794302154803e-18) * fConst0) + -1.7044202999804101e-16) * fConst0) + -9.4186951921795007e-16) * fConst0);
		fConst124 = (((((((((fConst64 + -8.4221543436713806e-20) * fConst0) + -9.3928794302154803e-18) * fConst0) + 1.7044202999804101e-16) * fConst0) + 9.4186951921795007e-16) * fConst0) + -7.9819176174392894e-15);
		fConst125 = (((((((8.9948608390410295e-20 - fConst67) * fConst0) + 1.0031595231470101e-17) * fConst0) + -1.82032088037908e-16) * fConst0) + -1.0059166465247699e-15);
		fConst126 = (((((((-1.73756145804592e-20 - fConst69) * fConst0) + -1.76838202655143e-18) * fConst0) + 2.6036446028843799e-17) * fConst0) + 8.5033762953866005e-17);
		fConst127 = (((((((-1.6269302041628401e-20 - fConst71) * fConst0) + -1.6557884143739901e-18) * fConst0) + 2.4378694783561601e-17) * fConst0) + 7.9619628233956894e-17);
		fConst128 = (((((((fConst71 + 1.6269302041628401e-20) * fConst0) + 1.6557884143739901e-18) * fConst0) + -2.4378694783561601e-17) * fConst0) + -7.9619628233956894e-17);
		fConst129 = (((((fConst74 + -2.2216289116197101e-22) * fConst0) + -3.2645819840690199e-21) * fConst0) + 1.0655860019281501e-20);
		fConst130 = (((((fConst76 + -2.08017688353905e-22) * fConst0) + -3.0567247041844798e-21) * fConst0) + 9.9773970217991194e-21);
		fConst131 = (((((2.08017688353905e-22 - fConst76) * fConst0) + 3.0567247041844798e-21) * fConst0) + -9.9773970217991194e-21);
		fConst132 = ((((((fConst79 + 5.2133143449186902e-18) * fConst0) + -2.3962103902601498e-16) * fConst0) + -2.7106754246829498e-15) * fConst0);
		fConst133 = (((((((-5.2133143449186902e-18 - fConst79) * fConst0) + 2.3962103902601498e-16) * fConst0) + 2.7106754246829498e-15) * fConst0) + -3.9909588087196502e-14);
		fConst134 = ((((((fConst82 + 4.3161472913784098e-19) * fConst0) + -8.7518197241081298e-18) * fConst0) + -4.5177783329110998e-17) * fConst0);
		fConst135 = (((((((-4.3161472913784098e-19 - fConst82) * fConst0) + 8.7518197241081298e-18) * fConst0) + 4.5177783329110998e-17) * fConst0) + -3.1927670469757201e-16);
		fConst136 = (((((fConst85 + 4.6096453071921402e-19) * fConst0) + -9.3469434653474793e-18) * fConst0) + -4.8249872595490503e-17);
		fConst137 = (((((((7.3735451124077607e-21 - fConst87) * fConst0) + 1.5798742492556501e-19) * fConst0) + -9.2062610036254994e-19) * fConst0) + -1.6026413468999299e-18);
		fConst138 = (((((((6.9040684573106295e-21 - fConst89) * fConst0) + 1.4792830049210201e-19) * fConst0) + -8.6200945726830504e-19) * fConst0) + -1.5006005120785901e-18);
		fConst139 = (((((((fConst89 + -6.9040684573106295e-21) * fConst0) + -1.4792830049210201e-19) * fConst0) + 8.6200945726830504e-19) * fConst0) + 1.5006005120785901e-18);
		fConst140 = (((((-1.31947527765415e-21 - fConst92) * fConst0) + -2.3230598841997801e-20) * fConst0) + 7.9931737176634104e-20);
		fConst141 = (((((-1.2354637431218701e-21 - fConst94) * fConst0) + -2.17514970430691e-20) * fConst0) + 7.4842450539919503e-20);
		fConst142 = (((((fConst94 + 1.2354637431218701e-21) * fConst0) + 2.17514970430691e-20) * fConst0) + -7.4842450539919503e-20);
		fConst143 = (((fConst97 + -2.9128598939577901e-24) * fConst0) + -1.00165084181246e-23);
		fConst144 = (((fConst99 + -2.7273969044548599e-24) * fConst0) + -9.3787532004911707e-24);
		fConst145 = (((2.7273969044548599e-24 - fConst99) * fConst0) + 9.3787532004911707e-24);
		fConst146 = (((((fConst102 + -8.2603733231461502e-20) * fConst0) + 1.4543132417336101e-18) * fConst0) + 5.0039918650545698e-18);
		fConst147 = (((((fConst104 + -7.7344319505113703e-20) * fConst0) + 1.3617165184771699e-18) * fConst0) + 4.6853856414368699e-18);
		fConst148 = (((((7.7344319505113703e-20 - fConst104) * fConst0) + -1.3617165184771699e-18) * fConst0) + -4.6853856414368699e-18);
		fConst149 = (((-1.8220868272842299e-22 - fConst107) * fConst0) + 6.2656456913375e-22);
		fConst150 = (((-1.70607380831857e-22 - fConst109) * fConst0) + 5.8667094488178797e-22);
		fConst151 = (((fConst109 + 1.70607380831857e-22) * fConst0) + -5.8667094488178797e-22);
		fConst152 = ((((((fConst112 + -1.03189543577119e-18) * fConst0) + 4.7802275096954202e-17) * fConst0) + 5.4177589864380596e-16) * fConst0);
		fConst153 = (((((((1.03189543577119e-18 - fConst112) * fConst0) + -4.7802275096954202e-17) * fConst0) + -5.4177589864380596e-16) * fConst0) + 7.9819176174392894e-15);
		fConst154 = (((((fConst115 + -1.10206432540363e-18) * fConst0) + 5.1052829803547098e-17) * fConst0) + 5.7861665975158497e-16);
		fConst155 = (((((-6.3886770394469701e-21 - fConst117) * fConst0) + 7.2346740227649899e-20) * fConst0) + 2.1311720038562899e-19);
		fConst156 = (((((-5.9819073403061496e-21 - fConst119) * fConst0) + 6.7740393471582303e-20) * fConst0) + 1.99547940435982e-19);
		fConst157 = (((((fConst119 + 5.9819073403061496e-21) * fConst0) + -6.7740393471582303e-20) * fConst0) + -1.99547940435982e-19);
		fConst158 = ((((((2.7839098601865799e-18 - fConst2) * fConst0) + 1.27957634839892e-16) * fConst0) + -4.3425020303420898e-15) * fConst0);
		fConst159 = ((((((((fConst4 + -1.2633231515507101e-19) * fConst0) + 4.6964397151077401e-18) * fConst0) + 8.5221014999020503e-17) * fConst0) + -1.4128042788269299e-15) * fConst0);
		fConst160 = (((((((((1.2633231515507101e-19 - fConst4) * fConst0) + -4.6964397151077401e-18) * fConst0) + -8.5221014999020503e-17) * fConst0) + 1.4128042788269299e-15) * fConst0) + -3.9909588087196502e-15);
		fConst161 = (((((((fConst7 + -1.3492291258561499e-19) * fConst0) + 5.0157976157350603e-18) * fConst0) + 9.1016044018953801e-17) * fConst0) + -1.5088749697871601e-15);
		fConst162 = (((((((fConst9 + 2.60634218706888e-20) * fConst0) + -8.8419101327571306e-19) * fConst0) + -1.30182230144219e-17) * fConst0) + 1.27550644430799e-16);
		fConst163 = (((((((fConst11 + 2.4403953062442701e-20) * fConst0) + -8.2789420718699695e-19) * fConst0) + -1.21893473917808e-17) * fConst0) + 1.19429442350935e-16);
		fConst164 = (((((((-2.4403953062442701e-20 - fConst11) * fConst0) + 8.2789420718699695e-19) * fConst0) + 1.21893473917808e-17) * fConst0) + -1.19429442350935e-16);
		fConst165 = (((((3.33244336742956e-22 - fConst14) * fConst0) + -1.63229099203451e-21) * fConst0) + -5.32793000964073e-21);
		fConst166 = (((((3.1202653253085801e-22 - fConst16) * fConst0) + -1.5283623520922399e-21) * fConst0) + -4.9886985108995597e-21);
		fConst167 = (((((fConst16 + -3.1202653253085801e-22) * fConst0) + 1.5283623520922399e-21) * fConst0) + 4.9886985108995597e-21);
		fConst168 = ((((((2.6066571724593501e-18 - fConst19) * fConst0) + 1.1981051951300801e-16) * fConst0) + -4.0660131370244303e-15) * fConst0);
		fConst169 = (((((((fConst19 + -2.6066571724593501e-18) * fConst0) + -1.1981051951300801e-16) * fConst0) + 4.0660131370244303e-15) * fConst0) + -1.9954794043598201e-14);
		fConst170 = ((((((2.1580736456892001e-19 - fConst22) * fConst0) + 4.3759098620540603e-18) * fConst0) + -6.7766674993666405e-17) * fConst0);
		fConst171 = (((((((fConst22 + -2.1580736456892001e-19) * fConst0) + -4.3759098620540603e-18) * fConst0) + 6.7766674993666405e-17) * fConst0) + -1.5963835234878601e-16);
		fConst172 = (((((2.3048226535960701e-19 - fConst25) * fConst0) + 4.6734717326737396e-18) * fConst0) + -7.2374808893235794e-17);
		fConst173 = (((((((fConst27 + -1.10603176686116e-20) * fConst0) + 7.89937124627823e-20) * fConst0) + 4.6031305018127497e-19) * fConst0) + -2.4039620203499002e-18);
		fConst174 = (((((((fConst29 + -1.0356102685965901e-20) * fConst0) + 7.3964150246050895e-20) * fConst0) + 4.31004728634153e-19) * fConst0) + -2.2509007681178798e-18);
		fConst175 = (((((((1.0356102685965901e-20 - fConst29) * fConst0) + -7.3964150246050895e-20) * fConst0) + -4.31004728634153e-19) * fConst0) + 2.2509007681178798e-18);
		fConst176 = (((((fConst32 + 1.97921291648123e-21) * fConst0) + -1.16152994209989e-20) * fConst0) + -3.9965868588316998e-20);
		fConst177 = (((((fConst34 + 1.8531956146828e-21) * fConst0) + -1.08757485215345e-20) * fConst0) + -3.74212252699598e-20);
		fConst178 = (((((-1.8531956146828e-21 - fConst34) * fConst0) + 1.08757485215345e-20) * fConst0) + 3.74212252699598e-20);
		fConst179 = (((4.3692898409366801e-24 - fConst37) * fConst0) + -5.0082542090622801e-24);
		fConst180 = (((4.0910953566822896e-24 - fConst39) * fConst0) + -4.6893766002455802e-24);
		fConst181 = (((fConst39 + -4.0910953566822896e-24) * fConst0) + 4.6893766002455802e-24);
		fConst182 = (((((-4.1301866615730703e-20 - fConst42) * fConst0) + -7.2715662086680697e-19) * fConst0) + 7.5059877975818597e-18);
		fConst183 = (((((-3.86721597525569e-20 - fConst44) * fConst0) + -6.80858259238584e-19) * fConst0) + 7.0280784621553003e-18);
		fConst184 = (((((fConst44 + 3.86721597525569e-20) * fConst0) + 6.80858259238584e-19) * fConst0) + -7.0280784621553003e-18);
		fConst185 = (((fConst47 + -9.1104341364211697e-23) * fConst0) + -3.13282284566875e-22);
		fConst186 = (((fConst49 + -8.5303690415928501e-23) * fConst0) + -2.9333547244089399e-22);
		fConst187 = (((8.5303690415928501e-23 - fConst49) * fConst0) + 2.9333547244089399e-22);
		fConst188 = ((((((-5.1594771788559396e-19 - fConst52) * fConst0) + -2.3901137548477101e-17) * fConst0) + 8.1266384796570904e-16) * fConst0);
		fConst189 = (((((((fConst52 + 5.1594771788559396e-19) * fConst0) + 2.3901137548477101e-17) * fConst0) + -8.1266384796570904e-16) * fConst0) + 3.9909588087196502e-15);
		fConst190 = (((((-5.5103216270181403e-19 - fConst55) * fConst0) + -2.5526414901773499e-17) * fConst0) + 8.6792498962737701e-16);
		fConst191 = (((((fConst57 + -3.1943385197234802e-21) * fConst0) + -3.6173370113824998e-20) * fConst0) + 3.1967580057844399e-19);
		fConst192 = (((((fConst59 + -2.9909536701530801e-21) * fConst0) + -3.38701967357912e-20) * fConst0) + 2.9932191065397399e-19);
		fConst193 = (((((2.9909536701530801e-21 - fConst59) * fConst0) + 3.38701967357912e-20) * fConst0) + -2.9932191065397399e-19);
		fConst194 = (3.1158722755760299e-22 * fConst0);
		fConst195 = ((((((fConst194 + -2.7839098601865799e-18) * fConst0) + 1.27957634839892e-16) * fConst0) + -1.4475006767807001e-15) * fConst0);
		fConst196 = (4.6640040813802103e-24 * fConst0);
		fConst197 = ((((((((4.2110771718356903e-20 - fConst196) * fConst0) + -4.6964397151077401e-18) * fConst0) + 8.5221014999020503e-17) * fConst0) + -4.7093475960897503e-16) * fConst0);
		fConst198 = (((((((((fConst196 + -4.2110771718356903e-20) * fConst0) + 4.6964397151077401e-18) * fConst0) + -8.5221014999020503e-17) * fConst0) + 4.7093475960897503e-16) * fConst0) + -7.9819176174392902e-16);
		fConst199 = (4.9811563589140703e-24 * fConst0);
		fConst200 = (((((((4.4974304195205202e-20 - fConst199) * fConst0) + -5.0157976157350603e-18) * fConst0) + 9.1016044018953801e-17) * fConst0) + -5.0295832326238604e-16);
		fConst201 = (9.9569205751008895e-25 * fConst0);
		fConst202 = (((((((-8.6878072902295894e-21 - fConst201) * fConst0) + 8.8419101327571306e-19) * fConst0) + -1.30182230144219e-17) * fConst0) + 4.2516881476933003e-17);
		fConst203 = (9.3229593399821004e-25 * fConst0);
		fConst204 = (((((((-8.1346510208142203e-21 - fConst203) * fConst0) + 8.2789420718699695e-19) * fConst0) + -1.21893473917808e-17) * fConst0) + 3.9809814116978503e-17);
		fConst205 = (((((((fConst203 + 8.1346510208142203e-21) * fConst0) + -8.2789420718699695e-19) * fConst0) + 1.21893473917808e-17) * fConst0) + -3.9809814116978503e-17);
		fConst206 = (1.10662407182939e-24 * fConst0);
		fConst207 = (((((fConst206 + -1.1108144558098501e-22) * fConst0) + 1.63229099203451e-21) * fConst0) + -5.32793000964073e-21);
		fConst208 = (1.0361648612634699e-24 * fConst0);
		fConst209 = (((((fConst208 + -1.04008844176952e-22) * fConst0) + 1.5283623520922399e-21) * fConst0) + -4.9886985108995597e-21);
		fConst210 = (((((1.04008844176952e-22 - fConst208) * fConst0) + -1.5283623520922399e-21) * fConst0) + 4.9886985108995597e-21);
		fConst211 = (2.9174834040974102e-22 * fConst0);
		fConst212 = ((((((fConst211 + -2.6066571724593501e-18) * fConst0) + 1.1981051951300801e-16) * fConst0) + -1.35533771234148e-15) * fConst0);
		fConst213 = (((((((2.6066571724593501e-18 - fConst211) * fConst0) + -1.1981051951300801e-16) * fConst0) + 1.35533771234148e-15) * fConst0) + -3.9909588087196502e-15);
		fConst214 = (2.8109995179207301e-23 * fConst0);
		fConst215 = ((((((fConst214 + -2.1580736456892001e-19) * fConst0) + 4.3759098620540603e-18) * fConst0) + -2.2588891664555499e-17) * fConst0);
		fConst216 = (((((((2.1580736456892001e-19 - fConst214) * fConst0) + -4.3759098620540603e-18) * fConst0) + 2.2588891664555499e-17) * fConst0) + -3.1927670469757199e-17);
		fConst217 = (3.0021474851393402e-23 * fConst0);
		fConst218 = (((((fConst217 + -2.3048226535960701e-19) * fConst0) + 4.6734717326737396e-18) * fConst0) + -2.4124936297745301e-17);
		fConst219 = (4.7993514218213904e-25 * fConst0);
		fConst220 = (((((((3.6867725562038804e-21 - fConst219) * fConst0) + -7.89937124627823e-20) * fConst0) + 4.6031305018127497e-19) * fConst0) + -8.0132067344996602e-19);
		fConst221 = (4.4937747395331299e-25 * fConst0);
		fConst222 = (((((((3.45203422865532e-21 - fConst221) * fConst0) + -7.3964150246050895e-20) * fConst0) + 4.31004728634153e-19) * fConst0) + -7.5030025603929399e-19);
		fConst223 = (((((((fConst221 + -3.45203422865532e-21) * fConst0) + 7.3964150246050895e-20) * fConst0) + -4.31004728634153e-19) * fConst0) + 7.5030025603929399e-19);
		fConst224 = (1.1610116504435901e-25 * fConst0);
		fConst225 = (((((-6.5973763882707699e-22 - fConst224) * fConst0) + 1.16152994209989e-20) * fConst0) + -3.9965868588316998e-20);
		fConst226 = (1.08708956034044e-25 * fConst0);
		fConst227 = (((((-6.1773187156093297e-22 - fConst226) * fConst0) + 1.08757485215345e-20) * fConst0) + -3.74212252699598e-20);
		fConst228 = (((((fConst226 + 6.1773187156093297e-22) * fConst0) + -1.08757485215345e-20) * fConst0) + 3.74212252699598e-20);
		fConst229 = (8.2929403603113699e-26 * fConst0);
		fConst230 = (((fConst229 + -1.4564299469788901e-24) * fConst0) + 5.0082542090622801e-24);
		fConst231 = (7.7649254310031503e-26 * fConst0);
		fConst232 = (((fConst231 + -1.3636984522274299e-24) * fConst0) + 4.6893766002455802e-24);
		fConst233 = (((1.3636984522274299e-24 - fConst231) * fConst0) + -4.6893766002455802e-24);
		fConst234 = (7.2624984091577901e-24 * fConst0);
		fConst235 = (((((fConst234 + 4.1301866615730703e-20) * fConst0) + -7.2715662086680697e-19) * fConst0) + 2.5019959325272899e-18);
		fConst236 = (6.8000921434061693e-24 * fConst0);
		fConst237 = (((((fConst236 + 3.86721597525569e-20) * fConst0) + -6.80858259238584e-19) * fConst0) + 2.34269282071843e-18);
		fConst238 = (((((-3.86721597525569e-20 - fConst236) * fConst0) + 6.80858259238584e-19) * fConst0) + -2.34269282071843e-18);
		fConst239 = (5.1874988636841301e-24 * fConst0);
		fConst240 = (((9.1104341364211697e-23 - fConst239) * fConst0) + -3.13282284566875e-22);
		fConst241 = (4.8572086738615503e-24 * fConst0);
		fConst242 = (((8.5303690415928501e-23 - fConst241) * fConst0) + -2.9333547244089399e-22);
		fConst243 = (((fConst241 + -8.5303690415928501e-23) * fConst0) + 2.9333547244089399e-22);
		fConst244 = (5.8318086084143401e-23 * fConst0);
		fConst245 = ((((((fConst244 + 5.1594771788559396e-19) * fConst0) + -2.3901137548477101e-17) * fConst0) + 2.7088794932190298e-16) * fConst0);
		fConst246 = (((((((-5.1594771788559396e-19 - fConst244) * fConst0) + 2.3901137548477101e-17) * fConst0) + -2.7088794932190298e-16) * fConst0) + 7.9819176174392902e-16);
		fConst247 = (6.2283715937865103e-23 * fConst0);
		fConst248 = (((((fConst247 + 5.5103216270181403e-19) * fConst0) + -2.5526414901773499e-17) * fConst0) + 2.8930832987579199e-16);
		fConst249 = (6.9222867471881005e-23 * fConst0);
		fConst250 = (((((3.1943385197234802e-21 - fConst249) * fConst0) + -3.6173370113824998e-20) * fConst0) + 1.06558600192815e-19);
		fConst251 = (6.4815418981162002e-23 * fConst0);
		fConst252 = (((((2.9909536701530801e-21 - fConst251) * fConst0) + -3.38701967357912e-20) * fConst0) + 9.9773970217991206e-20);
		fConst253 = (((((fConst251 + -2.9909536701530801e-21) * fConst0) + 3.38701967357912e-20) * fConst0) + -9.9773970217991206e-20);
		fConst254 = ((((((fConst194 + 2.7839098601865799e-18) * fConst0) + 1.27957634839892e-16) * fConst0) + 1.4475006767807001e-15) * fConst0);
		fConst255 = ((((((((fConst196 + 4.2110771718356903e-20) * fConst0) + 4.6964397151077401e-18) * fConst0) + 8.5221014999020503e-17) * fConst0) + 4.7093475960897503e-16) * fConst0);
		fConst256 = (((((((((-4.2110771718356903e-20 - fConst196) * fConst0) + -4.6964397151077401e-18) * fConst0) + -8.5221014999020503e-17) * fConst0) + -4.7093475960897503e-16) * fConst0) + -7.9819176174392902e-16);
		fConst257 = (((((((fConst199 + 4.4974304195205202e-20) * fConst0) + 5.0157976157350603e-18) * fConst0) + 9.1016044018953801e-17) * fConst0) + 5.0295832326238604e-16);
		fConst258 = (((((((fConst201 + -8.6878072902295894e-21) * fConst0) + -8.8419101327571306e-19) * fConst0) + -1.30182230144219e-17) * fConst0) + -4.2516881476933003e-17);
		fConst259 = (((((((fConst203 + -8.1346510208142203e-21) * fConst0) + -8.2789420718699695e-19) * fConst0) + -1.21893473917808e-17) * fConst0) + -3.9809814116978503e-17);
		fConst260 = (((((((8.1346510208142203e-21 - fConst203) * fConst0) + 8.2789420718699695e-19) * fConst0) + 1.21893473917808e-17) * fConst0) + 3.9809814116978503e-17);
		fConst261 = (((((-1.1108144558098501e-22 - fConst206) * fConst0) + -1.63229099203451e-21) * fConst0) + -5.32793000964073e-21);
		fConst262 = (((((-1.04008844176952e-22 - fConst208) * fConst0) + -1.5283623520922399e-21) * fConst0) + -4.9886985108995597e-21);
		fConst263 = (((((fConst208 + 1.04008844176952e-22) * fConst0) + 1.5283623520922399e-21) * fConst0) + 4.9886985108995597e-21);
		fConst264 = ((((((fConst211 + 2.6066571724593501e-18) * fConst0) + 1.1981051951300801e-16) * fConst0) + 1.35533771234148e-15) * fConst0);
		fConst265 = (((((((-2.6066571724593501e-18 - fConst211) * fConst0) + -1.1981051951300801e-16) * fConst0) + -1.35533771234148e-15) * fConst0) + -3.9909588087196502e-15);
		fConst266 = ((((((fConst214 + 2.1580736456892001e-19) * fConst0) + 4.3759098620540603e-18) * fConst0) + 2.2588891664555499e-17) * fConst0);
		fConst267 = (((((((-2.1580736456892001e-19 - fConst214) * fConst0) + -4.3759098620540603e-18) * fConst0) + -2.2588891664555499e-17) * fConst0) + -3.1927670469757199e-17);
		fConst268 = (((((fConst217 + 2.3048226535960701e-19) * fConst0) + 4.6734717326737396e-18) * fConst0) + 2.4124936297745301e-17);
		fConst269 = (((((((fConst219 + 3.6867725562038804e-21) * fConst0) + 7.89937124627823e-20) * fConst0) + 4.6031305018127497e-19) * fConst0) + 8.0132067344996602e-19);
		fConst270 = (((((((fConst221 + 3.45203422865532e-21) * fConst0) + 7.3964150246050895e-20) * fConst0) + 4.31004728634153e-19) * fConst0) + 7.5030025603929399e-19);
		fConst271 = (((((((-3.45203422865532e-21 - fConst221) * fConst0) + -7.3964150246050895e-20) * fConst0) + -4.31004728634153e-19) * fConst0) + -7.5030025603929399e-19);
		fConst272 = (((((fConst224 + -6.5973763882707699e-22) * fConst0) + -1.16152994209989e-20) * fConst0) + -3.9965868588316998e-20);
		fConst273 = (((((fConst226 + -6.1773187156093297e-22) * fConst0) + -1.08757485215345e-20) * fConst0) + -3.74212252699598e-20);
		fConst274 = (((((6.1773187156093297e-22 - fConst226) * fConst0) + 1.08757485215345e-20) * fConst0) + 3.74212252699598e-20);
		fConst275 = (((-1.4564299469788901e-24 - fConst229) * fConst0) + -5.0082542090622801e-24);
		fConst276 = (((-1.3636984522274299e-24 - fConst231) * fConst0) + -4.6893766002455802e-24);
		fConst277 = (((fConst231 + 1.3636984522274299e-24) * fConst0) + 4.6893766002455802e-24);
		fConst278 = (((((fConst234 + -4.1301866615730703e-20) * fConst0) + -7.2715662086680697e-19) * fConst0) + -2.5019959325272899e-18);
		fConst279 = (((((fConst236 + -3.86721597525569e-20) * fConst0) + -6.80858259238584e-19) * fConst0) + -2.34269282071843e-18);
		fConst280 = (((((3.86721597525569e-20 - fConst236) * fConst0) + 6.80858259238584e-19) * fConst0) + 2.34269282071843e-18);
		fConst281 = (((-9.1104341364211697e-23 - fConst239) * fConst0) + -3.13282284566875e-22);
		fConst282 = (((-8.5303690415928501e-23 - fConst241) * fConst0) + -2.9333547244089399e-22);
		fConst283 = (((fConst241 + 8.5303690415928501e-23) * fConst0) + 2.9333547244089399e-22);
		fConst284 = ((((((fConst244 + -5.1594771788559396e-19) * fConst0) + -2.3901137548477101e-17) * fConst0) + -2.7088794932190298e-16) * fConst0);
		fConst285 = (((((((5.1594771788559396e-19 - fConst244) * fConst0) + 2.3901137548477101e-17) * fConst0) + 2.7088794932190298e-16) * fConst0) + 7.9819176174392902e-16);
		fConst286 = (((((fConst247 + -5.5103216270181403e-19) * fConst0) + -2.5526414901773499e-17) * fConst0) + -2.8930832987579199e-16);
		fConst287 = (((((-3.1943385197234802e-21 - fConst249) * fConst0) + -3.6173370113824998e-20) * fConst0) + -1.06558600192815e-19);
		fConst288 = (((((-2.9909536701530801e-21 - fConst251) * fConst0) + -3.38701967357912e-20) * fConst0) + -9.9773970217991206e-20);
		fConst289 = (((((fConst251 + 2.9909536701530801e-21) * fConst0) + 3.38701967357912e-20) * fConst0) + 9.9773970217991206e-20);
		fConst290 = (3.5568716158004302e-19 * fConst0);
		fConst291 = (((fConst290 + 1.44694505186984e-17) * fConst0) + 8.0654685165542999e-17);
		fConst292 = (5.6861553041707502e-21 * fConst0);
		fConst293 = (((((fConst292 + 9.9850500234941805e-19) * fConst0) + 4.8577832947095304e-15) * fConst0) + 3.2342528751382701e-14);
		fConst294 = ((-3.7907702027805199e-20 - fConst292) * fConst1);
		fConst295 = (((-1.44694505186984e-17 - fConst290) * fConst0) + -8.0654685165542999e-17);
		fConst296 = (4.9796202621205999e-20 * fConst0);
		fConst297 = (((fConst296 + 2.8536563205916898e-16) * fConst0) + 1.9002243825001901e-15);
		fConst298 = (7.9606174258390601e-22 * fConst0);
		fConst299 = ((((fConst298 + 4.5656036322288399e-18) * fConst0) + 3.0401977026299799e-17) * fConst0);
		fConst300 = (1.06706148474013e-18 * fConst0);
		fConst301 = (((-1.44694505186984e-17 - fConst300) * fConst0) + 8.0654685165542999e-17);
		fConst302 = (2.8430776520853803e-20 * fConst0);
		fConst303 = (((((-2.9955150070482499e-18 - fConst302) * fConst0) + -4.8577832947095304e-15) * fConst0) + 3.2342528751382701e-14);
		fConst304 = ((fConst302 + 1.1372310608341601e-19) * fConst1);
		fConst305 = (((fConst300 + 1.44694505186984e-17) * fConst0) + -8.0654685165542999e-17);
		fConst306 = (1.49388607863618e-19 * fConst0);
		fConst307 = (((-2.8536563205916898e-16 - fConst306) * fConst0) + 1.9002243825001901e-15);
		fConst308 = (3.98030871291953e-21 * fConst0);
		fConst309 = ((((-1.36968108966865e-17 - fConst308) * fConst0) + -3.0401977026299799e-17) * fConst0);
		fConst310 = (7.1137432316008604e-19 * fConst0);
		fConst311 = (((fConst310 + -2.89389010373967e-17) * fConst0) + -1.61309370331086e-16);
		fConst312 = (5.6861553041707498e-20 * fConst0);
		fConst313 = (((((fConst312 + 1.9970100046988399e-18) * fConst0) + -9.7155665894190608e-15) * fConst0) + -6.4685057502765503e-14);
		fConst314 = ((-7.5815404055610398e-20 - fConst312) * fConst1);
		fConst315 = (((2.89389010373967e-17 - fConst310) * fConst0) + 1.61309370331086e-16);
		fConst316 = (9.9592405242411997e-20 * fConst0);
		fConst317 = (((fConst316 + -5.7073126411833797e-16) * fConst0) + -3.8004487650003801e-15);
		fConst318 = (7.9606174258390601e-21 * fConst0);
		fConst319 = ((((fConst318 + 9.1312072644576798e-18) * fConst0) + -6.08039540525995e-17) * fConst0);
		fConst320 = (((fConst310 + 2.89389010373967e-17) * fConst0) + -1.61309370331086e-16);
		fConst321 = (((((1.9970100046988399e-18 - fConst312) * fConst0) + 9.7155665894190608e-15) * fConst0) + -6.4685057502765503e-14);
		fConst322 = ((fConst312 + -7.5815404055610398e-20) * fConst1);
		fConst323 = (((-2.89389010373967e-17 - fConst310) * fConst0) + 1.61309370331086e-16);
		fConst324 = (((fConst316 + 5.7073126411833797e-16) * fConst0) + -3.8004487650003801e-15);
		fConst325 = ((((9.1312072644576798e-18 - fConst318) * fConst0) + 6.08039540525995e-17) * fConst0);
		fConst326 = (((1.44694505186984e-17 - fConst300) * fConst0) + 8.0654685165542999e-17);
		fConst327 = (((((fConst302 + -2.9955150070482499e-18) * fConst0) + 4.8577832947095304e-15) * fConst0) + 3.2342528751382701e-14);
		fConst328 = ((1.1372310608341601e-19 - fConst302) * fConst1);
		fConst329 = (((fConst300 + -1.44694505186984e-17) * fConst0) + -8.0654685165542999e-17);
		fConst330 = (((2.8536563205916898e-16 - fConst306) * fConst0) + 1.9002243825001901e-15);
		fConst331 = ((((fConst308 + -1.36968108966865e-17) * fConst0) + 3.0401977026299799e-17) * fConst0);
		fConst332 = (((fConst290 + -1.44694505186984e-17) * fConst0) + 8.0654685165542999e-17);
		fConst333 = (((((9.9850500234941805e-19 - fConst292) * fConst0) + -4.8577832947095304e-15) * fConst0) + 3.2342528751382701e-14);
		fConst334 = ((fConst292 + -3.7907702027805199e-20) * fConst1);
		fConst335 = (((1.44694505186984e-17 - fConst290) * fConst0) + -8.0654685165542999e-17);
		fConst336 = (((fConst296 + -2.8536563205916898e-16) * fConst0) + 1.9002243825001901e-15);
		fConst337 = ((((4.5656036322288399e-18 - fConst298) * fConst0) + -3.0401977026299799e-17) * fConst0);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.5);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(0.5);
		fVslider3 = FAUSTFLOAT(0.5);
		fVslider4 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec1[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec3[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec4[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec5[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 6); l5 = (l5 + 1)) {
			fRec2[l5] = 0.0;
			
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
		ui_interface->openVerticalBox("Alembic Preamp");
		ui_interface->declare(&fVslider2, "name", "Bass");
		ui_interface->addVerticalSlider("Bass", &fVslider2, 0.5, 0.0, 1.0, 0.01);
		ui_interface->declare(&fVslider0, "name", "Input");
		ui_interface->addVerticalSlider("Input", &fVslider0, 0.5, 0.0, 1.0, 0.01);
		ui_interface->declare(&fVslider4, "name", "Middle");
		ui_interface->addVerticalSlider("Middle", &fVslider4, 0.5, 0.0, 1.0, 0.01);
		ui_interface->declare(&fVslider3, "name", "Treble");
		ui_interface->addVerticalSlider("Treble", &fVslider3, 0.5, 0.0, 1.0, 0.01);
		ui_interface->declare(&fVslider1, "name", "Volume");
		ui_interface->addVerticalSlider("Volume", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.004073836948085289 * (std::exp(double(fVslider0)) + -1.0));
		double fSlow1 = (0.004073836948085289 * (std::exp(double(fVslider1)) + -1.0));
		double fSlow2 = (0.004073836948085289 * (std::exp(double(fVslider2)) + -1.0));
		double fSlow3 = (0.0070000000000000062 * (1.0 - double(fVslider3)));
		double fSlow4 = (0.0070000000000000062 * double(fVslider4));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow0 + (0.99299999999999999 * fRec0[1]));
			fRec1[0] = (fSlow1 + (0.99299999999999999 * fRec1[1]));
			fRec3[0] = (fSlow2 + (0.99299999999999999 * fRec3[1]));
			fRec4[0] = (fSlow3 + (0.99299999999999999 * fRec4[1]));
			fRec5[0] = (fSlow4 + (0.99299999999999999 * fRec5[1]));
			double fTemp0 = (fConst254 + (((((fRec3[0] * (((fRec0[0] * (fConst255 + ((fConst256 * fRec0[0]) + 7.9819176174392902e-16))) + (fConst0 * (fConst257 + (fRec4[0] * (fConst258 + ((fRec0[0] * (fConst259 + (fConst260 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst261 + (fRec0[0] * (fConst262 + (fConst263 * fRec0[0])))))))))))) + 8.5246880154251696e-16)) + (fRec0[0] * (fConst264 + ((fConst265 * fRec0[0]) + 3.9909588087196502e-15)))) + (fRec5[0] * (((fRec0[0] * (fConst266 + ((fConst267 * fRec0[0]) + 3.1927670469757199e-17))) + (fConst0 * (fConst268 + ((fRec3[0] * (fConst269 + ((fRec0[0] * (fConst270 + (fConst271 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst272 + ((fRec0[0] * (fConst273 + (fConst274 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst275 + (fRec0[0] * (fConst276 + (fConst277 * fRec0[0]))))))))))))) + (fRec4[0] * (fConst278 + ((fRec0[0] * (fConst279 + (fConst280 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst281 + (fRec0[0] * (fConst282 + (fConst283 * fRec0[0]))))))))))))) + 3.4098752061700701e-17))) + (fRec4[0] * (((fRec0[0] * (fConst284 + ((fConst285 * fRec0[0]) + -7.9819176174392902e-16))) + (fConst0 * (fConst286 + (fRec4[0] * (fConst287 + (fRec0[0] * (fConst288 + (fConst289 * fRec0[0])))))))) + -8.5246880154251696e-16))) + 4.2623440077125801e-15));
			fRec2[0] = (double(input0[i]) - ((((((fRec2[1] * (fConst3 + (((((fRec3[0] * (((fRec0[0] * (fConst5 + ((fConst6 * fRec0[0]) + 3.9909588087196502e-15))) + (fConst0 * (fConst8 + (fRec4[0] * (fConst10 + ((fRec0[0] * (fConst12 + (fConst13 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst15 + (fRec0[0] * (fConst17 + (fConst18 * fRec0[0])))))))))))) + 4.2623440077125801e-15)) + (fRec0[0] * (fConst20 + ((fConst21 * fRec0[0]) + 1.9954794043598201e-14)))) + (fRec5[0] * (((fRec0[0] * (fConst23 + ((fConst24 * fRec0[0]) + 1.5963835234878601e-16))) + (fConst0 * (fConst26 + ((fRec3[0] * (fConst28 + ((fRec0[0] * (fConst30 + (fConst31 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst33 + ((fRec0[0] * (fConst35 + (fConst36 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst38 + (fRec0[0] * (fConst40 + (fConst41 * fRec0[0]))))))))))))) + (fRec4[0] * (fConst43 + ((fRec0[0] * (fConst45 + (fConst46 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst48 + (fRec0[0] * (fConst50 + (fConst51 * fRec0[0]))))))))))))) + 1.7049376030850299e-16))) + (fRec4[0] * (((fRec0[0] * (fConst53 + ((fConst54 * fRec0[0]) + -3.9909588087196502e-15))) + (fConst0 * (fConst56 + (fRec4[0] * (fConst58 + (fRec0[0] * (fConst60 + (fConst61 * fRec0[0])))))))) + -4.2623440077125801e-15))) + 2.13117200385629e-14))) + (fRec2[2] * (fConst63 + (((((fRec3[0] * (((fRec0[0] * (fConst65 + ((fConst66 * fRec0[0]) + 7.9819176174392894e-15))) + (fConst0 * (fConst68 + (fRec4[0] * (fConst70 + ((fRec0[0] * (fConst72 + (fConst73 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst75 + (fRec0[0] * (fConst77 + (fConst78 * fRec0[0])))))))))))) + 8.5246880154251602e-15)) + (fRec0[0] * (fConst80 + ((fConst81 * fRec0[0]) + 3.9909588087196502e-14)))) + (fRec5[0] * (((fRec0[0] * (fConst83 + ((fConst84 * fRec0[0]) + 3.1927670469757201e-16))) + (fConst0 * (fConst86 + ((fRec3[0] * (fConst88 + ((fRec0[0] * (fConst90 + (fConst91 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst93 + ((fRec0[0] * (fConst95 + (fConst96 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst98 + (fRec0[0] * (fConst100 + (fConst101 * fRec0[0]))))))))))))) + (fRec4[0] * (fConst103 + ((fRec0[0] * (fConst105 + (fConst106 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst108 + (fRec0[0] * (fConst110 + (fConst111 * fRec0[0]))))))))))))) + 3.4098752061700701e-16))) + (fRec4[0] * (((fRec0[0] * (fConst113 + ((fConst114 * fRec0[0]) + -7.9819176174392894e-15))) + (fConst0 * (fConst116 + (fRec4[0] * (fConst118 + (fRec0[0] * (fConst120 + (fConst121 * fRec0[0])))))))) + -8.5246880154251602e-15))) + 4.2623440077125799e-14)))) + (fRec2[3] * (fConst122 + (((((fRec3[0] * (((fRec0[0] * (fConst123 + ((fConst124 * fRec0[0]) + 7.9819176174392894e-15))) + (fConst0 * (fConst125 + (fRec4[0] * (fConst126 + ((fRec0[0] * (fConst127 + (fConst128 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst129 + (fRec0[0] * (fConst130 + (fConst131 * fRec0[0])))))))))))) + 8.5246880154251602e-15)) + (fRec0[0] * (fConst132 + ((fConst133 * fRec0[0]) + 3.9909588087196502e-14)))) + (fRec5[0] * (((fRec0[0] * (fConst134 + ((fConst135 * fRec0[0]) + 3.1927670469757201e-16))) + (fConst0 * (fConst136 + ((fRec3[0] * (fConst137 + ((fRec0[0] * (fConst138 + (fConst139 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst140 + ((fRec0[0] * (fConst141 + (fConst142 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst143 + (fRec0[0] * (fConst144 + (fConst145 * fRec0[0]))))))))))))) + (fRec4[0] * (fConst146 + ((fRec0[0] * (fConst147 + (fConst148 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst149 + (fRec0[0] * (fConst150 + (fConst151 * fRec0[0]))))))))))))) + 3.4098752061700701e-16))) + (fRec4[0] * (((fRec0[0] * (fConst152 + ((fConst153 * fRec0[0]) + -7.9819176174392894e-15))) + (fConst0 * (fConst154 + (fRec4[0] * (fConst155 + (fRec0[0] * (fConst156 + (fConst157 * fRec0[0])))))))) + -8.5246880154251602e-15))) + 4.2623440077125799e-14)))) + (fRec2[4] * (fConst158 + (((((fRec3[0] * (((fRec0[0] * (fConst159 + ((fConst160 * fRec0[0]) + 3.9909588087196502e-15))) + (fConst0 * (fConst161 + (fRec4[0] * (fConst162 + ((fRec0[0] * (fConst163 + (fConst164 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst165 + (fRec0[0] * (fConst166 + (fConst167 * fRec0[0])))))))))))) + 4.2623440077125801e-15)) + (fRec0[0] * (fConst168 + ((fConst169 * fRec0[0]) + 1.9954794043598201e-14)))) + (fRec5[0] * (((fRec0[0] * (fConst170 + ((fConst171 * fRec0[0]) + 1.5963835234878601e-16))) + (fConst0 * (fConst172 + ((fRec3[0] * (fConst173 + ((fRec0[0] * (fConst174 + (fConst175 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst176 + ((fRec0[0] * (fConst177 + (fConst178 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst179 + (fRec0[0] * (fConst180 + (fConst181 * fRec0[0]))))))))))))) + (fRec4[0] * (fConst182 + ((fRec0[0] * (fConst183 + (fConst184 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst185 + (fRec0[0] * (fConst186 + (fConst187 * fRec0[0]))))))))))))) + 1.7049376030850299e-16))) + (fRec4[0] * (((fRec0[0] * (fConst188 + ((fConst189 * fRec0[0]) + -3.9909588087196502e-15))) + (fConst0 * (fConst190 + (fRec4[0] * (fConst191 + (fRec0[0] * (fConst192 + (fConst193 * fRec0[0])))))))) + -4.2623440077125801e-15))) + 2.13117200385629e-14)))) + (fRec2[5] * (fConst195 + (((((fRec3[0] * (((fRec0[0] * (fConst197 + ((fConst198 * fRec0[0]) + 7.9819176174392902e-16))) + (fConst0 * (fConst200 + (fRec4[0] * (fConst202 + ((fRec0[0] * (fConst204 + (fConst205 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst207 + (fRec0[0] * (fConst209 + (fConst210 * fRec0[0])))))))))))) + 8.5246880154251696e-16)) + (fRec0[0] * (fConst212 + ((fConst213 * fRec0[0]) + 3.9909588087196502e-15)))) + (fRec5[0] * (((fRec0[0] * (fConst215 + ((fConst216 * fRec0[0]) + 3.1927670469757199e-17))) + (fConst0 * (fConst218 + ((fRec3[0] * (fConst220 + ((fRec0[0] * (fConst222 + (fConst223 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst225 + ((fRec0[0] * (fConst227 + (fConst228 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst230 + (fRec0[0] * (fConst232 + (fConst233 * fRec0[0]))))))))))))) + (fRec4[0] * (fConst235 + ((fRec0[0] * (fConst237 + (fConst238 * fRec0[0]))) + (fConst0 * (fRec4[0] * (fConst240 + (fRec0[0] * (fConst242 + (fConst243 * fRec0[0]))))))))))))) + 3.4098752061700701e-17))) + (fRec4[0] * (((fRec0[0] * (fConst245 + ((fConst246 * fRec0[0]) + -7.9819176174392902e-16))) + (fConst0 * (fConst248 + (fRec4[0] * (fConst250 + (fRec0[0] * (fConst252 + (fConst253 * fRec0[0])))))))) + -8.5246880154251696e-16))) + 4.2623440077125801e-15)))) / fTemp0));
			output0[i] = FAUSTFLOAT((fConst1 * (((fRec0[0] * fRec1[0]) * ((((((fRec2[0] * ((fConst291 + ((fRec3[0] * (fConst293 + (fConst294 * fRec4[0]))) + (fConst295 * fRec4[0]))) + (fRec5[0] * (fConst297 + (fConst299 * fRec3[0]))))) + (fRec2[1] * ((fConst301 + ((fRec3[0] * (fConst303 + (fConst304 * fRec4[0]))) + (fConst305 * fRec4[0]))) + (fRec5[0] * (fConst307 + (fConst309 * fRec3[0])))))) + (fRec2[2] * ((fConst311 + ((fRec3[0] * (fConst313 + (fConst314 * fRec4[0]))) + (fConst315 * fRec4[0]))) + (fRec5[0] * (fConst317 + (fConst319 * fRec3[0])))))) + (fRec2[3] * ((fConst320 + ((fRec3[0] * (fConst321 + (fConst322 * fRec4[0]))) + (fConst323 * fRec4[0]))) + (fRec5[0] * (fConst324 + (fConst325 * fRec3[0])))))) + (fRec2[4] * ((fConst326 + ((fRec3[0] * (fConst327 + (fConst328 * fRec4[0]))) + (fConst329 * fRec4[0]))) + (fRec5[0] * (fConst330 + (fConst331 * fRec3[0])))))) + (fRec2[5] * ((fConst332 + ((fRec3[0] * (fConst333 + (fConst334 * fRec4[0]))) + (fConst335 * fRec4[0]))) + (fRec5[0] * (fConst336 + (fConst337 * fRec3[0]))))))) / fTemp0)));
			fRec0[1] = fRec0[0];
			fRec1[1] = fRec1[0];
			fRec3[1] = fRec3[0];
			fRec4[1] = fRec4[0];
			fRec5[1] = fRec5[0];
			for (int j0 = 5; (j0 > 0); j0 = (j0 - 1)) {
				fRec2[j0] = fRec2[(j0 - 1)];
				
			}
			
		}
		
	}

	
};

#endif
