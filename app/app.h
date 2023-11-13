#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	double operator "" _inch(unsigned long long d);
	double operator "" _eur(unsigned long long d);

	class vehicle {
		int productionYear;
	public:
		vehicle(int yr);
		int year();
	};

	class tire {
		double sizeOfTire;
	public:
		tire(double size_of_tire);
		double diameter();
	};


	class product {
		double productPrice;
	public:
		product(double p);
		double price();
	};

	class car : public vehicle, public product {
		tire newTire;
	public:
		car(int yearofproduction, double carprice, double sizeoftire);
		double tire_diameter();
	};
}