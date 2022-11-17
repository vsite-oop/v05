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
    vehicle::vehicle(int a) : y{a} {}

    int vehicle::year() const
    {
        return y;
    }

    tire::tire(double d) : t{d} {}

    double tire::diameter() const
    {
        return t;
    }

    product::product(double pr) : p{pr} {}

    double product::price() const
    {
        return p;
    }
    
    car::car(int a,double pr,double tdi):vehicle(a),product(pr),td(tdi){}
    
    double car::tire_diameter()const{
		return td;
	}        
         


}