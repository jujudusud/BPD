/* ------------------------------------------------------------
name: "Tech21 Bass Driver: Combo Filter Bass+Treble"
Code generated with Faust 2.5.23 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */

#ifndef  __BddiBassTreble_H__
#define  __BddiBassTreble_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <cmath>
#include <math.h>

double BddiBassTreble_faustpower2_f(double value) {
	return (value * value);
	
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS BddiBassTreble
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class BddiBassTreble : public dsp {
	
 private:
	
	int fSamplingFreq;
	double fConst0;
	FAUSTFLOAT fVslider0;
	double fRec1[2];
	double fConst1;
	double fConst2;
	FAUSTFLOAT fVslider1;
	double fRec2[2];
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
	double fRec0[6];
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
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.0");
		m->declare("category", "External");
		m->declare("filename", "BddiBassTreble");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("id", "BddiBassTreble");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "Tech21 Bass Driver: Combo Filter Bass+Treble");
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
		fConst1 = (4.8808203334365797e-25 * fConst0);
		fConst2 = (((((((-1.3543673112866801e-18 - fConst1) * fConst0) + -1.2401473350644e-15) * fConst0) + 7.0136233373460901e-13) * fConst0) + 1.53329896719905e-10);
		fConst3 = (1.4790364646777501e-23 * fConst0);
		fConst4 = (((((((1.1912663379730701e-18 - fConst3) * fConst0) + -9.1781037388291202e-17) * fConst0) + -4.0724011820013902e-13) * fConst0) + 6.8756860444730198e-12);
		fConst5 = (fConst0 * ((fConst0 * ((fConst0 * (fConst3 + 1.5684509418605401e-19)) + 1.1313380748306999e-15)) + 5.0931007736837198e-15));
		fConst6 = ((((fConst0 * ((fConst0 * (fConst1 + 1.3543673112866801e-18)) + 1.20654438422179e-15)) + -2.24844172006083e-13) * fConst0) + -1.6119663948709e-11);
		fConst7 = (((((fConst3 + -1.1912663379730701e-18) * fConst0) + -9.2649020026662508e-16) * fConst0) + 4.57869759554166e-14);
		fConst8 = ((((-1.5684509418605401e-19 - fConst3) * fConst0) + -1.13066837175778e-16) * fConst0);
		fConst9 = (7.3212305001548698e-26 * fConst0);
		fConst10 = (((((((-2.2539782777468798e-19 - fConst9) * fConst0) + -3.9258916253060902e-16) * fConst0) + 2.31184202006429e-13) * fConst0) + 1.3287383932800201e-10);
		fConst11 = (2.2185546970166301e-24 * fConst0);
		fConst12 = (((((((-4.9533220329454797e-19 - fConst11) * fConst0) + 9.8501694078132698e-17) * fConst0) + -1.00715463535771e-13) * fConst0) + -7.7007683698097799e-11);
		fConst13 = (((fConst0 * ((fConst0 * (fConst11 + 6.9754891811841598e-19)) + 2.39996883649198e-16)) + -5.70427286652576e-14) * fConst0);
		fConst14 = (9.7616406668731594e-25 * fConst0);
		fConst15 = ((((((fConst0 * (fConst14 + 9.0291154085778505e-19)) + -2.4802946701288098e-15) * fConst0) + -1.40272466746922e-12) * fConst0) + 1.0221993114660301e-10);
		fConst16 = (2.9580729293555002e-23 * fConst0);
		fConst17 = (((((((fConst16 + -7.9417755864871101e-19) * fConst0) + -1.8356207477658201e-16) * fConst0) + 8.1448023640027702e-13) * fConst0) + 4.5837906963153403e-12);
		fConst18 = ((((((-1.04563396124036e-19 - fConst16) * fConst0) + 2.26267614966139e-15) * fConst0) + -1.01862015473674e-14) * fConst0);
		fConst19 = (((((((-9.0291154085778505e-19 - fConst14) * fConst0) + 2.41308876844358e-15) * fConst0) + 4.4968834401216499e-13) * fConst0) + -1.07464426324726e-11);
		fConst20 = (((((7.9417755864871101e-19 - fConst16) * fConst0) + -1.8529804005332502e-15) * fConst0) + -9.1573951910833199e-14);
		fConst21 = (((fConst0 * (fConst16 + 1.04563396124036e-19)) + -2.2613367435155699e-16) * fConst0);
		fConst22 = (1.4642461000309701e-25 * fConst0);
		fConst23 = ((((((fConst0 * (fConst22 + 1.50265218516459e-19)) + -7.8517832506121696e-16) * fConst0) + -4.6236840401285799e-13) * fConst0) + 8.8582559552001498e-11);
		fConst24 = (4.4371093940332499e-24 * fConst0);
		fConst25 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst24 + 3.3022146886303201e-19)) + 1.97003388156265e-16)) + 2.0143092707154201e-13)) + -5.1338455798731901e-11);
		fConst26 = ((((((-4.6503261207894399e-19 - fConst24) * fConst0) + 4.7999376729839501e-16) * fConst0) + 1.14085457330515e-13) * fConst0);
		fConst27 = (((((((9.0291154085778505e-19 - fConst14) * fConst0) + 2.4802946701288098e-15) * fConst0) + -1.40272466746922e-12) * fConst0) + -1.0221993114660301e-10);
		fConst28 = (((((((-7.9417755864871101e-19 - fConst16) * fConst0) + 1.8356207477658201e-16) * fConst0) + 8.1448023640027702e-13) * fConst0) + -4.5837906963153403e-12);
		fConst29 = ((((((fConst16 + -1.04563396124036e-19) * fConst0) + -2.26267614966139e-15) * fConst0) + -1.01862015473674e-14) * fConst0);
		fConst30 = (((((((fConst14 + -9.0291154085778505e-19) * fConst0) + -2.41308876844358e-15) * fConst0) + 4.4968834401216499e-13) * fConst0) + 1.07464426324726e-11);
		fConst31 = ((fConst0 * ((fConst0 * (fConst16 + 7.9417755864871101e-19)) + 1.8529804005332502e-15)) + -9.1573951910833199e-14);
		fConst32 = ((((1.04563396124036e-19 - fConst16) * fConst0) + 2.2613367435155699e-16) * fConst0);
		fConst33 = (((((((1.50265218516459e-19 - fConst22) * fConst0) + 7.8517832506121696e-16) * fConst0) + -4.6236840401285799e-13) * fConst0) + -8.8582559552001498e-11);
		fConst34 = (((((((3.3022146886303201e-19 - fConst24) * fConst0) + -1.97003388156265e-16) * fConst0) + 2.0143092707154201e-13) * fConst0) + 5.1338455798731901e-11);
		fConst35 = ((((((fConst24 + -4.6503261207894399e-19) * fConst0) + -4.7999376729839501e-16) * fConst0) + 1.14085457330515e-13) * fConst0);
		fConst36 = (((((((fConst1 + -1.3543673112866801e-18) * fConst0) + 1.2401473350644e-15) * fConst0) + 7.0136233373460901e-13) * fConst0) + -1.53329896719905e-10);
		fConst37 = ((((fConst0 * ((fConst0 * (fConst3 + 1.1912663379730701e-18)) + 9.1781037388291202e-17)) + -4.0724011820013902e-13) * fConst0) + -6.8756860444730198e-12);
		fConst38 = ((((((1.5684509418605401e-19 - fConst3) * fConst0) + -1.1313380748306999e-15) * fConst0) + 5.0931007736837198e-15) * fConst0);
		fConst39 = (((((((1.3543673112866801e-18 - fConst1) * fConst0) + -1.20654438422179e-15) * fConst0) + -2.24844172006083e-13) * fConst0) + 1.6119663948709e-11);
		fConst40 = (((((-1.1912663379730701e-18 - fConst3) * fConst0) + 9.2649020026662508e-16) * fConst0) + 4.57869759554166e-14);
		fConst41 = ((((fConst3 + -1.5684509418605401e-19) * fConst0) + 1.13066837175778e-16) * fConst0);
		fConst42 = (((((((fConst9 + -2.2539782777468798e-19) * fConst0) + 3.9258916253060902e-16) * fConst0) + 2.31184202006429e-13) * fConst0) + -1.3287383932800201e-10);
		fConst43 = (((((((fConst11 + -4.9533220329454797e-19) * fConst0) + -9.8501694078132698e-17) * fConst0) + -1.00715463535771e-13) * fConst0) + 7.7007683698097799e-11);
		fConst44 = ((((((6.9754891811841598e-19 - fConst11) * fConst0) + -2.39996883649198e-16) * fConst0) + -5.70427286652576e-14) * fConst0);
		fConst45 = (9.7616406668731601e-26 * fConst0);
		fConst46 = (((((((4.5145577042889301e-19 - fConst45) * fConst0) + -1.2401473350644e-15) * fConst0) + 7.0136233373460901e-13) * fConst0) + -5.1109965573301697e-11);
		fConst47 = (2.9580729293554999e-24 * fConst0);
		fConst48 = (((((((-3.9708877932435502e-19 - fConst47) * fConst0) + -9.1781037388291202e-17) * fConst0) + -4.0724011820013902e-13) * fConst0) + -2.2918953481576702e-12);
		fConst49 = ((((((fConst47 + -5.22816980620181e-20) * fConst0) + 1.1313380748306999e-15) * fConst0) + 5.0931007736837198e-15) * fConst0);
		fConst50 = (((((((fConst45 + -4.5145577042889301e-19) * fConst0) + 1.20654438422179e-15) * fConst0) + -2.24844172006083e-13) * fConst0) + 5.3732213162363203e-12);
		fConst51 = ((((fConst0 * (fConst47 + 3.9708877932435502e-19)) + -9.2649020026662508e-16) * fConst0) + 4.57869759554166e-14);
		fConst52 = ((((5.22816980620181e-20 - fConst47) * fConst0) + -1.13066837175778e-16) * fConst0);
		fConst53 = (1.46424610003097e-26 * fConst0);
		fConst54 = (((((((7.5132609258229502e-20 - fConst53) * fConst0) + -3.9258916253060902e-16) * fConst0) + 2.31184202006429e-13) * fConst0) + -4.4291279776000697e-11);
		fConst55 = (4.43710939403325e-25 * fConst0);
		fConst56 = (((((((1.65110734431516e-19 - fConst55) * fConst0) + 9.8501694078132698e-17) * fConst0) + -1.00715463535771e-13) * fConst0) + 2.5669227899365899e-11);
		fConst57 = ((((((fConst55 + -2.3251630603947199e-19) * fConst0) + 2.39996883649198e-16) * fConst0) + -5.70427286652576e-14) * fConst0);
		fConst58 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst45 + 4.5145577042889301e-19)) + 1.2401473350644e-15)) + 7.0136233373460901e-13)) + 5.1109965573301697e-11);
		fConst59 = (((((((fConst47 + -3.9708877932435502e-19) * fConst0) + 9.1781037388291202e-17) * fConst0) + -4.0724011820013902e-13) * fConst0) + 2.2918953481576702e-12);
		fConst60 = ((((((-5.22816980620181e-20 - fConst47) * fConst0) + -1.1313380748306999e-15) * fConst0) + 5.0931007736837198e-15) * fConst0);
		fConst61 = (((((((-4.5145577042889301e-19 - fConst45) * fConst0) + -1.20654438422179e-15) * fConst0) + -2.24844172006083e-13) * fConst0) + -5.3732213162363203e-12);
		fConst62 = (((((3.9708877932435502e-19 - fConst47) * fConst0) + 9.2649020026662508e-16) * fConst0) + 4.57869759554166e-14);
		fConst63 = (fConst0 * ((fConst0 * (fConst47 + 5.22816980620181e-20)) + 1.13066837175778e-16));
		fConst64 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst53 + 7.5132609258229502e-20)) + 3.9258916253060902e-16)) + 2.31184202006429e-13)) + 4.4291279776000697e-11);
		fConst65 = ((((((fConst0 * (fConst55 + 1.65110734431516e-19)) + -9.8501694078132698e-17) * fConst0) + -1.00715463535771e-13) * fConst0) + -2.5669227899365899e-11);
		fConst66 = ((((((-2.3251630603947199e-19 - fConst55) * fConst0) + -2.39996883649198e-16) * fConst0) + -5.70427286652576e-14) * fConst0);
		fConst67 = (7.3950895955414096e-21 * fConst0);
		fConst68 = (((((-1.8670360292501e-16 - fConst67) * fConst0) + -7.0331274622389802e-13) * fConst0) + -2.8011703013414401e-11);
		fConst69 = (1.9047958049121801e-16 * fConst0);
		fConst70 = ((1.8487723988853501e-14 - fConst69) * fConst0);
		fConst71 = (fConst70 + 2.5465184557649499e-11);
		fConst72 = BddiBassTreble_faustpower2_f(fConst0);
		fConst73 = (-4.5837332203769103e-13 - (4.4818724821463099e-19 * fConst72));
		fConst74 = (2.2409362410731602e-16 * fConst0);
		fConst75 = (fConst74 + 5.0930369115299e-13);
		fConst76 = (4.4818724821463099e-19 * fConst0);
		fConst77 = (fConst0 * (fConst76 + 1.0186073823059799e-15));
		fConst78 = (2.9132171133951002e-19 * fConst0);
		fConst79 = (((-1.2539056876186599e-15 - fConst78) * fConst0) + 5.0421065424145997e-13);
		fConst80 = (2.2409362410731602e-19 * fConst0);
		fConst81 = (fConst0 * (fConst80 + 1.12046812053658e-15));
		fConst82 = (2.2185268786624199e-20 * fConst0);
		fConst83 = ((((fConst0 * (fConst82 + 1.8670360292501e-16)) + -7.0331274622389802e-13) * fConst0) + -8.4035109040243295e-11);
		fConst84 = (fConst0 * (fConst69 + 1.8487723988853501e-14));
		fConst85 = (fConst84 + 7.6395553672948497e-11);
		fConst86 = ((1.34456174464389e-18 * fConst72) + -4.5837332203769103e-13);
		fConst87 = (1.0186073823059799e-15 * fConst0);
		fConst88 = (5.0930369115299e-13 - fConst74);
		fConst89 = (1.34456174464389e-18 * fConst0);
		fConst90 = ((-1.0186073823059799e-15 - fConst89) * fConst0);
		fConst91 = (8.7396513401853098e-19 * fConst0);
		fConst92 = ((fConst0 * (fConst91 + 1.2539056876186599e-15)) + 5.0421065424145997e-13);
		fConst93 = (6.7228087232194701e-19 * fConst0);
		fConst94 = ((-1.12046812053658e-15 - fConst93) * fConst0);
		fConst95 = (1.4790179191082801e-20 * fConst0);
		fConst96 = (((((3.7340720585002001e-16 - fConst95) * fConst0) + 1.4066254924478001e-12) * fConst0) + -5.6023406026828898e-11);
		fConst97 = (3.80959160982437e-16 * fConst0);
		fConst98 = (((fConst97 + -3.6975447977707103e-14) * fConst0) + 5.0930369115298998e-11);
		fConst99 = (9.1674664407538206e-13 - (8.9637449642926197e-19 * fConst72));
		fConst100 = (2.0372147646119599e-15 * fConst0);
		fConst101 = (4.4818724821463096e-16 * fConst0);
		fConst102 = (-1.01860738230598e-12 - fConst101);
		fConst103 = (8.9637449642926197e-19 * fConst0);
		fConst104 = ((fConst103 + -2.0372147646119599e-15) * fConst0);
		fConst105 = (5.82643422679021e-19 * fConst0);
		fConst106 = (((2.5078113752373199e-15 - fConst105) * fConst0) + -1.0084213084829199e-12);
		fConst107 = ((fConst76 + -2.24093624107316e-15) * fConst0);
		fConst108 = (((((-3.7340720585002001e-16 - fConst95) * fConst0) + 1.4066254924478001e-12) * fConst0) + 5.6023406026828898e-11);
		fConst109 = (((-3.6975447977707103e-14 - fConst97) * fConst0) + -5.0930369115298998e-11);
		fConst110 = (fConst101 + -1.01860738230598e-12);
		fConst111 = (fConst0 * (fConst103 + 2.0372147646119599e-15));
		fConst112 = (((-2.5078113752373199e-15 - fConst105) * fConst0) + -1.0084213084829199e-12);
		fConst113 = (fConst0 * (fConst76 + 2.24093624107316e-15));
		fConst114 = (((((fConst82 + -1.8670360292501e-16) * fConst0) + -7.0331274622389802e-13) * fConst0) + 8.4035109040243295e-11);
		fConst115 = (fConst70 + -7.6395553672948497e-11);
		fConst116 = ((1.0186073823059799e-15 - fConst89) * fConst0);
		fConst117 = (((fConst91 + -1.2539056876186599e-15) * fConst0) + 5.0421065424145997e-13);
		fConst118 = ((1.12046812053658e-15 - fConst93) * fConst0);
		fConst119 = (((((1.8670360292501e-16 - fConst67) * fConst0) + -7.0331274622389802e-13) * fConst0) + 2.8011703013414401e-11);
		fConst120 = (fConst84 + -2.5465184557649499e-11);
		fConst121 = ((fConst76 + -1.0186073823059799e-15) * fConst0);
		fConst122 = (((1.2539056876186599e-15 - fConst78) * fConst0) + 5.0421065424145997e-13);
		fConst123 = ((fConst80 + -1.12046812053658e-15) * fConst0);
		
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
		for (int l2 = 0; (l2 < 6); l2 = (l2 + 1)) {
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
	
	virtual BddiBassTreble* clone() {
		return new BddiBassTreble();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("Tech21 Bass Driver: Combo Filter Bass+Treble");
		ui_interface->declare(&fVslider1, "name", "treble");
		ui_interface->addVerticalSlider("PR24v", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->declare(&fVslider0, "name", "bass");
		ui_interface->addVerticalSlider("PR41v", &fVslider0, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0070000000000000062 * (1.0 - double(fVslider0)));
		double fSlow1 = (0.0070000000000000062 * double(fVslider1));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec1[0] = (fSlow0 + (0.99299999999999999 * fRec1[1]));
			fRec2[0] = (fSlow1 + (0.99299999999999999 * fRec2[1]));
			double fTemp0 = (((fRec1[0] * ((fConst0 * (fConst58 + ((fRec2[0] * (fConst59 + (fConst60 * fRec2[0]))) + (fRec1[0] * (fConst61 + (fConst0 * (fRec2[0] * (fConst62 + (fConst63 * fRec2[0]))))))))) + -1.2732751934209301e-10)) + (fConst0 * (fConst64 + (fRec2[0] * (fConst65 + (fConst66 * fRec2[0])))))) + 1.4260682166314401e-09);
			fRec0[0] = (double(input0[i]) - ((((((fRec0[1] * (((fRec1[0] * ((fConst0 * (fConst2 + ((fRec2[0] * (fConst4 + (fConst5 * fRec2[0]))) + (fRec1[0] * (fConst6 + (fConst0 * (fRec2[0] * (fConst7 + (fConst8 * fRec2[0]))))))))) + -6.3663759671046405e-10)) + (fConst0 * (fConst10 + (fRec2[0] * (fConst12 + (fConst13 * fRec2[0])))))) + 7.1303410831572002e-09)) + (fRec0[2] * (((fRec1[0] * ((fConst0 * (fConst15 + ((fRec2[0] * (fConst17 + (fConst18 * fRec2[0]))) + (fRec1[0] * (fConst19 + (fConst0 * (fRec2[0] * (fConst20 + (fConst21 * fRec2[0]))))))))) + -1.27327519342093e-09)) + (fConst0 * (fConst23 + (fRec2[0] * (fConst25 + (fConst26 * fRec2[0])))))) + 1.42606821663144e-08))) + (fRec0[3] * (((fRec1[0] * ((fConst0 * (fConst27 + ((fRec2[0] * (fConst28 + (fConst29 * fRec2[0]))) + (fRec1[0] * (fConst30 + (fConst0 * (fRec2[0] * (fConst31 + (fConst32 * fRec2[0]))))))))) + -1.27327519342093e-09)) + (fConst0 * (fConst33 + (fRec2[0] * (fConst34 + (fConst35 * fRec2[0])))))) + 1.42606821663144e-08))) + (fRec0[4] * (((fRec1[0] * ((fConst0 * (fConst36 + ((fRec2[0] * (fConst37 + (fConst38 * fRec2[0]))) + (fRec1[0] * (fConst39 + (fConst0 * (fRec2[0] * (fConst40 + (fConst41 * fRec2[0]))))))))) + -6.3663759671046405e-10)) + (fConst0 * (fConst42 + (fRec2[0] * (fConst43 + (fConst44 * fRec2[0])))))) + 7.1303410831572002e-09))) + (fRec0[5] * (((fRec1[0] * ((fConst0 * (fConst46 + ((fRec2[0] * (fConst48 + (fConst49 * fRec2[0]))) + (fRec1[0] * (fConst50 + (fConst0 * (fRec2[0] * (fConst51 + (fConst52 * fRec2[0]))))))))) + -1.2732751934209301e-10)) + (fConst0 * (fConst54 + (fRec2[0] * (fConst56 + (fConst57 * fRec2[0])))))) + 1.4260682166314401e-09))) / fTemp0));
			double fTemp1 = (fConst0 * (0.0 - (1.0186073823059799e-15 * fRec2[0])));
			double fTemp2 = (fConst87 * fRec2[0]);
			output0[i] = FAUSTFLOAT((fConst0 * (((((((fRec0[0] * (fConst68 + ((fRec1[0] * (fConst71 + (fConst0 * ((fRec2[0] * (fConst73 + fTemp1)) + (fRec1[0] * (fConst75 + (fConst77 * fRec2[0]))))))) + (fConst0 * (fRec2[0] * (fConst79 + (fConst81 * fRec2[0]))))))) + (fRec0[1] * (fConst83 + ((fRec1[0] * (fConst85 + (fConst0 * ((fRec2[0] * (fConst86 + fTemp2)) + (fRec1[0] * (fConst88 + (fConst90 * fRec2[0]))))))) + (fConst0 * (fRec2[0] * (fConst92 + (fConst94 * fRec2[0])))))))) + (fRec0[2] * (fConst96 + ((fRec1[0] * (fConst98 + (fConst0 * ((fRec2[0] * (fConst99 + (fConst100 * fRec2[0]))) + (fRec1[0] * (fConst102 + (fConst104 * fRec2[0]))))))) + (fConst0 * (fRec2[0] * (fConst106 + (fConst107 * fRec2[0])))))))) + (fRec0[3] * (fConst108 + ((fRec1[0] * (fConst109 + (fConst0 * ((fRec2[0] * (fConst99 + (fConst0 * (0.0 - (2.0372147646119599e-15 * fRec2[0]))))) + (fRec1[0] * (fConst110 + (fConst111 * fRec2[0]))))))) + (fConst0 * (fRec2[0] * (fConst112 + (fConst113 * fRec2[0])))))))) + (fRec0[4] * (fConst114 + ((fRec1[0] * (fConst115 + (fConst0 * ((fRec2[0] * (fConst86 + fTemp1)) + (fRec1[0] * (fConst75 + (fConst116 * fRec2[0]))))))) + (fConst0 * (fRec2[0] * (fConst117 + (fConst118 * fRec2[0])))))))) + (fRec0[5] * (fConst119 + ((fRec1[0] * (fConst120 + (fConst0 * ((fRec2[0] * (fConst73 + fTemp2)) + (fRec1[0] * (fConst88 + (fConst121 * fRec2[0]))))))) + (fConst0 * (fRec2[0] * (fConst122 + (fConst123 * fRec2[0])))))))) / fTemp0)));
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			for (int j0 = 5; (j0 > 0); j0 = (j0 - 1)) {
				fRec0[j0] = fRec0[(j0 - 1)];
				
			}
			
		}
		
	}

	
};

#endif
