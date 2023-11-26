#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5
{
    double operator"" _inch(unsigned long long x);
    double operator"" _eur(unsigned long long x);

    class product 
    {
        double pr;
    public:
        product(double x) : pr(x) {};

        double price();
    };


    class vehicle 
    {
        int yr;
    public:
        vehicle(int x) : yr(x) {};

        int year();
    };

    class tire 
    {
        double dia;
    public:
        tire(double x) : dia(x) {};

        double diameter();
    };


    class car : public product, public vehicle 
    {
        tire t;
    public:
        car(int yr, double pr, double dia) : vehicle(yr), product(pr), t(dia) {};

        double tire_diameter();
    };
}