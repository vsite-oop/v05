#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
   
    double operator"" _eur(unsigned long long e) {
        return e * 7.5345;
    }
    
    double operator"" _inch(unsigned long long in) {
        return in * 2.54;
    }
    
    double tire::diameter() {
        return d;
    }

    int vehicle::year() {
        return y;
    }

    double product::price() {
        return p;
    }

    double car::tire_diameter() {
        return t.diameter();
    }
}