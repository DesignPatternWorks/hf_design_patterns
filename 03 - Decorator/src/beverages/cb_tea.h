#ifndef CB_TEA_H
#define CB_TEA_H

#include "beverage.h"

class CbTea : public Beverage {
public:
	CbTea() {
		description_ = "Tea";
	}

	double getCost() {
		return 1.00;
	}
};

#endif