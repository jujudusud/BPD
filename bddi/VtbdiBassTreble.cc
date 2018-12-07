/* ------------------------------------------------------------
name: "VTBassDI-bt"
Code generated with Faust 2.5.23 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */

#ifndef  __VtbdiBassTreble_H__
#define  __VtbdiBassTreble_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <cmath>
#include <math.h>


#ifndef FAUSTCLASS 
#define FAUSTCLASS VtbdiBassTreble
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class VtbdiBassTreble : public dsp {
	
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
	FAUSTFLOAT fVslider1;
	double fRec2[2];
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
	double fRec0[8];
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
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.0");
		m->declare("category", "External");
		m->declare("filename", "VtbdiBassTreble");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("id", "VTBassDI-bt");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "VTBassDI-bt");
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
		fConst1 = (1.2875540436976499e-28 * fConst0);
		fConst2 = (((((((((-3.4902257712779799e-24 - fConst1) * fConst0) + -1.0759892757660599e-20) * fConst0) + 2.6329161246721199e-17) * fConst0) + 2.9733761080142798e-14) * fConst0) + 7.9105888007802e-12);
		fConst3 = (3.8439416361118797e-33 * fConst0);
		fConst4 = (((((((((((-2.01197668400901e-28 - fConst3) * fConst0) + -2.0551448111454501e-25) * fConst0) + 2.5604994651477998e-21) * fConst0) + -5.5741491102609101e-18) * fConst0) + -5.3078836635249302e-15) * fConst0) + 9.9694195273822293e-15);
		fConst5 = ((((((fConst0 * ((fConst0 * ((fConst0 * (fConst3 + 1.9827674010598299e-28)) + 2.3723891283018901e-24)) + 3.4799668575243804e-21)) + -1.3830640484771401e-18) * fConst0) + -8.0184949009759797e-16) * fConst0) + -9.9694195273822293e-15);
		fConst6 = (3.78154612504858e-33 * fConst0);
		fConst7 = ((((fConst0 * ((fConst0 * ((fConst0 * (fConst6 + 1.38197787196536e-28)) + 7.9392171647806903e-25)) + 1.4841233988606001e-21)) + -4.2436886763501899e-18) * fConst0) + -5.67896298910978e-19);
		fConst8 = (((((((((-1.38197787196536e-28 - fConst6) * fConst0) + -7.4277121698048696e-25) * fConst0) + -6.9962186308502003e-22) * fConst0) + 4.5821513950604495e-19) * fConst0) + 5.67896298910978e-19);
		fConst9 = (((((((((-1.4107130248912601e-28 - fConst6) * fConst0) + 1.37407378540944e-24) * fConst0) + 4.0420356090642502e-21) * fConst0) + 4.63713282723472e-19) * fConst0) + 1.1414715608110701e-16);
		fConst10 = ((((((((fConst0 * (fConst6 + 1.4107130248912601e-28)) + -1.4252242849070199e-24) * fConst0) + -4.8446756198389699e-21) * fConst0) + 3.32725749029414e-18) * fConst0) + -5.67896298910978e-19);
		fConst11 = (1.2666542485958199e-28 * fConst0);
		fConst12 = (((((((((-3.2177311003305701e-24 - fConst11) * fConst0) + -7.36054847217644e-21) * fConst0) + 1.22318904829528e-17) * fConst0) + 6.7949129528753802e-14) * fConst0) + 9.9694195273822302e-14);
		fConst13 = ((((((fConst0 * ((fConst0 * (fConst11 + 3.2177311003305701e-24)) + 7.2715078639727898e-21)) + -8.0924867441653296e-18) * fConst0) + -7.4761973045069706e-15) * fConst0) + -9.9694195273822302e-14);
		fConst14 = (2.3175972786557699e-28 * fConst0);
		fConst15 = ((((((((fConst0 * (fConst14 + 1.1634085904259901e-24)) + -3.2279678272981899e-20) * fConst0) + -7.8987483740163594e-17) * fConst0) + 9.9112536933809194e-15) * fConst0) + 1.42390598414044e-11);
		fConst16 = (1.1531824908335599e-32 * fConst0);
		fConst17 = ((((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst16 + 3.6215580312162099e-28)) + 6.8504827038181704e-26)) + 7.6814983954433897e-21)) + 1.6722447330782699e-17)) + -1.7692945545083101e-15) * fConst0) + 1.7944955149287999e-14);
		fConst18 = (((((((((((-3.5689813219076898e-28 - fConst16) * fConst0) + -7.9079637610063101e-25) * fConst0) + 1.04399005725732e-20) * fConst0) + 4.1491921454314301e-18) * fConst0) + -2.6728316336586601e-16) * fConst0) + -1.7944955149287999e-14);
		fConst19 = (1.13446383751457e-32 * fConst0);
		fConst20 = (((((((((-2.48756016953765e-28 - fConst19) * fConst0) + -2.6464057215935602e-25) * fConst0) + 4.4523701965818099e-21) * fConst0) + 1.2731066029050601e-17) * fConst0) + -1.89298766303659e-19);
		fConst21 = ((((((fConst0 * ((fConst0 * (fConst19 + 2.48756016953765e-28)) + 2.4759040566016201e-25)) + -2.0988655892550601e-21) * fConst0) + -1.3746454185181401e-18) * fConst0) + 1.89298766303659e-19);
		fConst22 = ((((((((fConst0 * (fConst19 + 2.5392834448042801e-28)) + -4.5802459513647897e-25) * fConst0) + 1.21261068271927e-20) * fConst0) + -1.39113984817042e-18) * fConst0) + 3.8049052027035598e-17);
		fConst23 = (((((((((-2.5392834448042801e-28 - fConst19) * fConst0) + 4.7507476163567303e-25) * fConst0) + -1.45340268595169e-20) * fConst0) + -9.9817724708824097e-18) * fConst0) + -1.89298766303659e-19);
		fConst24 = (2.27997764747247e-28 * fConst0);
		fConst25 = ((((((((fConst0 * (fConst24 + 1.07257703344352e-24)) + -2.2081645416529301e-20) * fConst0) + -3.6695671448858498e-17) * fConst0) + 2.26497098429179e-14) * fConst0) + 1.7944955149288001e-13);
		fConst26 = (((((((((-1.07257703344352e-24 - fConst24) * fConst0) + 2.1814523591918401e-20) * fConst0) + 2.4277460232495999e-17) * fConst0) + -2.4920657681689902e-15) * fConst0) + -1.7944955149288001e-13);
		fConst27 = (((((((((5.8170429521299604e-24 - fConst1) * fConst0) + 3.2279678272981899e-20) * fConst0) + -7.8987483740163594e-17) * fConst0) + -4.9556268466904602e-14) * fConst0) + 7.9105888007802e-12);
		fConst28 = (1.92197081805594e-32 * fConst0);
		fConst29 = (((((((((((-2.01197668400901e-28 - fConst28) * fConst0) + 3.42524135190908e-25) * fConst0) + -7.6814983954433897e-21) * fConst0) + 1.6722447330782699e-17) * fConst0) + 8.8464727725415496e-15) * fConst0) + 9.9694195273822293e-15);
		fConst30 = ((((((((((fConst0 * (fConst28 + 1.9827674010598299e-28)) + -3.9539818805031598e-24) * fConst0) + -1.04399005725732e-20) * fConst0) + 4.1491921454314301e-18) * fConst0) + 1.3364158168293301e-15) * fConst0) + -9.9694195273822293e-15);
		fConst31 = (1.8907730625242901e-32 * fConst0);
		fConst32 = ((((((((fConst0 * (fConst31 + 1.38197787196536e-28)) + -1.3232028607967801e-24) * fConst0) + -4.4523701965818099e-21) * fConst0) + 1.2731066029050601e-17) * fConst0) + 9.4649383151829701e-19);
		fConst33 = (((((((((-1.38197787196536e-28 - fConst31) * fConst0) + 1.2379520283008101e-24) * fConst0) + 2.0988655892550601e-21) * fConst0) + -1.3746454185181401e-18) * fConst0) + -9.4649383151829701e-19);
		fConst34 = (((((((((-1.4107130248912601e-28 - fConst31) * fConst0) + -2.2901229756823901e-24) * fConst0) + -1.21261068271927e-20) * fConst0) + -1.39113984817042e-18) * fConst0) + -1.90245260135178e-16);
		fConst35 = ((((fConst0 * ((fConst0 * ((fConst0 * (fConst31 + 1.4107130248912601e-28)) + 2.3753738081783601e-24)) + 1.45340268595169e-20)) + -9.9817724708824097e-18) * fConst0) + 9.4649383151829701e-19);
		fConst36 = (((((((((5.3628851672176197e-24 - fConst11) * fConst0) + 2.2081645416529301e-20) * fConst0) + -3.6695671448858498e-17) * fConst0) + -1.1324854921458999e-13) * fConst0) + 9.9694195273822302e-14);
		fConst37 = (((((((((fConst11 + -5.3628851672176197e-24) * fConst0) + -2.1814523591918401e-20) * fConst0) + 2.4277460232495999e-17) * fConst0) + 1.2460328840845e-14) * fConst0) + -9.9694195273822302e-14);
		fConst38 = (((((((((-5.8170429521299604e-24 - fConst1) * fConst0) + 3.2279678272981899e-20) * fConst0) + 7.8987483740163594e-17) * fConst0) + -4.9556268466904602e-14) * fConst0) + -7.9105888007802e-12);
		fConst39 = (((((((((((fConst28 + -2.01197668400901e-28) * fConst0) + -3.42524135190908e-25) * fConst0) + -7.6814983954433897e-21) * fConst0) + -1.6722447330782699e-17) * fConst0) + 8.8464727725415496e-15) * fConst0) + -9.9694195273822293e-15);
		fConst40 = (((((((((((1.9827674010598299e-28 - fConst28) * fConst0) + 3.9539818805031598e-24) * fConst0) + -1.04399005725732e-20) * fConst0) + -4.1491921454314301e-18) * fConst0) + 1.3364158168293301e-15) * fConst0) + 9.9694195273822293e-15);
		fConst41 = (((((((((1.38197787196536e-28 - fConst31) * fConst0) + 1.3232028607967801e-24) * fConst0) + -4.4523701965818099e-21) * fConst0) + -1.2731066029050601e-17) * fConst0) + 9.4649383151829701e-19);
		fConst42 = (((((((((fConst31 + -1.38197787196536e-28) * fConst0) + -1.2379520283008101e-24) * fConst0) + 2.0988655892550601e-21) * fConst0) + 1.3746454185181401e-18) * fConst0) + -9.4649383151829701e-19);
		fConst43 = (((((((((fConst31 + -1.4107130248912601e-28) * fConst0) + 2.2901229756823901e-24) * fConst0) + -1.21261068271927e-20) * fConst0) + 1.39113984817042e-18) * fConst0) + -1.90245260135178e-16);
		fConst44 = (((((((((1.4107130248912601e-28 - fConst31) * fConst0) + -2.3753738081783601e-24) * fConst0) + 1.45340268595169e-20) * fConst0) + 9.9817724708824097e-18) * fConst0) + 9.4649383151829701e-19);
		fConst45 = (((((((((-5.3628851672176197e-24 - fConst11) * fConst0) + 2.2081645416529301e-20) * fConst0) + 3.6695671448858498e-17) * fConst0) + -1.1324854921458999e-13) * fConst0) + -9.9694195273822302e-14);
		fConst46 = ((((((((fConst0 * (fConst11 + 5.3628851672176197e-24)) + -2.1814523591918401e-20) * fConst0) + -2.4277460232495999e-17) * fConst0) + 1.2460328840845e-14) * fConst0) + 9.9694195273822302e-14);
		fConst47 = (((((((((fConst14 + -1.1634085904259901e-24) * fConst0) + -3.2279678272981899e-20) * fConst0) + 7.8987483740163594e-17) * fConst0) + 9.9112536933809194e-15) * fConst0) + -1.42390598414044e-11);
		fConst48 = (((((((((((3.6215580312162099e-28 - fConst16) * fConst0) + -6.8504827038181704e-26) * fConst0) + 7.6814983954433897e-21) * fConst0) + -1.6722447330782699e-17) * fConst0) + -1.7692945545083101e-15) * fConst0) + -1.7944955149287999e-14);
		fConst49 = (((((((((((fConst16 + -3.5689813219076898e-28) * fConst0) + 7.9079637610063101e-25) * fConst0) + 1.04399005725732e-20) * fConst0) + -4.1491921454314301e-18) * fConst0) + -2.6728316336586601e-16) * fConst0) + 1.7944955149287999e-14);
		fConst50 = (((((((((fConst19 + -2.48756016953765e-28) * fConst0) + 2.6464057215935602e-25) * fConst0) + 4.4523701965818099e-21) * fConst0) + -1.2731066029050601e-17) * fConst0) + -1.89298766303659e-19);
		fConst51 = (((((((((2.48756016953765e-28 - fConst19) * fConst0) + -2.4759040566016201e-25) * fConst0) + -2.0988655892550601e-21) * fConst0) + 1.3746454185181401e-18) * fConst0) + 1.89298766303659e-19);
		fConst52 = (((((((((2.5392834448042801e-28 - fConst19) * fConst0) + 4.5802459513647897e-25) * fConst0) + 1.21261068271927e-20) * fConst0) + 1.39113984817042e-18) * fConst0) + 3.8049052027035598e-17);
		fConst53 = (((((((((fConst19 + -2.5392834448042801e-28) * fConst0) + -4.7507476163567303e-25) * fConst0) + -1.45340268595169e-20) * fConst0) + 9.9817724708824097e-18) * fConst0) + -1.89298766303659e-19);
		fConst54 = (((((((((fConst24 + -1.07257703344352e-24) * fConst0) + -2.2081645416529301e-20) * fConst0) + 3.6695671448858498e-17) * fConst0) + 2.26497098429179e-14) * fConst0) + -1.7944955149288001e-13);
		fConst55 = (((((((((1.07257703344352e-24 - fConst24) * fConst0) + 2.1814523591918401e-20) * fConst0) + -2.4277460232495999e-17) * fConst0) + -2.4920657681689902e-15) * fConst0) + 1.7944955149288001e-13);
		fConst56 = (((((((((3.4902257712779799e-24 - fConst1) * fConst0) + -1.0759892757660599e-20) * fConst0) + -2.6329161246721199e-17) * fConst0) + 2.9733761080142798e-14) * fConst0) + -7.9105888007802e-12);
		fConst57 = (((((((((((fConst3 + -2.01197668400901e-28) * fConst0) + 2.0551448111454501e-25) * fConst0) + 2.5604994651477998e-21) * fConst0) + 5.5741491102609101e-18) * fConst0) + -5.3078836635249302e-15) * fConst0) + -9.9694195273822293e-15);
		fConst58 = (((((((((((1.9827674010598299e-28 - fConst3) * fConst0) + -2.3723891283018901e-24) * fConst0) + 3.4799668575243804e-21) * fConst0) + 1.3830640484771401e-18) * fConst0) + -8.0184949009759797e-16) * fConst0) + 9.9694195273822293e-15);
		fConst59 = (((((((((1.38197787196536e-28 - fConst6) * fConst0) + -7.9392171647806903e-25) * fConst0) + 1.4841233988606001e-21) * fConst0) + 4.2436886763501899e-18) * fConst0) + -5.67896298910978e-19);
		fConst60 = (((((((((fConst6 + -1.38197787196536e-28) * fConst0) + 7.4277121698048696e-25) * fConst0) + -6.9962186308502003e-22) * fConst0) + -4.5821513950604495e-19) * fConst0) + 5.67896298910978e-19);
		fConst61 = (((((((((fConst6 + -1.4107130248912601e-28) * fConst0) + -1.37407378540944e-24) * fConst0) + 4.0420356090642502e-21) * fConst0) + -4.63713282723472e-19) * fConst0) + 1.1414715608110701e-16);
		fConst62 = (((((((((1.4107130248912601e-28 - fConst6) * fConst0) + 1.4252242849070199e-24) * fConst0) + -4.8446756198389699e-21) * fConst0) + -3.32725749029414e-18) * fConst0) + -5.67896298910978e-19);
		fConst63 = (((((((((3.2177311003305701e-24 - fConst11) * fConst0) + -7.36054847217644e-21) * fConst0) + -1.22318904829528e-17) * fConst0) + 6.7949129528753802e-14) * fConst0) + -9.9694195273822302e-14);
		fConst64 = (((((((((fConst11 + -3.2177311003305701e-24) * fConst0) + 7.2715078639727898e-21) * fConst0) + 8.0924867441653296e-18) * fConst0) + -7.4761973045069706e-15) * fConst0) + 9.9694195273822302e-14);
		fConst65 = (2.5751080873953e-29 * fConst0);
		fConst66 = (((((((((fConst65 + -1.1634085904259901e-24) * fConst0) + 1.0759892757660599e-20) * fConst0) + -2.6329161246721199e-17) * fConst0) + 9.9112536933809194e-15) * fConst0) + -1.58211776015604e-12);
		fConst67 = (5.4913451944455496e-34 * fConst0);
		fConst68 = (((((((((((4.0239533680180098e-29 - fConst67) * fConst0) + -6.8504827038181704e-26) * fConst0) + -2.5604994651477998e-21) * fConst0) + 5.5741491102609101e-18) * fConst0) + -1.7692945545083101e-15) * fConst0) + -1.99388390547645e-15);
		fConst69 = (((((((((((fConst67 + -3.9655348021196598e-29) * fConst0) + 7.9079637610063101e-25) * fConst0) + -3.4799668575243804e-21) * fConst0) + 1.3830640484771401e-18) * fConst0) + -2.6728316336586601e-16) * fConst0) + 1.99388390547645e-15);
		fConst70 = (5.4022087500694001e-34 * fConst0);
		fConst71 = (((((((((fConst70 + -2.76395574393073e-29) * fConst0) + 2.6464057215935602e-25) * fConst0) + -1.4841233988606001e-21) * fConst0) + 4.2436886763501899e-18) * fConst0) + -1.89298766303659e-19);
		fConst72 = (((((((((2.76395574393073e-29 - fConst70) * fConst0) + -2.4759040566016201e-25) * fConst0) + 6.9962186308502003e-22) * fConst0) + -4.5821513950604495e-19) * fConst0) + 1.89298766303659e-19);
		fConst73 = (((((((((2.8214260497825298e-29 - fConst70) * fConst0) + 4.5802459513647897e-25) * fConst0) + -4.0420356090642502e-21) * fConst0) + -4.63713282723472e-19) * fConst0) + 3.8049052027035598e-17);
		fConst74 = (((((((((fConst70 + -2.8214260497825298e-29) * fConst0) + -4.7507476163567303e-25) * fConst0) + 4.8446756198389699e-21) * fConst0) + -3.32725749029414e-18) * fConst0) + -1.89298766303659e-19);
		fConst75 = (2.5333084971916403e-29 * fConst0);
		fConst76 = (((((((((fConst75 + -1.07257703344352e-24) * fConst0) + 7.36054847217644e-21) * fConst0) + -1.22318904829528e-17) * fConst0) + 2.26497098429179e-14) * fConst0) + -1.99388390547645e-14);
		fConst77 = (((((((((1.07257703344352e-24 - fConst75) * fConst0) + -7.2715078639727898e-21) * fConst0) + 8.0924867441653296e-18) * fConst0) + -2.4920657681689902e-15) * fConst0) + 1.99388390547645e-14);
		fConst78 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst65 + 1.1634085904259901e-24)) + 1.0759892757660599e-20)) + 2.6329161246721199e-17)) + 9.9112536933809194e-15)) + 1.58211776015604e-12);
		fConst79 = ((((((((fConst0 * ((fConst0 * (fConst67 + 4.0239533680180098e-29)) + 6.8504827038181704e-26)) + -2.5604994651477998e-21) * fConst0) + -5.5741491102609101e-18) * fConst0) + -1.7692945545083101e-15) * fConst0) + 1.99388390547645e-15);
		fConst80 = (((((((((((-3.9655348021196598e-29 - fConst67) * fConst0) + -7.9079637610063101e-25) * fConst0) + -3.4799668575243804e-21) * fConst0) + -1.3830640484771401e-18) * fConst0) + -2.6728316336586601e-16) * fConst0) + -1.99388390547645e-15);
		fConst81 = (((((((((-2.76395574393073e-29 - fConst70) * fConst0) + -2.6464057215935602e-25) * fConst0) + -1.4841233988606001e-21) * fConst0) + -4.2436886763501899e-18) * fConst0) + -1.89298766303659e-19);
		fConst82 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst70 + 2.76395574393073e-29)) + 2.4759040566016201e-25)) + 6.9962186308502003e-22)) + 4.5821513950604495e-19)) + 1.89298766303659e-19);
		fConst83 = ((((((((fConst0 * (fConst70 + 2.8214260497825298e-29)) + -4.5802459513647897e-25) * fConst0) + -4.0420356090642502e-21) * fConst0) + 4.63713282723472e-19) * fConst0) + 3.8049052027035598e-17);
		fConst84 = (((((((((-2.8214260497825298e-29 - fConst70) * fConst0) + 4.7507476163567303e-25) * fConst0) + 4.8446756198389699e-21) * fConst0) + 3.32725749029414e-18) * fConst0) + -1.89298766303659e-19);
		fConst85 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst75 + 1.07257703344352e-24)) + 7.36054847217644e-21)) + 1.22318904829528e-17)) + 2.26497098429179e-14)) + 1.99388390547645e-14);
		fConst86 = (((((((((-1.07257703344352e-24 - fConst75) * fConst0) + -7.2715078639727898e-21) * fConst0) + -8.0924867441653296e-18) * fConst0) + -2.4920657681689902e-15) * fConst0) + -1.99388390547645e-14);
		fConst87 = (2.2836824858962499e-25 * fConst0);
		fConst88 = (((((((-3.7721800818704198e-21 - fConst87) * fConst0) + -2.1321568057089601e-17) * fConst0) + -2.4683983843134101e-14) * fConst0) + -1.07554045808185e-12);
		fConst89 = (1.3542492249443999e-29 * fConst0);
		fConst90 = (((((((-1.3957307247733101e-24 - fConst89) * fConst0) + -1.00255575093992e-20) * fConst0) + -1.1576575301553199e-17) * fConst0) + -2.2196895007317699e-15);
		fConst91 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst89 + 6.43724911681198e-25)) + 3.9561926643071399e-21)) + 4.6190394202965701e-18)) + 2.01789954611979e-16);
		fConst92 = (2.2508920883310999e-30 * fConst0);
		fConst93 = ((((fConst0 * (fConst92 + 8.8219639362569299e-26)) + -2.06393642882301e-22) * fConst0) + -3.4073350684949499e-18);
		fConst94 = (((((-1.05271852152956e-25 - fConst92) * fConst0) + -5.7820204555647001e-22) * fConst0) + -3.7859278538832802e-19);
		fConst95 = (((((-8.1624028160066996e-25 - fConst92) * fConst0) + -5.3244212619132801e-21) * fConst0) + -3.7859278538832802e-19);
		fConst96 = ((fConst0 * ((fConst0 * (fConst92 + 8.3329249439105692e-25)) + 6.1271576022567097e-21)) + 4.1645206392716099e-18);
		fConst97 = (1.6678614310161301e-25 * fConst0);
		fConst98 = (((((-7.48973295084982e-22 - fConst97) * fConst0) + 9.3990315663912601e-19) * fConst0) + 1.8161095915078101e-14);
		fConst99 = ((fConst0 * ((fConst0 * (fConst97 + 8.3810986194382299e-22)) + 3.2028370396890902e-18)) + 2.01789954611979e-15);
		fConst100 = (6.8510474576887603e-25 * fConst0);
		fConst101 = ((((((fConst0 * (fConst100 + 3.7721800818704198e-21)) + -2.1321568057089601e-17) * fConst0) + -7.4051951529402199e-14) * fConst0) + -5.3777022904092303e-12);
		fConst102 = (6.7712461247220199e-29 * fConst0);
		fConst103 = ((((fConst0 * ((fConst0 * (fConst102 + 4.1871921743199203e-24)) + 1.00255575093992e-20)) + -1.1576575301553199e-17) * fConst0) + -6.6590685021953003e-15);
		fConst104 = (((((((-1.93117473504359e-24 - fConst102) * fConst0) + -3.9561926643071399e-21) * fConst0) + 4.6190394202965701e-18) * fConst0) + 6.0536986383593598e-16);
		fConst105 = (1.12544604416555e-29 * fConst0);
		fConst106 = (((((-2.6465891808770799e-25 - fConst105) * fConst0) + 2.06393642882301e-22) * fConst0) + -3.4073350684949499e-18);
		fConst107 = ((fConst0 * ((fConst0 * (fConst105 + 3.15815556458869e-25)) + 5.7820204555647001e-22)) + -3.7859278538832802e-19);
		fConst108 = ((fConst0 * ((fConst0 * (fConst105 + 2.4487208448020101e-24)) + 5.3244212619132801e-21)) + -3.7859278538832802e-19);
		fConst109 = (((((-2.4998774831731698e-24 - fConst105) * fConst0) + -6.1271576022567097e-21) * fConst0) + 4.1645206392716099e-18);
		fConst110 = (5.0035842930483996e-25 * fConst0);
		fConst111 = ((fConst0 * ((fConst0 * (fConst110 + 7.48973295084982e-22)) + 9.3990315663912601e-19)) + 5.4483287745234297e-14);
		fConst112 = (((((-8.3810986194382299e-22 - fConst110) * fConst0) + 3.2028370396890902e-18) * fConst0) + 6.0536986383593602e-15);
		fConst113 = (((((((1.13165402456113e-20 - fConst87) * fConst0) + 6.3964704171268905e-17) * fConst0) + -2.4683983843134101e-14) * fConst0) + -9.6798641227366196e-12);
		fConst114 = (1.2188243024499599e-28 * fConst0);
		fConst115 = (((((((-1.3957307247733101e-24 - fConst114) * fConst0) + 3.0076672528197697e-20) * fConst0) + 3.4729725904659701e-17) * fConst0) + -2.2196895007317699e-15);
		fConst116 = ((((((fConst0 * (fConst114 + 6.43724911681198e-25)) + -1.18685779929214e-20) * fConst0) + -1.38571182608897e-17) * fConst0) + 2.01789954611979e-16);
		fConst117 = (2.0258028794979901e-29 * fConst0);
		fConst118 = ((fConst0 * ((fConst0 * (fConst117 + 8.8219639362569299e-26)) + 6.1918092864690196e-22)) + 1.02220052054848e-17);
		fConst119 = (((((-1.05271852152956e-25 - fConst117) * fConst0) + 1.7346061366694098e-21) * fConst0) + 1.13577835616498e-18);
		fConst120 = (((((-8.1624028160066996e-25 - fConst117) * fConst0) + 1.59732637857398e-20) * fConst0) + 1.13577835616498e-18);
		fConst121 = ((((fConst0 * (fConst117 + 8.3329249439105692e-25)) + -1.83814728067701e-20) * fConst0) + -1.24935619178148e-17);
		fConst122 = (((((2.2469198852549501e-21 - fConst97) * fConst0) + -2.81970946991738e-18) * fConst0) + 1.8161095915078101e-14);
		fConst123 = (((((fConst97 + -2.51432958583147e-21) * fConst0) + -9.6085111190672694e-18) * fConst0) + 2.01789954611979e-15);
		fConst124 = (1.14184124294813e-24 * fConst0);
		fConst125 = (((((((-1.13165402456113e-20 - fConst124) * fConst0) + 6.3964704171268905e-17) * fConst0) + 1.2341991921566999e-13) * fConst0) + -5.3777022904092303e-12);
		fConst126 = (((((((fConst102 + -6.9786536238665405e-24) * fConst0) + -3.0076672528197697e-20) * fConst0) + 3.4729725904659701e-17) * fConst0) + 1.10984475036588e-14);
		fConst127 = (((((((3.21862455840599e-24 - fConst102) * fConst0) + 1.18685779929214e-20) * fConst0) + -1.38571182608897e-17) * fConst0) + -1.0089497730598901e-15);
		fConst128 = (((((4.41098196812847e-25 - fConst105) * fConst0) + -6.1918092864690196e-22) * fConst0) + 1.02220052054848e-17);
		fConst129 = (((((fConst105 + -5.2635926076478197e-25) * fConst0) + -1.7346061366694098e-21) * fConst0) + 1.13577835616498e-18);
		fConst130 = (((((fConst105 + -4.0812014080033504e-24) * fConst0) + -1.59732637857398e-20) * fConst0) + 1.13577835616498e-18);
		fConst131 = (((((4.1664624719552899e-24 - fConst105) * fConst0) + 1.83814728067701e-20) * fConst0) + -1.24935619178148e-17);
		fConst132 = (8.3393071550806703e-25 * fConst0);
		fConst133 = (((((-2.2469198852549501e-21 - fConst132) * fConst0) + -2.81970946991738e-18) * fConst0) + -9.0805479575390405e-14);
		fConst134 = ((((fConst0 * (fConst132 + 2.51432958583147e-21)) + -9.6085111190672694e-18) * fConst0) + -1.00894977305989e-14);
		fConst135 = (((((((fConst124 + -1.13165402456113e-20) * fConst0) + -6.3964704171268905e-17) * fConst0) + 1.2341991921566999e-13) * fConst0) + 5.3777022904092303e-12);
		fConst136 = ((((((fConst0 * (fConst102 + 6.9786536238665405e-24)) + -3.0076672528197697e-20) * fConst0) + -3.4729725904659701e-17) * fConst0) + 1.10984475036588e-14);
		fConst137 = (((((((-3.21862455840599e-24 - fConst102) * fConst0) + 1.18685779929214e-20) * fConst0) + 1.38571182608897e-17) * fConst0) + -1.0089497730598901e-15);
		fConst138 = (((((-4.41098196812847e-25 - fConst105) * fConst0) + -6.1918092864690196e-22) * fConst0) + -1.02220052054848e-17);
		fConst139 = ((((fConst0 * (fConst105 + 5.2635926076478197e-25)) + -1.7346061366694098e-21) * fConst0) + -1.13577835616498e-18);
		fConst140 = ((((fConst0 * (fConst105 + 4.0812014080033504e-24)) + -1.59732637857398e-20) * fConst0) + -1.13577835616498e-18);
		fConst141 = (((((-4.1664624719552899e-24 - fConst105) * fConst0) + 1.83814728067701e-20) * fConst0) + 1.24935619178148e-17);
		fConst142 = (((((fConst132 + -2.2469198852549501e-21) * fConst0) + 2.81970946991738e-18) * fConst0) + -9.0805479575390405e-14);
		fConst143 = (((((2.51432958583147e-21 - fConst132) * fConst0) + 9.6085111190672694e-18) * fConst0) + -1.00894977305989e-14);
		fConst144 = ((((((fConst0 * (fConst87 + 1.13165402456113e-20)) + -6.3964704171268905e-17) * fConst0) + -2.4683983843134101e-14) * fConst0) + 9.6798641227366196e-12);
		fConst145 = (((((((1.3957307247733101e-24 - fConst114) * fConst0) + 3.0076672528197697e-20) * fConst0) + -3.4729725904659701e-17) * fConst0) + -2.2196895007317699e-15);
		fConst146 = (((((((fConst114 + -6.43724911681198e-25) * fConst0) + -1.18685779929214e-20) * fConst0) + 1.38571182608897e-17) * fConst0) + 2.01789954611979e-16);
		fConst147 = (((((fConst117 + -8.8219639362569299e-26) * fConst0) + 6.1918092864690196e-22) * fConst0) + -1.02220052054848e-17);
		fConst148 = (((((1.05271852152956e-25 - fConst117) * fConst0) + 1.7346061366694098e-21) * fConst0) + -1.13577835616498e-18);
		fConst149 = (((((8.1624028160066996e-25 - fConst117) * fConst0) + 1.59732637857398e-20) * fConst0) + -1.13577835616498e-18);
		fConst150 = (((((fConst117 + -8.3329249439105692e-25) * fConst0) + -1.83814728067701e-20) * fConst0) + 1.24935619178148e-17);
		fConst151 = ((fConst0 * ((fConst0 * (fConst97 + 2.2469198852549501e-21)) + 2.81970946991738e-18)) + 1.8161095915078101e-14);
		fConst152 = (((((-2.51432958583147e-21 - fConst97) * fConst0) + 9.6085111190672694e-18) * fConst0) + 2.01789954611979e-15);
		fConst153 = (((((((3.7721800818704198e-21 - fConst100) * fConst0) + 2.1321568057089601e-17) * fConst0) + -7.4051951529402199e-14) * fConst0) + 5.3777022904092303e-12);
		fConst154 = (((((((fConst102 + -4.1871921743199203e-24) * fConst0) + 1.00255575093992e-20) * fConst0) + 1.1576575301553199e-17) * fConst0) + -6.6590685021953003e-15);
		fConst155 = (((((((1.93117473504359e-24 - fConst102) * fConst0) + -3.9561926643071399e-21) * fConst0) + -4.6190394202965701e-18) * fConst0) + 6.0536986383593598e-16);
		fConst156 = (((((2.6465891808770799e-25 - fConst105) * fConst0) + 2.06393642882301e-22) * fConst0) + 3.4073350684949499e-18);
		fConst157 = (((((fConst105 + -3.15815556458869e-25) * fConst0) + 5.7820204555647001e-22) * fConst0) + 3.7859278538832802e-19);
		fConst158 = (((((fConst105 + -2.4487208448020101e-24) * fConst0) + 5.3244212619132801e-21) * fConst0) + 3.7859278538832802e-19);
		fConst159 = (((((2.4998774831731698e-24 - fConst105) * fConst0) + -6.1271576022567097e-21) * fConst0) + -4.1645206392716099e-18);
		fConst160 = (((((7.48973295084982e-22 - fConst110) * fConst0) + -9.3990315663912601e-19) * fConst0) + 5.4483287745234297e-14);
		fConst161 = (((((fConst110 + -8.3810986194382299e-22) * fConst0) + -3.2028370396890902e-18) * fConst0) + 6.0536986383593602e-15);
		fConst162 = (((((((fConst87 + -3.7721800818704198e-21) * fConst0) + 2.1321568057089601e-17) * fConst0) + -2.4683983843134101e-14) * fConst0) + 1.07554045808185e-12);
		fConst163 = (((((((1.3957307247733101e-24 - fConst89) * fConst0) + -1.00255575093992e-20) * fConst0) + 1.1576575301553199e-17) * fConst0) + -2.2196895007317699e-15);
		fConst164 = (((((((fConst89 + -6.43724911681198e-25) * fConst0) + 3.9561926643071399e-21) * fConst0) + -4.6190394202965701e-18) * fConst0) + 2.01789954611979e-16);
		fConst165 = (((((fConst92 + -8.8219639362569299e-26) * fConst0) + -2.06393642882301e-22) * fConst0) + 3.4073350684949499e-18);
		fConst166 = (((((1.05271852152956e-25 - fConst92) * fConst0) + -5.7820204555647001e-22) * fConst0) + 3.7859278538832802e-19);
		fConst167 = (((((8.1624028160066996e-25 - fConst92) * fConst0) + -5.3244212619132801e-21) * fConst0) + 3.7859278538832802e-19);
		fConst168 = (((((fConst92 + -8.3329249439105692e-25) * fConst0) + 6.1271576022567097e-21) * fConst0) + -4.1645206392716099e-18);
		fConst169 = (((((fConst97 + -7.48973295084982e-22) * fConst0) + -9.3990315663912601e-19) * fConst0) + 1.8161095915078101e-14);
		fConst170 = (((((8.3810986194382299e-22 - fConst97) * fConst0) + -3.2028370396890902e-18) * fConst0) + 2.01789954611979e-15);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.5);
		fVslider1 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec1[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec2[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 8); l2 = (l2 + 1)) {
			fRec0[l2] = 0.0;
			
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
	
	virtual VtbdiBassTreble* clone() {
		return new VtbdiBassTreble();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("VTBassDI-bt");
		ui_interface->declare(&fVslider0, "name", "PRhiv");
		ui_interface->addVerticalSlider("PRhiv", &fVslider0, 0.5, 0.0, 1.0, 0.01);
		ui_interface->declare(&fVslider1, "name", "PRlowv");
		ui_interface->addVerticalSlider("PRlowv", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0070000000000000062 * double(fVslider0));
		double fSlow1 = (0.0070000000000000062 * (1.0 - double(fVslider1)));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec1[0] = (fSlow0 + (0.99299999999999999 * fRec1[1]));
			fRec2[0] = (fSlow1 + (0.99299999999999999 * fRec2[1]));
			double fTemp0 = ((fConst0 * (fConst78 + ((fRec1[0] * (fConst79 + ((fRec1[0] * (fConst80 + (fConst0 * (fRec2[0] * (fConst81 + (fConst82 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst83 + (fConst84 * fRec2[0]))))))) + (fRec2[0] * (fConst85 + (fConst86 * fRec2[0])))))) + 2.07170254601745e-11);
			fRec0[0] = (double(input0[i]) - ((((((((fRec0[1] * ((fConst0 * (fConst2 + ((fRec1[0] * (fConst4 + ((fRec1[0] * (fConst5 + (fConst0 * (fRec2[0] * (fConst7 + (fConst8 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst9 + (fConst10 * fRec2[0]))))))) + (fRec2[0] * (fConst12 + (fConst13 * fRec2[0])))))) + 1.4501917822122199e-10)) + (fRec0[2] * ((fConst0 * (fConst15 + ((fRec1[0] * (fConst17 + ((fRec1[0] * (fConst18 + (fConst0 * (fRec2[0] * (fConst20 + (fConst21 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst22 + (fConst23 * fRec2[0]))))))) + (fRec2[0] * (fConst25 + (fConst26 * fRec2[0])))))) + 4.3505753466366498e-10))) + (fRec0[3] * ((fConst0 * (fConst27 + ((fRec1[0] * (fConst29 + ((fRec1[0] * (fConst30 + (fConst0 * (fRec2[0] * (fConst32 + (fConst33 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst34 + (fConst35 * fRec2[0]))))))) + (fRec2[0] * (fConst36 + (fConst37 * fRec2[0])))))) + 7.2509589110610798e-10))) + (fRec0[4] * ((fConst0 * (fConst38 + ((fRec1[0] * (fConst39 + ((fRec1[0] * (fConst40 + (fConst0 * (fRec2[0] * (fConst41 + (fConst42 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst43 + (fConst44 * fRec2[0]))))))) + (fRec2[0] * (fConst45 + (fConst46 * fRec2[0])))))) + 7.2509589110610798e-10))) + (fRec0[5] * ((fConst0 * (fConst47 + ((fRec1[0] * (fConst48 + ((fRec1[0] * (fConst49 + (fConst0 * (fRec2[0] * (fConst50 + (fConst51 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst52 + (fConst53 * fRec2[0]))))))) + (fRec2[0] * (fConst54 + (fConst55 * fRec2[0])))))) + 4.3505753466366498e-10))) + (fRec0[6] * ((fConst0 * (fConst56 + ((fRec1[0] * (fConst57 + ((fRec1[0] * (fConst58 + (fConst0 * (fRec2[0] * (fConst59 + (fConst60 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst61 + (fConst62 * fRec2[0]))))))) + (fRec2[0] * (fConst63 + (fConst64 * fRec2[0])))))) + 1.4501917822122199e-10))) + (fRec0[7] * ((fConst0 * (fConst66 + ((fRec1[0] * (fConst68 + ((fRec1[0] * (fConst69 + (fConst0 * (fRec2[0] * (fConst71 + (fConst72 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst73 + (fConst74 * fRec2[0]))))))) + (fRec2[0] * (fConst76 + (fConst77 * fRec2[0])))))) + 2.07170254601745e-11))) / fTemp0));
			output0[i] = FAUSTFLOAT((fConst0 * (((((((((fRec0[0] * (fConst88 + (fConst0 * ((fRec1[0] * (fConst90 + ((fRec1[0] * (fConst91 + (fConst0 * (fRec2[0] * (fConst93 + (fConst94 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst95 + (fConst96 * fRec2[0]))))))) + (fRec2[0] * (fConst98 + (fConst99 * fRec2[0]))))))) + (fRec0[1] * (fConst101 + (fConst0 * ((fRec1[0] * (fConst103 + ((fRec1[0] * (fConst104 + (fConst0 * (fRec2[0] * (fConst106 + (fConst107 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst108 + (fConst109 * fRec2[0]))))))) + (fRec2[0] * (fConst111 + (fConst112 * fRec2[0])))))))) + (fRec0[2] * (fConst113 + (fConst0 * ((fRec1[0] * (fConst115 + ((fRec1[0] * (fConst116 + (fConst0 * (fRec2[0] * (fConst118 + (fConst119 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst120 + (fConst121 * fRec2[0]))))))) + (fRec2[0] * (fConst122 + (fConst123 * fRec2[0])))))))) + (fRec0[3] * (fConst125 + (fConst0 * ((fRec1[0] * (fConst126 + ((fRec1[0] * (fConst127 + (fConst0 * (fRec2[0] * (fConst128 + (fConst129 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst130 + (fConst131 * fRec2[0]))))))) + (fRec2[0] * (fConst133 + (fConst134 * fRec2[0])))))))) + (fRec0[4] * (fConst135 + (fConst0 * ((fRec1[0] * (fConst136 + ((fRec1[0] * (fConst137 + (fConst0 * (fRec2[0] * (fConst138 + (fConst139 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst140 + (fConst141 * fRec2[0]))))))) + (fRec2[0] * (fConst142 + (fConst143 * fRec2[0])))))))) + (fRec0[5] * (fConst144 + (fConst0 * ((fRec1[0] * (fConst145 + ((fRec1[0] * (fConst146 + (fConst0 * (fRec2[0] * (fConst147 + (fConst148 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst149 + (fConst150 * fRec2[0]))))))) + (fRec2[0] * (fConst151 + (fConst152 * fRec2[0])))))))) + (fRec0[6] * (fConst153 + (fConst0 * ((fRec1[0] * (fConst154 + ((fRec1[0] * (fConst155 + (fConst0 * (fRec2[0] * (fConst156 + (fConst157 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst158 + (fConst159 * fRec2[0]))))))) + (fRec2[0] * (fConst160 + (fConst161 * fRec2[0])))))))) + (fRec0[7] * (fConst162 + (fConst0 * ((fRec1[0] * (fConst163 + ((fRec1[0] * (fConst164 + (fConst0 * (fRec2[0] * (fConst165 + (fConst166 * fRec2[0])))))) + (fConst0 * (fRec2[0] * (fConst167 + (fConst168 * fRec2[0]))))))) + (fRec2[0] * (fConst169 + (fConst170 * fRec2[0])))))))) / fTemp0)));
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			for (int j0 = 7; (j0 > 0); j0 = (j0 - 1)) {
				fRec0[j0] = fRec0[(j0 - 1)];
				
			}
			
		}
		
	}

	
};

#endif
