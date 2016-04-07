#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H

#include "State.h"
#include <iostream>

class Gumball;

class SoldOutState : public State {
public:
	SoldOutState(Gumball& gumball) : State(gumball) { }

	void insertQuarter() {
		std::cout << "Sorry, there's no more gumballs right now...\n";
	}

	void ejectQuarter() {
		std::cout << "No quarter has been inserted\n";
	}

	void turnCrank() {
		std::cout << "Machine is out of gums, crunk can't be turned\n";
	}

	void dispense() {
		std::cout << "No more balls to dispense...\n";
	}
};

#endif