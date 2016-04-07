
#ifndef SINGLETON_H
#define SINGLETON_H


#include <memory>

class Singleton {
public:
	static std::shared_ptr<Singleton> getInstance();

private:
	Singleton() {}
	static std::shared_ptr<Singleton> instance; // unique_ptr would probably be more appropriate

};



#endif