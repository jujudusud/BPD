lampes = T1_12AX7
sources = $(foreach lampe,$(lampes),$(lampe).cc)

all: $(sources)

clean:
	rm -f $(sources)

%.cc: %.dsp
	faust -i -cn $* $< > $@
