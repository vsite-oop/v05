#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	double operator "" _inch(unsigned long long n);

	double operator "" _eur(unsigned long long n);
	

	class tire {
		double _diameter;
	public:
		tire(double diameter);
		double diameter();
	};

	class vehicle {
		int _year;
	public:
		vehicle(uint32_t year);
		int year();
	};

	class product {
		double _price;
	public:
		product(double price);
		double price();
	};


	class car : public vehicle, public product {
		tire t;
	public:
		car(int year, double price, double diameter);
		double tire_diameter();
	};
}