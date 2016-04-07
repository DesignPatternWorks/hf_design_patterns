#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

// abstract class beverage
class Beverage {
public:
	Beverage() { description_ = "None"; }
	virtual ~Beverage() { }

	virtual double getCost() = 0;
	virtual std::string getDescription() { return description_; }

protected:
	std::string description_;
};


#endif
