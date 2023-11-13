#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator "" _inch(unsigned long long d) {
		return d * 2.54;
	}
	double operator "" _eur(unsigned long long d) {
		return d * 7.5345;
	}

	vehicle::vehicle(int year) {
		productionYear = year;
	}

	int vehicle::year (){
		return productionYear;
	}

	tire::tire(double sot) {
		sizeOfTire = sot;
	}

	double tire::diameter() {
		return sizeOfTire;
	}

	product::product(double price) {
		productPrice = price;
	}

	double product::price() {
		return productPrice;
	}
	
	car::car(int yearofproduction, double carprice, double sizeoftire) : vehicle(yearofproduction), product(carprice), newTire(sizeoftire){}

	double car::tire_diameter() {
		return newTire.diameter();
	}
}