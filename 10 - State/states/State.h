#ifndef STATE_H
#define STATE_H

#include <memory>


class Gumball;

class State {
public:
	State(Gumball& gumball) : gumball_(gumball) { }
	virtual ~State() { }
	
	virtual void turnCrank() = 0;
	virtual void ejectQuarter() = 0;
	virtual void insertQuarter() = 0;
	virtual void dispense() = 0;

protected:
	Gumball& gumball_;
};

#endif