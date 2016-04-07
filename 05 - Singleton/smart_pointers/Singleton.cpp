
#include "Singleton.h"


// instance could be assigned from the get go but for performance optimization
// it is better to instanciate it when needed
std::shared_ptr<Singleton> Singleton::instance;	


std::shared_ptr<Singleton> Singleton::getInstance() {
	if (instance == nullptr) {
		// requires 2 allocations (1 for data and 1 ref counting)
		// better to use make_shared but required some trick to instantiate private constructor
		instance = std::shared_ptr<Singleton>(new Singleton());
		return instance;
	}
	return instance;
}

