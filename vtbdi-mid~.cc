#include <m_pd.h>
#include "bddi/VtbdiMid_Stage1.h"
#include "bddi/VtbdiMid_Stage2.h"
#include <string.h>

static t_class *vtbdi_mid_tilde_class = nullptr;

struct t_vtbdi_mid_tilde {
    t_object x_obj;
    VtbdiMid_Stage1 *x_filtre1;
    VtbdiMid_Stage2 *x_filtre2;
    float x_signalin;
    UI::SliderData *x_dsp_ports;
    t_inlet *x_inl_mid;
    t_outlet *x_otl_outp;
};

static void *vtbdi_mid_tilde_new(t_symbol *s, int argc, t_atom argv[])
{
    t_vtbdi_mid_tilde *x = (t_vtbdi_mid_tilde *)pd_new(vtbdi_mid_tilde_class);
    t_float sr = sys_getsr();

    VtbdiMid_Stage1 *filtre1 = x->x_filtre1 = new VtbdiMid_Stage1;
    filtre1->init(sr);
    VtbdiMid_Stage2 *filtre2 = x->x_filtre2 = new VtbdiMid_Stage2;
    filtre2->init(sr);

    UI ui1;
    filtre1->buildUserInterface(&ui1);

    UI ui2;
    filtre2->buildUserInterface(&ui2);

    x->x_dsp_ports = new UI::SliderData[1];
    x->x_dsp_ports[0] = *ui2.lookupSlider("PRmidv");

    x->x_signalin = 0;
    x->x_inl_mid = inlet_new(&x->x_obj, &x->x_obj.ob_pd, gensym("float"), gensym("mid"));
    x->x_otl_outp = outlet_new(&x->x_obj, &s_signal);

    switch (argc) {
    default:
        pd_free((t_pd *)x);
        return nullptr;
    case 0:
        break;
    }

    return x;
}

static void vtbdi_mid_tilde_free(t_vtbdi_mid_tilde *x)
{
    delete x->x_filtre1;
    delete x->x_filtre2;
    delete[] x->x_dsp_ports;
}

static t_int *vtbdi_mid_tilde_perform(t_int *w)
{
    t_vtbdi_mid_tilde *x = (t_vtbdi_mid_tilde *)*++w;
    t_sample *in = (t_sample *)*++w;
    t_sample *out = (t_sample *)*++w;
    unsigned n = (t_int)*++w;

    VtbdiMid_Stage1 *filtre1 = x->x_filtre1;
    VtbdiMid_Stage2 *filtre2 = x->x_filtre2;
    filtre1->compute(n, &in, &out);
    memcpy(out, in, n * sizeof(t_sample));
    filtre2->compute(n, &in, &out);

    return ++w;
}

static void vtbdi_mid_tilde_dsp(t_vtbdi_mid_tilde *x, t_signal **sp)
{
    dsp_add(&vtbdi_mid_tilde_perform, 4, x, sp[0]->s_vec, sp[1]->s_vec, (t_int)sp[0]->s_n);
}

static void vtbdi_mid_tilde_mid(t_vtbdi_mid_tilde *x, t_floatarg f)
{
    UI::SliderData &s = x->x_dsp_ports[0];
    f = (f > s.min) ? f : s.min;
    f = (f < s.max) ? f : s.max;
    *s.zone = f;
}

extern "C" {

EXTERN void setup_vtbdi0x2dmid_tilde()
{
    t_class *cls = vtbdi_mid_tilde_class = class_new(
        gensym("vtbdi-mid~"),
        (t_newmethod)&vtbdi_mid_tilde_new,
        (t_method)&vtbdi_mid_tilde_free,
        sizeof(t_vtbdi_mid_tilde),
        CLASS_DEFAULT,
        A_GIMME, A_NULL);
    CLASS_MAINSIGNALIN(
        cls, t_vtbdi_mid_tilde, x_signalin);
    class_addmethod(
        cls, (t_method)&vtbdi_mid_tilde_dsp, gensym("dsp"), A_CANT, A_NULL);
    class_addmethod(vtbdi_mid_tilde_class, (t_method)vtbdi_mid_tilde_mid,
        gensym("mid"), A_FLOAT, 0);
}

}  // extern "C"
