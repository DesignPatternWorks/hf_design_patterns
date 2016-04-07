
#include "Singleton.h"


// instance could be assigned from the get go but for performance optimization
// it is better to instanciate it when needed
std::shared_ptr<Singleton> Singleton::instance;	


std::shared_ptr<Singleton> Singleton::getInstance() {
	if (instance == nullptr) {
		struct SingletonGenerator : public Singleton { };
		instance = std::shared_ptr<Singleton>(std::make_shared<SingletonGenerator>());
		return instance;
	}
	return instance;
}

