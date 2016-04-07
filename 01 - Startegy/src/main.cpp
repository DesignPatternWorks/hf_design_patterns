#include <iostream>
#include "character.h"

#include "widgets/w_racket.h"
#include "widgets/w_gun.h"


int main() {
	Character *c = new Character();
	c->play();
	c->setWeapon(new Racket());
	c->play();
	c->setWeapon(new Gun());
	delete c;

	return EXIT_SUCCESS;
}