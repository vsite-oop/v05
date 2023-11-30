#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
    double operator"" _inch(unsigned long long num);
    double operator"" _eur(unsigned long long eu);

    class tire {
        double d;
    public:
        tire(double value) : d(value){};
        double diameter();
    };

    class vehicle {
        int yr;
    public:
        vehicle(int value) : yr(value){};
        int year();
    };

   

    class product {
        double pr;
    public:
        product(double value) : pr(value){};
        double price();
    };


    class car : public vehicle, public product {
        tire t;
    public:
        car(int yr, double pr, double d) : vehicle(yr), product(pr), t(d){};

        double tire_diameter();
    };
}