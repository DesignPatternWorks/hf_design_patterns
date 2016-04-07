/* Client gives us these object : they don't necessarily have a common interface
*/

#ifndef LIGHT_H
#define LIGHT_H


#include <iostream>

class Light {
public:
	void off() {
		std::cout << "Light : turning off\n";
	}

	void on() {
		std::cout << "Light : turning on\n";
	}

};

#endif