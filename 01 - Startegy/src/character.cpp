#include "widgets/w_weapon.h"
#include "widgets/w_gun.h"
#include "character.h"

#include <iostream>


Character::Character() : w_(nullptr) {
	// By default it gets a gun
	setWeapon(new Gun());
}

Character::~Character() {
	std::cout << "weapon is being shutdown" << std::endl;
	delete w_;
}

void Character::play() {
	w_->fire();
}

void Character::setWeapon(Weapon *w) {
	if (w_ != nullptr) {
		delete w_;
	}
	w_ = w;
}
