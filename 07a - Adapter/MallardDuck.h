
#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"
#include <iostream>


class MallardDuck : public Duck {
public:
	void quack() {
		std::cout << "I'm a duck quacking\n";
	}

	void fly() {
		std::cout << "I'm a duck flying\n";
	}
};

#endif