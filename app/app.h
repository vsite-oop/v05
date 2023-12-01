#pragma once
#include <string>
#include <memory>


namespace vsite::oop::v5 
{
    double operator"" _inch(unsigned long long in);

    double operator"" _eur(unsigned long long e);

    class tire {
        double d;
    public:
        tire(double e) : d(e) {};

        double diameter();
    };

    class vehicle {
        int y;
    public:
        vehicle(int e) : y(e) {};

        int year();
    };

    class product {
        double p;
    public:
        product(double e) : p(e) {};

        double price();
    };


    class car : public vehicle, public product {
        tire t;
    public:
        car(int y, double p, double d) : vehicle(y), product(p), t(d) {};

        double tire_diameter();
    };
}