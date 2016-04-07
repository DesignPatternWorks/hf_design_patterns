#include "Singleton.h"
// #include <iostream>


int main() {
	auto s1 = Singleton::getInstance();
	auto s2 = Singleton::getInstance();


	Singleton::releaseInstance();
}
