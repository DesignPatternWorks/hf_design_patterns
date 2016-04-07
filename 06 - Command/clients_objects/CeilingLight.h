/* Client gives us these object : they don't necessarily have a common interface
*/

#ifndef CEILINGLIGHT_H
#define CEILINGLIGHT_H


#include <iostream>

class CeilingLight {
public:
	void on() {
		std::cout << "Ceiling Light : turning on\n";
	}

	void off() {
		std::cout << "Ceiling Light : turning off\n";
	}

	void dim() {
		std::cout << "Ceiling Light : dimming\n";
	}
};

#endif