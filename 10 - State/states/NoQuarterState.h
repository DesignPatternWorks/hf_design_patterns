#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H

#include "State.h"
#include <iostream>

class Gumball;

class NoQuarterState : public State {
public:
	NoQuarterState(Gumball& gumball) : State(gumball) { }

	void turnCrank() {
		std::cout << "You first need to insert a quarter\n";
	}

	void ejectQuarter() {
		std::cout << "You haven't inserted a quarter\n";
	}

	void insertQuarter() {
		std::cout << "You inserted a quarter\n";
		gumball_.setState(gumball_.getHasQuarterState());
	}

	// should not happen
	void dispense() {
		std::cout << "You need to pay first\n";
	}
};


#endif