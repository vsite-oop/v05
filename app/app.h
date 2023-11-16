#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	double operator "" _inch(unsigned long long x);
	double operator "" _eur(unsigned long long kn);

	class tire {
		double dia;
	public:
		tire(double dia);
		double diameter() const;
	};
	class vehicle {
		int YoM;
	public:
		vehicle(const int y);
		int year() const;
	};
	class product {
		double value;
	public:
		product(double value);
		double price() const;

	};
	class car: public vehicle, public product {
		tire tyre;

	public:
		car(const int y, double value, double dia);
		double tire_diameter() const;
	};
}