#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
    double operator "" _eur(unsigned long long int n);
    
    double operator "" _inch(unsigned long long int n);

    class tire{
        double t;
        public:
         tire(double d) : t{d} {}
         double diameter()const;

        
    };
    class vehicle{
        unsigned int y;
        public:
         vehicle(unsigned int a) : y{a} {}
         unsigned int year()const;

    };
    class product{
        double p;
        public:
         product(double pr) : p{pr} {}
         double price()const;

    };
    
    class car:public vehicle,public product{
        double td;
        public:
         car(unsigned int a,double pr,double tdi):vehicle{a},product{pr},td{tdi}{}
         double tire_diameter()const;

    };

}