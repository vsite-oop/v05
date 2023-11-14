#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
    double operator"" _inch(unsigned long long n);

    double operator"" _eur(unsigned long long n);

    class tire {
        double d;
    public:
        tire(double n) : d(n) {};

        double diameter();
    };

    class vehicle {
        int y;
    public:
        vehicle(int n) : y(n) {};
        
        int year();
    };

    class product {
        double p;
    public:
        product(double n) : p(n) {};

        double price();
    };


    class car : public vehicle, public product {
        tire t;
    public:
        car(int y, double p, double d) : vehicle(y), product(p), t(d) {};

        double tire_diameter();
    };
}