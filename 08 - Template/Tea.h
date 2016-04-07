#ifndef TEA_H
#define TEA_H

#include "Caffeine.h"
#include <iostream>

class Tea : public Caffeine {
public:
	void brew() {
		std::cout << "I'm a tea and I'm brewing\n";
	}

	void addCondiments() {
		std::cout << "I'm a tea and I'm adding condiment\n";
	}

	bool customerWantsCondiments() {
		return false;
	}
};

#endif