#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	vehicle::vehicle(int year_of_manufacture) {
		this->yom = year_of_manufacture;
	}
	int vehicle::year() {
		return this->yom;
	}

	tire::tire(double tire_diameter) {
		this->dia = tire_diameter;
	}
	double tire::diameter() {
		return this->dia;
	}

	product::product(double product_price) {
		this->pr = product_price;
	}
	double product::price() {
		return this->pr;
	}

	car::car(int year_of_manufacture, double price, double tire_diameter) : 
	vehicle(year_of_manufacture), product(price), t(tire_diameter){}

	double car::tire_diameter() {
		return t.diameter();
	}
	
	double operator ""_inch(unsigned long long in) {
		return in * 2.54;
	}
	double operator ""_eur(unsigned long long eu) {
		return eu * 7.5345;
	}
}