
#ifndef WILDTURKEY_H
#define WILDTURKEY_H

#include "Turkey.h"
#include <iostream>


class WildTurkey : public Turkey {
public:
	void fly() {
		std::cout << "I'm a turkey flying a little\n";
	}
	
	void gobble() {
		std::cout << "I'm a turkey gobbling\n";
	}
};

#endif