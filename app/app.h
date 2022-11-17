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
         tire(double d);
         double diameter()const;

        
    };
    class vehicle{
        int y;
        public:
         vehicle(int a);
        int year()const;

    };
    class product{
        double p;
        public:
         product(double pr);
         double price()const;

    };
    
    class car:public vehicle,public product{
        double td;
        public:
         car(int a,double pr,double tdi);
         double tire_diameter()const;

    };

}