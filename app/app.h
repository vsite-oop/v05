#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	class vehicle {
		int yom;
	public:
		vehicle(int year_of_manufacture);
		int year();
		~vehicle() {}
	};

	class tire {
		double dia;
	public:
		tire(double tire_diameter);
		double diameter();
		~tire() {}
	};

	class product {
		double pr;
	public:
		product(double product_price);
		double price();
		~product() {}
	};

	class car : public vehicle, public product {
		tire t;
	public:
		car(int year_of_manufacture, double price, double tire_diameter);
		double tire_diameter();
		~car() {}
	};

	double operator ""_inch(unsigned long long in);
	double operator ""_eur(unsigned long long eu);
}