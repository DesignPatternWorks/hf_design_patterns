#ifndef SOLDSTATE_H
#define SOLDSTATE_H

#include "State.h"

class Gumball;

class SoldState : public State {
public:
	SoldState(Gumball& gumball) : State(gumball) { }

	void insertQuarter() {
		std::cout << "Please wait we're already giving you a gumball\n";
	}

	void ejectQuarter() {
		std::cout << "Sorry you already turned the crank\n";
	}

	void turnCrank() {
		std::cout << "Turning twice doesn't get you another gumball\n";
	}

	void dispense() {
		gumball_.releaseBall();
		if (gumball_.getCount() > 0) {
			gumball_.setState(gumball_.getNoQuarterState());
		}
		else {
			std::cout << "Ooops out of gumballs...\n";
			gumball_.setState(gumball_.getSoldOutState());
		}
	}
};

#endif