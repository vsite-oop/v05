#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{

    double operator"" _eur(unsigned long long int n)
    {
        return n * 7.5345;
    }
    double operator"" _inch(unsigned long long int n)
    {
        return n * 2.54;
    }
    

    unsigned int vehicle::year() const
    {
        return y;
    }

    

    double tire::diameter() const
    {
        return t;
    }

    

    double product::price() const
    {
        return p;
    }
    
    car::car(unsigned int a,double pr,double tdi):vehicle(a),product(pr),td{tdi}{}

    double car::tire_diameter()const{
        return td;
    }     
         


}