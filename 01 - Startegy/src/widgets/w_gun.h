#ifndef W_GUN_H
#define W_GUN_H

#include "w_weapon.h"
#include <iostream>


class Gun : public Weapon {
public:
	~Gun() { }
	
	void fire() {
		std::cout << "I'm firing a bullet." << std::endl;
	}

};

#endif
