#include <m_pd.h>
#include "lampes/lampes.h"

static t_class *bpd_lampe_tilde_class = NULL;

enum e_modele_lampe {
    #define L(x) L_##x,
    MODELES_LAMPE(L)
    #undef L
    NUM_MODELES_LAMPE,
};

struct t_bpd_lampe_tilde {
    t_object x_obj;
    dsp *x_lampe;
    float x_signalin;
    t_outlet *x_otl_outp;
    #define L(x) x *x_lampe_##x;
    MODELES_LAMPE(L)
    #undef L
    t_symbol *x_lampe_syms[NUM_MODELES_LAMPE];
};

static void *bpd_lampe_tilde_new(t_symbol *s, int argc, t_atom argv[])
{
    t_bpd_lampe_tilde *x = (t_bpd_lampe_tilde *)pd_new(bpd_lampe_tilde_class);
    t_float sr = sys_getsr();

    #define L(lampe)                                    \
        x->x_lampe_##lampe = new lampe;                 \
        x->x_lampe_##lampe->init(sr);                   \
        x->x_lampe_syms[L_##lampe] = gensym(#lampe);
    MODELES_LAMPE(L)
    #undef L

    x->x_lampe = x->x_lampe_T1_12AX7;
    x->x_signalin = 0;
    x->x_otl_outp = outlet_new(&x->x_obj, &s_signal);

    switch (argc) {
    default:
        pd_free((t_pd *)x);
        return NULL;
    case 0:
        break;
    }

    return x;
}

static void bpd_lampe_tilde_free(t_bpd_lampe_tilde *x)
{
    #define L(lampe) delete x->x_lampe_##lampe;
    MODELES_LAMPE(L)
    #undef L
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

static void bpd_lampe_model(t_bpd_lampe_tilde *x, t_symbol *s)
{
    dsp *lampe = nullptr;

    #define L(l)                                                        \
        if (s == x->x_lampe_syms[L_##l]) { lampe = x->x_lampe_##l; }    \
        else
    MODELES_LAMPE(L)
    #undef L
    {
        error(u8"bpd-lampe~ : modèle de lampe inconnu \"%s\"", s->s_name);
        return;
    }

    if (lampe != x->x_lampe) {
        lampe->instanceClear();
        x->x_lampe = lampe;
    }
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
    class_addmethod(
        cls, (t_method)&bpd_lampe_model, gensym("model"), A_SYMBOL, A_NULL);
}

}  // extern "C"
