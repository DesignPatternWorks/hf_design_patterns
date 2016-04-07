
#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include <memory>

class Duck {
public:
	using ptr = std::unique_ptr<Duck>;
	
	virtual void quack() = 0; 
	virtual void fly() = 0;
};

#endif