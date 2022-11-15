#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator "" _inch(unsigned long long n) {
		return 2.54 * n;
	}
	double operator "" _eur(unsigned long long n) {
		return 7.5345 * n;
	}

	
	int vehicle::year() { return this->year_of_production; };

	double tire::diameter() { return this->width; }
	 
	double product::price() { return this->product_price; }
	
}