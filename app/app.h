#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	double operator "" _inch(unsigned long long int broj);
	class tire {
		double b;
	public:
		 tire(double broj) : b(broj) {}
		 double diameter();
	};
	class vehicle
	{
		int godina;
	public:
		vehicle(int g) : godina(g) {}
		int year();
	};
	double operator ""_eur(unsigned long long int broj);
	class product {
		double cijena;
	public:
		product(double d) : cijena(d) {};
		double price();
	};
	class car : public vehicle ,public product{
		tire t;
	public:
		car(int g, double c, double i) : vehicle(g), product(c), t(i) {}
		double tire_diameter();

	};
}