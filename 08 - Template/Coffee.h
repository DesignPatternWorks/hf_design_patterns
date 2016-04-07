#ifndef COFFEE_H
#define COFFEE_H


#include "Caffeine.h"
#include <iostream>
#include <string>

class Coffee : public Caffeine {
public:

	void brew() {
		std::cout << "Dripping coffee through filter\n";
	}

	void addCondiments() {
		std::cout << "Adding sugar and milk\n";
	}

	bool customerWantsCondiments() {
		std::string answer = getUserInput();
		if (answer[0] == 'y' || answer[0] == 'Y') {
			return true;
		}
		else {
			return false;
		}
	}

	std::string getUserInput() {
		std::string answer("");

		std::cout << "Would you like Milk and Sugar for your coffee (y/n)?";
		std::cin >> answer;

		if (answer == "") {
			return "no";
		}
		return answer;
	}
};


#endif