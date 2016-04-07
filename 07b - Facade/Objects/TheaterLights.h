#ifndef THEATERLIGHTS_H
#define THEATERLIGHTS_H

#include <iostream>


class TheaterLights {
public:
	void on() {
		std::cout << "Lights turned on.\n";
	}

	void off() {
		std::cout << "Lights turned off.\n";
	}
	
	void dim(int val) {
		std::cout << "Lights set to " << val << '\n';
	}
};

#endif