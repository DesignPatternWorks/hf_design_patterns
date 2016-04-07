
#ifndef TURKEY_H
#define TURKEY_H

#include <memory>

class Turkey {
public:
	using ptr = std::unique_ptr<Turkey>;
	
	virtual void fly() = 0;
	virtual void gobble() = 0;
};


#endif