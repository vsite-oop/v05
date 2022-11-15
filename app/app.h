#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	double operator "" _inch(unsigned long long x);

	double operator "" _eur(unsigned long long n);

	class tire {
		double width;
	public: 
		tire(double const& width) :width(width){}
		double	diameter() {
	}
	};

	class vehicle {
		int year_of_production;
	public: 
		
		vehicle(int const& y) : year_of_production(y){}
				int year() {
		}
	};

	class product {
		double product_price;
	public:
		product(double const& price):product_price(price){}
		double price(){}
	};

	class car:public product,public vehicle,public tire {

	};
}