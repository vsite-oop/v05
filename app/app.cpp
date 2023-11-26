#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
    double operator"" _inch(unsigned long long x) 
    {
        return x * 2.54;
    }

    double operator"" _eur(unsigned long long x) 
    {
        return x * 7.5345;
    }

    int vehicle::year() 
    {
        return yr;
    }

    double tire::diameter() 
    {
        return dia;
    }

    double product::price() 
    {
        return pr;
    }

    double car::tire_diameter() 
    {
        return t.diameter();
    }
}