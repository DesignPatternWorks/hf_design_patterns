/* Client gives us these object : they don't necessarily have a common interface
*/

#ifndef CEILINGFAN_H
#define CEILINGFAN_H


#include <iostream>

class CeilingFan {
public:
	enum Speed { OFF = 0, LOW, MEDIUM, HIGH };

	CeilingFan() : speed_(OFF) { }

	void high() {
		speed_ = HIGH;
		std::cout << "Ceiling Fan : setting speed to high\n";
	}

	void medium() {
		speed_ = MEDIUM;
		std::cout << "Ceiling Fan : setting speed to medium\n";
	}

	void low() {
		speed_ = LOW;
		std::cout << "Ceiling Fan : setting speed to low\n";
	}

	void off() {
		speed_ = OFF;
		std::cout << "Ceiling Fan : turning off\n";
	}

	int getSpeed() {
		return speed_;
	}

private:
	int speed_;
};

#endif