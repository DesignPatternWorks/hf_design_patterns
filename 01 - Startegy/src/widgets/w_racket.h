#ifndef W_RACKET_H
#define W_RACKET_H

#include "w_weapon.h"
#include <iostream>


class Racket : public Weapon {
public:
	~Racket() { }
	
	void fire() {
		std::cout << "I'm throwing my racket." << std::endl;
	}

};

#endif
