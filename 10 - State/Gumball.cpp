#include "Gumball.h"
#include "states/State.h"
#include "states/NoQuarterState.h"
#include "states/HasQuarterState.h"
#include "states/SoldOutState.h"
#include "states/SoldState.h"
#include "states/WinnerState.h"

Gumball::Gumball(int numberGumballs) : count_(numberGumballs) {
	noQuarterState_ = std::make_unique<NoQuarterState>(*this);
	hasQuarterState_ = std::make_unique<HasQuarterState>(*this);
	soldOutState_ = std::make_unique<SoldOutState>(*this);
	soldState_ = std::make_unique<SoldState>(*this);
	winnerState_ = std::make_unique<WinnerState>(*this);

	state_ = soldOutState_.get();
	if (numberGumballs > 0)
		state_ = noQuarterState_.get();
}

Gumball::~Gumball() {

}
	
void Gumball::turnCrank() {
	state_->turnCrank();
	state_->dispense();
}

void Gumball::ejectQuarter() {
	state_->ejectQuarter();
}

void Gumball::insertQuarter() {
	state_->insertQuarter();
}

void Gumball::dispense() {
	state_->dispense();
}

void Gumball::setState(State* state) {
	state_ = state;
}

void Gumball::releaseBall() {
	std::cout << "A gumball comes rolling out the slot...\n";
	if (count_ > 0) {
		count_--;
	}
}

State* Gumball::getNoQuarterState() {
	return noQuarterState_.get();
}

State* Gumball::getHasQuarterState() {
	return hasQuarterState_.get();
}

State* Gumball::getSoldOutState() {
	return soldOutState_.get();
}

State* Gumball::getSoldState() {
	return soldState_.get();
}

State* Gumball::getWinnerState() {
	return winnerState_.get();
}
