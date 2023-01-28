#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator "" _inch(unsigned long long n) {
		return n * 2.54;
	}

	double operator "" _eur(unsigned long long n) {
		return n * 7.5345;
	}

	tire::tire(double diameter){
		_diameter = diameter;
	}

	double tire::diameter() {
		return _diameter;
	}

	vehicle::vehicle(int year) {
		_year = year;
	}

	int vehicle::year() {
		return _year;
	}

	product::product(double price) {
		_price = price;
	}

	double product::price() {
		return _price;
	}

	car::car(int year, double price, double diameter) : vehicle(year), product(price), _tire(diameter) {}

	double car::tire_diameter() {
		return _tire.diameter();
	}
}