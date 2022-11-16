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
         tire::tire(double d);
         double diameter()const;

        
    };
    class vehicle{
        unsigned int y;
        public:
         vehicle::vehicle(unsigned int a);
         unsigned int year()const;

    };
    class product{
        double p;
        public:
         product::product(double pr);
         double price()const;

    };
    
    class car:public vehicle,public product{
        double td;
        public:
         car::car(unsigned int a,double pr,double tdi);
         double tire_diameter()const;

    };

}