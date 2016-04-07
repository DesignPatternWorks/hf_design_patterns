#ifndef POPCORNPOPPER_H
#define POPCORNPOPPER_H

#include <iostream>

class PopcornPopper {
public:
	void on() {
		std::cout << "Popper turned on.\n";
	}

	void off() {
		std::cout << "Popper turned off.\n";
	}

	void pop() {
		std::cout << "Popper making popcorn.\n";
	}
};

#endif