#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5
{
	class product {
	private:
		double product_price;
	public:
		product(double product_price);
		double price();
	};

	class vehicle {
	private:
		unsigned int vehicle_year;
	public:
		vehicle(unsigned int vehicle_year);
		unsigned int year();
	};

	class tire {
	private:
		double tire_diameter;
	public:
		tire(double tire_diameter);
		double tire_diameter();
	};

	class car : public product, vehicle, tire {

	};

}