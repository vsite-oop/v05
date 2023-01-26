#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator "" _eur(unsigned long long e) {
		return (e * 7.5345);
	}

	product::product(double product_price) :p_price(product_price) {}

	double product::price() {
		return p_price;
	}

	vehicle::vehicle(unsigned int vehicle_year) : v_year(vehicle_year) {}

	int vehicle::year() {
		return v_year;
	}

	double operator "" _inch(unsigned long long i) {
		return (i * 2.54);
	}

	tire::tire(double tire_diameter) : t_diameter(tire_diameter) {}

	double tire::diameter() {
		return t_diameter;
	}

	car::car(int car_year, double car_price, double tire_diameter) : vehicle(car_year), product(car_price), car_tire(tire_diameter) {}

	double car::tire_diameter() {
		return car_tire.diameter();
	}

}