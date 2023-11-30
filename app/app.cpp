#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
    double operator"" _inch(unsigned long long num){
        return num * 2.54;
    }
    double operator"" _eur(unsigned long long eu){
        return eu * 7.5345;
    }

    double tire::diameter(){
        return d;
    }

    int vehicle::year(){
        return yr;
    }

    double product::price(){
        return pr;
    }

    double car::tire_diameter(){
        return t.diameter();
    }
}