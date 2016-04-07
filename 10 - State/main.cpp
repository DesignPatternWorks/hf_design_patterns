#include <iostream>

#include "Gumball.h"

int main() {
	Gumball g(10);

	g.ejectQuarter();
	g.insertQuarter();
	g.turnCrank();

	g.turnCrank();

	g.insertQuarter();
	g.turnCrank();
	g.insertQuarter();
	g.turnCrank();
}