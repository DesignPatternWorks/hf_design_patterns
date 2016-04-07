#ifndef GUMBALL_H
#define GUMBALL_H

#include <memory>

class State;
class NoQuarterState;
class HasQuarterState;
class SoldOutState;
class SoldState;
class WinnerState;

class Gumball {
public:
	Gumball(int numberGumballs);
	~Gumball();

	void turnCrank();
	void ejectQuarter();
	void insertQuarter();
	void dispense();

	void refill();
	void releaseBall();	
	void setState(State* state);

	int getCount() { return count_; }
	State* getNoQuarterState();
	State* getHasQuarterState();
	State* getSoldOutState();
	State* getSoldState();
	State* getWinnerState();

private:
	int count_ = 0;
	State* state_;
	std::unique_ptr<NoQuarterState> noQuarterState_;
	std::unique_ptr<HasQuarterState> hasQuarterState_;
	std::unique_ptr<SoldOutState> soldOutState_;
	std::unique_ptr<SoldState> soldState_;
	std::unique_ptr<WinnerState> winnerState_;
};


#endif