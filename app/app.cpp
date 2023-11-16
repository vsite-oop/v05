#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator "" _inch(unsigned long long x) {
		return x * 2.54;
	}
	double operator "" _eur(unsigned long long kn) {
		return kn * 7.5345;
	}

	tire::tire(double dm) {
		dia = dm;
	}
	double tire::diameter() const{
		return dia;
	}

	vehicle::vehicle(const int y) {
		YoM = y;
	}
	int vehicle::year() const{
		return YoM;
	}

	product::product(double val) {
		value = val;
	}
	double product::price() const{
		return value;
	}

	car::car(const int y, double val, double dm) : vehicle(y), product(val), tyre(dm) {}
	
	double car::tire_diameter() const{
		return tyre.diameter();
	}
}