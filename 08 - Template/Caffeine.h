#ifndef CAFFEINE_H
#define CAFFEINE_H

#include <iostream>

class Caffeine {
public:
	// general algorithm
	void prepareRecipe() {
		boilWater();
		brew();
		pourInCup();
		if (customerWantsCondiments()) {
			addCondiments();
		}
	}

	virtual void brew() = 0;

	virtual void addCondiments() = 0;

	void boilWater() {
		std::cout << "Boiling Water\n";
	}

	void pourInCup() {
		std::cout << "Pouring into cup\n";
	}

	// hook : returns true by default so clients can customize the behavior
	virtual bool customerWantsCondiments() {
		return true;
	}
};


#endif