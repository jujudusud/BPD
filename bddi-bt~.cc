#include <m_pd.h>
#include "bddi/BddiBassTreble.h"

static t_class *bddi_bt_tilde_class = nullptr;

struct t_bddi_bt_tilde {
    t_object x_obj;
    BddiBassTreble *x_filtre;
    float x_signalin;
    UI::SliderData *x_dsp_ports;
    t_inlet *x_inl_lp;
    t_inlet *x_inl_hp;
    t_outlet *x_otl_outp;
};

static void *bddi_bt_tilde_new(t_symbol *s, int argc, t_atom argv[])
{
    t_bddi_bt_tilde *x = (t_bddi_bt_tilde *)pd_new(bddi_bt_tilde_class);
    t_float sr = sys_getsr();

    BddiBassTreble *filtre = x->x_filtre = new BddiBassTreble;
    filtre->init(sr);

    UI ui;
    filtre->buildUserInterface(&ui);

    x->x_dsp_ports = new UI::SliderData[2];
    x->x_dsp_ports[0] = *ui.lookupSlider("PR41v");
    x->x_dsp_ports[1] = *ui.lookupSlider("PR24v");

    x->x_signalin = 0;
    x->x_inl_lp = inlet_new(&x->x_obj, &x->x_obj.ob_pd, gensym("float"), gensym("bass"));
    x->x_inl_hp = inlet_new(&x->x_obj, &x->x_obj.ob_pd, gensym("float"), gensym("treble"));
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

static void bddi_bt_tilde_free(t_bddi_bt_tilde *x)
{
    delete x->x_filtre;
    delete[] x->x_dsp_ports;
}

static t_int *bddi_bt_tilde_perform(t_int *w)
{
    t_bddi_bt_tilde *x = (t_bddi_bt_tilde *)*++w;
    t_sample *in = (t_sample *)*++w;
    t_sample *out = (t_sample *)*++w;
    unsigned n = (t_int)*++w;

    BddiBassTreble *filtre = x->x_filtre;
    filtre->compute(n, &in, &out);

    return ++w;
}

static void bddi_bt_tilde_dsp(t_bddi_bt_tilde *x, t_signal **sp)
{
    dsp_add(&bddi_bt_tilde_perform, 4, x, sp[0]->s_vec, sp[1]->s_vec, (t_int)sp[0]->s_n);
}

static void bddi_bt_tilde_lp(t_bddi_bt_tilde *x, t_floatarg f)
{
    UI::SliderData &s = x->x_dsp_ports[0];
    f = (f > s.min) ? f : s.min;
    f = (f < s.max) ? f : s.max;
    *s.zone = f;
}

static void bddi_bt_tilde_hp(t_bddi_bt_tilde *x, t_floatarg f)
{
    UI::SliderData &s = x->x_dsp_ports[1];
    f = (f > s.min) ? f : s.min;
    f = (f < s.max) ? f : s.max;
    *s.zone = f;
}

extern "C" {

EXTERN void setup_bddi0x2dbt_tilde()
{
    t_class *cls = bddi_bt_tilde_class = class_new(
        gensym("bddi-bt~"),
        (t_newmethod)&bddi_bt_tilde_new,
        (t_method)&bddi_bt_tilde_free,
        sizeof(t_bddi_bt_tilde),
        CLASS_DEFAULT,
        A_GIMME, A_NULL);
    CLASS_MAINSIGNALIN(
        cls, t_bddi_bt_tilde, x_signalin);
    class_addmethod(
        cls, (t_method)&bddi_bt_tilde_dsp, gensym("dsp"), A_CANT, A_NULL);
    class_addmethod(bddi_bt_tilde_class, (t_method)bddi_bt_tilde_lp,
        gensym("bass"), A_FLOAT, 0);
    class_addmethod(bddi_bt_tilde_class, (t_method)bddi_bt_tilde_hp,
        gensym("treble"), A_FLOAT, 0);
}

}  // extern "C"
