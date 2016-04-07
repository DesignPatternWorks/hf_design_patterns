#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
public:
	virtual ~Weapon() { }
	virtual void fire() = 0;

};

#endif
