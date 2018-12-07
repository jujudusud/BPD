filtres = \
	BddiBassTreble \
	VtbdiPresence \
	VtbdiBassTreble \
	VtbdiMid_Stage1 \
	VtbdiMid_Stage2

cc_sources = $(foreach l,$(filtres),$(l).cc)
dsp_sources = $(foreach l,$(filtres),$(l).dsp)

all: $(dsp_sources) $(cc_sources)

clean:
	rm -f $(cc_sources)

%.cc: %.dsp
	faust -double -cn $* -i $< > $@
