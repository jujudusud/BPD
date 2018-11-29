#include <m_pd.h>

#include "lampes/dsp.h"
#include "lampes/T1_12AX7.cc"

static t_class *bpd_lampe_tilde_class = NULL;

typedef struct bpd_lampe_tilde {
    t_object x_obj;
    dsp *x_lampe;
    float x_signalin;
    t_outlet *x_otl_outp;
} t_bpd_lampe_tilde;

static void *bpd_lampe_tilde_new(t_symbol *s, int argc, t_atom argv[])
{
    t_bpd_lampe_tilde *x = (t_bpd_lampe_tilde *)pd_new(bpd_lampe_tilde_class);

    x->x_signalin = 0;
    x->x_lampe = new T1_12AX7;
    x->x_otl_outp = outlet_new(&x->x_obj, &s_signal);

    switch (argc) {
    default:
        pd_free((t_pd *)x);
        return NULL;
    case 0:
        break;
    }

    t_float sr = sys_getsr();
    x->x_lampe->init(sr);

    return x;
}

static void bpd_lampe_tilde_free(t_bpd_lampe_tilde *x)
{
    delete x->x_lampe;
}

static t_int *bpd_lampe_tilde_perform(t_int *w)
{
    t_bpd_lampe_tilde *x = (t_bpd_lampe_tilde *)*++w;
    t_sample *in = (t_sample *)*++w;
    t_sample *out = (t_sample *)*++w;
    unsigned n = (t_int)*++w;

    dsp *lampe = x->x_lampe;
    lampe->compute(n, &in, &out);

    return ++w;
}

static void bpd_lampe_tilde_dsp(t_bpd_lampe_tilde *x, t_signal **sp)
{
    dsp_add(&bpd_lampe_tilde_perform, 4, x, sp[0]->s_vec, sp[1]->s_vec, (t_int)sp[0]->s_n);
}

extern "C" {

EXTERN void setup_bpd0x2dlampe_tilde()
{
    t_class *cls = bpd_lampe_tilde_class = class_new(
        gensym("bpd-lampe~"),
        (t_newmethod)&bpd_lampe_tilde_new,
        (t_method)&bpd_lampe_tilde_free,
        sizeof(t_bpd_lampe_tilde),
        CLASS_DEFAULT,
        A_GIMME, A_NULL);
    CLASS_MAINSIGNALIN(
        cls, t_bpd_lampe_tilde, x_signalin);
    class_addmethod(
        cls, (t_method)&bpd_lampe_tilde_dsp, gensym("dsp"), A_CANT, A_NULL);
}

}  // extern "C"
