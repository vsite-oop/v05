#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5
{
	double operator "" _eur(unsigned long long e);

	class product {
	private:
		double p_price;
	public:
		product(double product_price);
		double price();
	};

	class vehicle {
	private:
		unsigned int v_year;
	public:
		vehicle(unsigned int vehicle_year);
		int year();
	};

	double operator "" _inch(unsigned long long i);

	class tire {
	private:
		double t_diameter;
	public:
		tire(double tire_diameter);
		double diameter();
	};

	class car : public product, public vehicle {
	private:
		tire car_tire;
	public:
		car(int car_year, double car_price, double car_tire_diameter);
		double tire_diameter();
	};

}