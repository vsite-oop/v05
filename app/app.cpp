#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator "" _inch(unsigned long long length) {
		return length * 2.54;
	}

	double operator "" _eur(unsigned long long money) {
		return money * 7.5345;
	}

	vehicle::vehicle(int year) {
		yr = year;
	}

	tire::tire(double size) {
		size_of_tire = size;
	}

	product::product(double price) {
		pr = price;
	}

	car::car(int yearof, double priceof, double size_of_tires) : vehicle(yearof), product(priceof), cars_tire(size_of_tires) {}

	int vehicle::year() {
		return yr;
	}

	double tire::diameter() {
		return size_of_tire;
	}

	double product::price() {
		return pr;
	}

	double car::tire_diameter() {
		return cars_tire.diameter();
	}
}