
#ifndef SINGLETON_H
#define SINGLETON_H


#include <memory>

class Singleton {
public:
	static std::shared_ptr<Singleton> getInstance();

private:
	Singleton() {} // deleted wouldn't work because the class itself has to create the obhject right?
	static std::shared_ptr<Singleton> instance; // unique_ptr?

};



#endif