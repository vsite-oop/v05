#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double tire::diameter()
	{
		return b ;
	}
	int vehicle::year()
	{
		return godina;
	}
	double operator ""_eur(unsigned long long int broj)
	{
		return broj * 7.5345;
	}
	double operator ""_inch(unsigned long long int  broj)
	{
		return broj * 2.54;
	}
	double product::price()
	{
		return cijena ;
	}
	double car::tire_diameter()
	{
		return t.diameter() ;
	}
}