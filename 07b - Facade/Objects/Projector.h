#ifndef PROJECTOR_H
#define PROJECTOR_H

#include <iostream>

class Projector {
public:
	void on() {
		std::cout << "Projector turned on.\n";
	}

	void off() {
		std::cout << "Projector turned off.\n";
	}

	void tvMode() {}
	void wideScreenMode() {
		std::cout << "Projector set to widescreen.\n";
	}
};


#endif