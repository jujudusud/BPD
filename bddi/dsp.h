#pragma once
#include <vector>
#include <algorithm>
#include <cstring>

class dsp {
public:
    virtual ~dsp() {}
    virtual void init(int samplingFreq) = 0;
    virtual void instanceClear() = 0;
    virtual void compute(int count, float** inputs, float** outputs) = 0;
    template <class T> static T min(T a, T b) { return std::min(a, b); }
    template <class T> static T max(T a, T b) { return std::max(a, b); }
};

class UI {
public:
    void declare(float *, const char *, const char *) {}
    void openVerticalBox(const char *) {}
    void closeBox() {}

    struct SliderData {
        const char *label;
        float *zone;
        float init, min, max, step;
    };

    std::vector<SliderData> fSliders;

    void addVerticalSlider(const char *label, float *zone, float init, float min, float max, float step)
    {
        *zone = init;
        fSliders.push_back(SliderData{label, zone, init, min, max, step});
    }

    SliderData *lookupSlider(const char *name)
    {
        for (SliderData &s : fSliders)
            if (!std::strcmp(s.label, name))
                return &s;
        return nullptr;
    }
};

class Meta {
public:
    void declare(const char *, const char *) {}
};
