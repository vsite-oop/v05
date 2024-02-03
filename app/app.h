#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5
{
	double operator "" _inch(unsigned long long length);

	double operator "" _eur(unsigned long long money);

	class vehicle {
		int yr;
	public:
		vehicle(int yr);
		int year();
	};

	class product {
		double pri;
	public:
		product(double pr);
		double price();
	};

	class tire {
		double size_of_tire;
	public:
		tire(double size_of_tire);
		double diameter();
	};

	class car : public vehicle, public product {
		tire cars_tire;
	public:
		car(int yr, double pr, double size_of_tire);
		double tire_diameter();
	};
}