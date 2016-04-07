#ifndef CB_COFFEE_H
#define CB_COFFEE_H

#include "beverage.h"

class CbCoffee : public Beverage {
public:
	CbCoffee() {
		description_ = "Coffee";
	}

	double getCost() {
		return 1.10;
	}
};


#endif