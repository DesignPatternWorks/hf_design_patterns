#ifndef CHARACTER_H
#define CHARACTER_H

class Weapon;

class Character {
public:

	Character();
	~Character();

	void setWeapon(Weapon *w);
	void play();


private:
	Weapon *w_;
};

#endif