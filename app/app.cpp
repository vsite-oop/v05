#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator "" _inch(unsigned long long n) {
		return 2.54 * n;
	}
	double operator "" _eur(unsigned long long n) {
		return 7.543 * n;
	}

	double diameter() {};
	int year() {};
	double price{};
	
}