#include <m_pd.h>
#include <vector>
#include <algorithm>
#include <cstring>
using std::min;
using std::max;

//------------------------------------------------------------------------------
struct t_dsp_object;
static void dsp_object_link_control(t_dsp_object *x, const char *name, float *zone);

//------------------------------------------------------------------------------
class dsp {
public:
    virtual ~dsp() {}
    virtual void init(int samplingFreq) = 0;
    virtual void instanceClear() = 0;
    virtual void compute(int count, float** inputs, float** outputs) = 0;
};

class UI {
    t_dsp_object *x_;

public:
    explicit UI(t_dsp_object *x) : x_(x) {}

    void declare(float *, const char *, const char *) {}
    void openFrameBox(const char *label) {}
    void openTabBox(const char *label) {}
    void openHorizontalBox(const char *) {}
    void openVerticalBox(const char *) {}
    void closeBox() {}

    void addNumDisplay(const char *label, float *zone, int precision) {}
    void addTextDisplay(const char *label, float *zone, char *names[], float min, float max) {}
    void addHorizontalBargraph(const char *label, float *zone, float min, float max) {}
    void addVerticalBargraph(const char *label, float *zone, float min, float max) {}

    void addButton(const char *label, float *zone)
        { dsp_object_link_control(x_, label, zone); }
    void addToggleButton(const char *label, float *zone)
        { dsp_object_link_control(x_, label, zone); }
    void addCheckButton(const char *label, float *zone)
        { dsp_object_link_control(x_, label, zone); }
    void addVerticalSlider(const char *label, float *zone, float init, float min, float max, float step)
        { dsp_object_link_control(x_, label, zone); }
    void addHorizontalSlider(const char *label, float *zone, float init, float min, float max, float step)
        { dsp_object_link_control(x_, label, zone); }
    void addNumEntry(const char* label, float* zone, float init, float min, float max, float step)
        { dsp_object_link_control(x_, label, zone); }
};

class Meta {
public:
    void declare(const char *, const char *) {}
};
//------------------------------------------------------------------------------

#include DSP_CC_FILENAME

static t_class *dsp_object_class = nullptr;

struct t_dsp_object {
    t_object x_obj;
    FAUSTCLASS *x_dsp;
#if DSP_MAINSIGNALIN
    float x_signalin;
#endif
#define DSP_IMPL_CONTROL_MEMBER(symbol, ident, label, hasinlet, haslimit, min, max) \
    float *x_##ident;
    DSP_CONTROLS(DSP_IMPL_CONTROL_MEMBER);
#undef DSP_IMPL_CONTROL_MEMBER
};

static void dsp_object_link_control(t_dsp_object *x, const char *name, float *zone)
{
#define DSP_IMPL_LINK_CONTROL(symbol, ident, label, hasinlet, haslimit, min, max) \
    if (!std::strcmp(name, label)) {                                    \
        x->x_##ident = zone;                                            \
        return;                                                         \
    }
    DSP_CONTROLS(DSP_IMPL_LINK_CONTROL);
#undef DSP_IMPL_LINK_CONTROL
}

static void *dsp_object_new(t_symbol *s, int argc, t_atom argv[])
{
    t_dsp_object *x = (t_dsp_object *)pd_new(dsp_object_class);
    t_float sr = sys_getsr();

    FAUSTCLASS *dsp = x->x_dsp = new FAUSTCLASS;
    dsp->init(sr);

    UI ui(x);
    dsp->buildUserInterface(&ui);

#if DSP_MAINSIGNALIN
    x->x_signalin = 0;
    for (unsigned i = 1; i < dsp_num_inputs; ++i)
        inlet_new(&x->x_obj, &x->x_obj.ob_pd, &s_signal, &s_signal);
#else
    for (unsigned i = 0; i < dsp_num_inputs; ++i)
        inlet_new(&x->x_obj, &x->x_obj.ob_pd, &s_signal, &s_signal);
#endif
    for (unsigned i = 0; i < dsp_num_outputs; ++i)
        outlet_new(&x->x_obj, &s_signal);

#define DSP_IMPL_CONTROL_INLET(symbol, ident, label, hasinlet, haslimit, min, max) \
    if (hasinlet)                                                       \
        inlet_new(&x->x_obj, &x->x_obj.ob_pd, gensym("float"), gensym(symbol));
    DSP_CONTROLS(DSP_IMPL_CONTROL_INLET)
#undef DSP_IMPL_CONTROL_INLET

    switch (argc) {
    default:
        pd_free((t_pd *)x);
        return nullptr;
    case 0:
        break;
    }

    return x;
}

static void dsp_object_free(t_dsp_object *x)
{
    delete x->x_dsp;
}

static t_int *dsp_object_perform(t_int *w)
{
    t_dsp_object *x = (t_dsp_object *)*++w;
    unsigned n = (t_int)*++w;

    t_sample *in[dsp_num_inputs];
    for (unsigned i = 0; i < dsp_num_inputs; ++i)
        in[i] = (t_sample *)*++w;

    t_sample *out[dsp_num_outputs];
    for (unsigned i = 0; i < dsp_num_outputs; ++i)
        out[i] = (t_sample *)*++w;

    FAUSTCLASS *dsp = x->x_dsp;
    dsp->compute(n, in, out);

    return ++w;
}

static void dsp_object_dsp(t_dsp_object *x, t_signal **sp)
{
    enum { n = 2 + dsp_num_inputs + dsp_num_outputs };
    t_int vec[n];

    unsigned vi = 0;
    vec[vi++] = (t_int)x;
    vec[vi++] = (t_int)sp[0]->s_n;

    for (unsigned i = 0; i < dsp_num_inputs + dsp_num_outputs; ++i)
        vec[vi++] = (t_int)sp[i]->s_vec;

    dsp_addv(&dsp_object_perform, n, vec);
}

#define DSP_IMPL_CONTROL_METHOD(symbol, ident, label, hasinlet, haslimit, min, max) \
    static void dsp_object_##ident(t_dsp_object *x, t_floatarg f)       \
    {                                                                   \
        if (haslimit) {                                                 \
            f = (f < min) ? min : f;                                    \
            f = (f > max) ? max : f;                                    \
        }                                                               \
        *x->x_##ident = f;                                              \
    }
DSP_CONTROLS(DSP_IMPL_CONTROL_METHOD)
#undef DSP_IMPL_CONTROL_METHOD

extern "C" {

#ifdef _WIN32
__declspec(dllexport)
#else
__attribute__((visibility("default")))
#endif
void DSP_SETUP()
{
    t_class *cls = dsp_object_class = class_new(
        gensym(DSP_CLASS_NAME),
        (t_newmethod)&dsp_object_new,
        (t_method)&dsp_object_free,
        sizeof(t_dsp_object),
#if DSP_MAINSIGNALIN
        CLASS_DEFAULT,
#else
        CLASS_NOINLET,
#endif
        A_GIMME, A_NULL);
#if DSP_MAINSIGNALIN
    CLASS_MAINSIGNALIN(
        cls, t_dsp_object, x_signalin);
#endif
    class_addmethod(
        cls, (t_method)&dsp_object_dsp, gensym("dsp"), A_CANT, A_NULL);

#define DSP_IMPL_ADD_METHOD(symbol, ident, label, hasinlet, haslimit, min, max) \
    class_addmethod(dsp_object_class, (t_method)dsp_object_##ident, gensym(symbol), A_FLOAT, 0);
    DSP_CONTROLS(DSP_IMPL_ADD_METHOD);
#undef DSP_IMPL_ADD_METHOD
}

}  // extern "C"
