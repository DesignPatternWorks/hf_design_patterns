#ifndef WINNERSTATE_H
#define WINNERSTATE_H

#include "State.h"

class Gumball;

class WinnerState : public State {
public:
	WinnerState(Gumball& gumball) : State(gumball) { }

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
		std::cout << "WINNER !!! Here's a second gumball\n";
		gumball_.releaseBall();
		if (gumball_.getCount() > 0) {
			std::cout << "WINNER !!! Here's a second gumball\n";
			gumball_.releaseBall();
			gumball_.setState(gumball_.getNoQuarterState());
		}
		else {
			std::cout << "Ooops out of gumballs...\n";
			gumball_.setState(gumball_.getSoldOutState());
		}
	}
};

#endif