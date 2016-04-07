#ifndef CD_WHIP_H
#define CD_WHIP_H

#include "decorator.h"

class CdWhip : public Decorator {
public:
	CdWhip(Beverage *b) : Decorator(b) {

	}

	~CdWhip() { }

	std::string getDescription() {
		return beverage_->getDescription() + ", whip";
	}

	double getCost() {
		return beverage_->getCost() + 0.20;
	}
};


#endif
