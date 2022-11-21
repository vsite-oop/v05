#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	/*===User defined literals===*/
	double operator "" _inch(unsigned long long n) {
		return n * 2.54;
	}

	double operator "" _eur(unsigned long long n) {
		return n * 7.5345;
	}


	/*===Class tire===*/
	tire::tire(double diameter) : tire_diameter(diameter) {

	}

	double tire::diameter() const{
		return tire_diameter;
	}


	/*===Class vehicle===*/
	vehicle::vehicle(int year) : vehicle_year(year) {

	}

	int vehicle::year() const {
		return vehicle_year;
	}


	/*===Class product===*/
	product::product(double price) : product_price(price) {

	}

	double product::price() const {
		return product_price;
	}


	/*===Class car===*/
	car::car(int year, double price, double tire_diameter) : vehicle(year), \
		product(price), tire(tire_diameter) {

	}

	double car::tire_diameter() const {
		return tire.diameter();
	}
}
