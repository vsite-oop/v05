#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
    double operator "" _inch(unsigned long long n) {
        return n * 2.54;
    }

    double operator "" _eur(unsigned long long m) {
        return m * 7.5345;
    }

    tire::tire(const double& dia) 
        : size{ dia }
    {
    }

    double tire::diameter() const {
        return size;
    }

    vehicle::vehicle(const int& year)
        : builtDate{ year }
    {
    }

    int vehicle::year() const {
        return builtDate;
    }

    product::product(const double& value) 
        : valuedAt{ value }
    {
    }

    double product::price() const {
        return valuedAt;
    }

    car::car(const int& y, const double& p, const double& t) 
        : vehicle{ y }
        , product{ p }
        , tires{ tire(t) }
    {
    }

    double car::tire_diameter() const {
        return tires.diameter();
    }
}