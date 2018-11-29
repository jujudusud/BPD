lampes = \
    T1_12AX7 T2_12AX7 T3_12AX7 \
    T1_12AT7 T2_12AT7 T3_12AT7 \
    T1_12AU7 T2_12AU7 T3_12AU7 \
    T1_6V6 T2_6V6 T3_6V6 \
    T1_6DJ8 T2_6DJ8 T3_6DJ8 \
    T1_6C16 T2_6C16 T3_6C16
cc_sources = $(foreach l,$(lampes),$(l).cc)
dsp_sources = $(foreach l,$(lampes),$(l).dsp)

all: lampes.h $(dsp_sources) $(cc_sources)

clean:
	rm -f lampes.h $(dsp_sources) $(cc_sources)

lampes.h:
	echo '#define MODELES_LAMPE(x) $(foreach l,$(lampes),x($(l)))' > $@
	echo '#include "./dsp.h"' >> $@
	$(foreach l,$(lampes),echo '#include "./$(l).cc"' >> $@;)

%.cc: %.dsp
	faust -i -cn $* $< > $@

%.dsp:
	echo "process = library(\"tubes.lib\").$*;" > $@

.PHONY: all clean
