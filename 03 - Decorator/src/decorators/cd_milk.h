#ifndef CD_MILK_H
#define CD_MILK_H

#include "decorator.h"

class CdMilk : public Decorator {
public:
	CdMilk(Beverage *b) : Decorator(b) {

	}

	std::string getDescription() {
		return beverage_->getDescription() + ", milk";
	}

	double getCost() {
		return beverage_->getCost() + 0.30;
	}
};

#endif