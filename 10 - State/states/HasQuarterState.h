#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H


#include "State.h"
#include <iostream>
#include <random>

class Gumball;

class HasQuarterState : public State {
public:
	HasQuarterState(Gumball& gumball) : State(gumball) { }
	
	void turnCrank() {
		std::cout << "You turned...\n";
		std::default_random_engine generator;
		std::uniform_int_distribution<int> distribution(1, 10);
		int number = distribution(generator);
		if (number == 1 && gumball_.getCount() > 1) {
			gumball_.setState(gumball_.getWinnerState());
		}
		else {
			gumball_.setState(gumball_.getSoldState());
		}
	}

	void ejectQuarter() {
		std::cout << "Quarter returned\n";
		gumball_.setState(gumball_.getNoQuarterState());
	}

	void insertQuarter() {
		std::cout << "You already inserted a quarter\n";
	}

	void dispense() {
		std::cout << "No gumball dispensed\n";
	}
};


#endif 