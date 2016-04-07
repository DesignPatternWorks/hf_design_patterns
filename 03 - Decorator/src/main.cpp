#include "decorators/cd_whip.h"
#include "decorators/cd_milk.h"
#include "beverages/cb_coffee.h"
#include "beverages/cb_tea.h"

#include <iostream>


int main() {
	Beverage *b = new CbCoffee();
	Decorator *d1 = new CdMilk(b);
	Decorator *d2 = new CdWhip(d1);

	std::cout << d2->getDescription() << std::endl << d2->getCost() << std::endl;

	delete d2;
	return 0;
}