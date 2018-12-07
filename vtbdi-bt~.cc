#include <m_pd.h>
#include "bddi/VtbdiBassTreble.h"

static t_class *vtbdi_bt_tilde_class = nullptr;

struct t_vtbdi_bt_tilde {
    t_object x_obj;
    VtbdiBassTreble *x_filtre;
    float x_signalin;
    UI::SliderData *x_dsp_ports;
    t_inlet *x_inl_lp;
    t_inlet *x_inl_hp;
    t_outlet *x_otl_outp;
};

static void *vtbdi_bt_tilde_new(t_symbol *s, int argc, t_atom argv[])
{
    t_vtbdi_bt_tilde *x = (t_vtbdi_bt_tilde *)pd_new(vtbdi_bt_tilde_class);
    t_float sr = sys_getsr();

    VtbdiBassTreble *filtre = x->x_filtre = new VtbdiBassTreble;
    filtre->init(sr);

    UI ui;
    filtre->buildUserInterface(&ui);

    x->x_dsp_ports = new UI::SliderData[2];
    x->x_dsp_ports[0] = *ui.lookupSlider("PRlowv");
    x->x_dsp_ports[1] = *ui.lookupSlider("PRhiv");

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

static void vtbdi_bt_tilde_free(t_vtbdi_bt_tilde *x)
{
    delete x->x_filtre;
    delete[] x->x_dsp_ports;
}

static t_int *vtbdi_bt_tilde_perform(t_int *w)
{
    t_vtbdi_bt_tilde *x = (t_vtbdi_bt_tilde *)*++w;
    t_sample *in = (t_sample *)*++w;
    t_sample *out = (t_sample *)*++w;
    unsigned n = (t_int)*++w;

    VtbdiBassTreble *filtre = x->x_filtre;
    filtre->compute(n, &in, &out);

    return ++w;
}

static void vtbdi_bt_tilde_dsp(t_vtbdi_bt_tilde *x, t_signal **sp)
{
    dsp_add(&vtbdi_bt_tilde_perform, 4, x, sp[0]->s_vec, sp[1]->s_vec, (t_int)sp[0]->s_n);
}

static void vtbdi_bt_tilde_lp(t_vtbdi_bt_tilde *x, t_floatarg f)
{
    UI::SliderData &s = x->x_dsp_ports[0];
    f = (f > s.min) ? f : s.min;
    f = (f < s.max) ? f : s.max;
    *s.zone = f;
}

static void vtbdi_bt_tilde_hp(t_vtbdi_bt_tilde *x, t_floatarg f)
{
    UI::SliderData &s = x->x_dsp_ports[1];
    f = (f > s.min) ? f : s.min;
    f = (f < s.max) ? f : s.max;
    *s.zone = f;
}

extern "C" {

EXTERN void setup_vtbdi0x2dbt_tilde()
{
    t_class *cls = vtbdi_bt_tilde_class = class_new(
        gensym("vtbdi-bt~"),
        (t_newmethod)&vtbdi_bt_tilde_new,
        (t_method)&vtbdi_bt_tilde_free,
        sizeof(t_vtbdi_bt_tilde),
        CLASS_DEFAULT,
        A_GIMME, A_NULL);
    CLASS_MAINSIGNALIN(
        cls, t_vtbdi_bt_tilde, x_signalin);
    class_addmethod(
        cls, (t_method)&vtbdi_bt_tilde_dsp, gensym("dsp"), A_CANT, A_NULL);
    class_addmethod(vtbdi_bt_tilde_class, (t_method)vtbdi_bt_tilde_lp,
        gensym("bass"), A_FLOAT, 0);
    class_addmethod(vtbdi_bt_tilde_class, (t_method)vtbdi_bt_tilde_hp,
        gensym("treble"), A_FLOAT, 0);
}

}  // extern "C"
