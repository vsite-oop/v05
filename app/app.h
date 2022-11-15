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
		tire(double  width) :width(width){} 
		double	diameter();
	};
	
	class vehicle {
		int year_of_production;
	public: 
		
		vehicle(int  year_of_production) { this->year_of_production = year_of_production; } 
		~vehicle(){};
		int year();
	};

	class product {
		double product_price;
	public:
		product(double price):product_price(price){}
		double price();
	};

	class car:public vehicle {
		tire t;
		double price;
	public:
		car(int year_of_production , tire t , double price) {}
		
	};
}