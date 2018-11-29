#pragma once
#include <algorithm>

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
    void openVerticalBox(const char *) {}
    void closeBox() {}
};

class Meta {
public:
    void declare(const char *, const char *) {}
};
