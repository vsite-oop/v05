#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
/*
User-defined literals (since C++11)
(Korisnièki-definirani tipovi)

Pišemo funkciju koja se poziva prilikom konverzije
(npr. kune u eure, ili promjer guma iz incha u cm i sl.).
Funkcija se mora zvati operator "" _nasaKonverzija.

Za sve cijele brojeve moramo pisati unsigned long long.
Za sve doubleove moramo pisati long long.
Za cm moram vratiti double jer npr. 188 cm je 1.88 m.

The "auto" keyword specifies that the type of the variable that is being
declared will be automatically deducted from its initializer.*/

	double operator "" _inch(unsigned long long n);

	double operator "" _eur(unsigned long long n);


	class tire {
		double tire_diameter;
	public:
		tire(double tyre_diameter);
		double diameter() const;
	};


	class vehicle {
		int vehicle_year;
	public:
		vehicle(int year);
		int year() const;
	};


	class product {
		double product_price;
	public:
		product(double);
		double price() const;
	};


	/*Car is a vehicle and car is a product, but car has a tire.
	vehicle is base of car.
	product is base of car.
	tire is NOT base of car.*/
	class car : public vehicle, public product {
		tire tire;
	public:
		car(int year, double price, double tire_diameter);
		double tire_diameter() const;
	};
}
