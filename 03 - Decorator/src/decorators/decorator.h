#ifndef DECORATOR_H
#define DECORATOR_H

#include "../beverages/beverage.h"

class Decorator : public Beverage {
public:
	Decorator(Beverage* b) {
		beverage_ = b;
	}

	virtual ~Decorator() {

	}

	virtual std::string getDescription() = 0;

protected:
	Beverage* beverage_;
};

#endif
