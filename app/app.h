#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
    double operator "" _inch(unsigned long long n);
    double operator "" _eur(unsigned long long m);

    class tire {
        double size;
    public:
        tire(const double& size);
        ~tire() = default;
        double diameter() const;
    };

    class vehicle {
        int builtDate;
    public:
        vehicle(const int& year);
        ~vehicle() = default;
        int year() const;
    };

    class product {
        double valuedAt;
    public:
        product(const double& value);
        ~product() = default;
        double price() const;
    };

    class car : public vehicle, public product {
        tire tires;
    public:
        car(const int& y, const double& p, const double& t);
        ~car() = default;
        double tire_diameter() const;
    };
}