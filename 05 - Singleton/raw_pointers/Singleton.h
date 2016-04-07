
#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton {
public:
	static Singleton* getInstance();
	static void releaseInstance();

private:
	Singleton() {} // deleted wouldn't work because the class itself has to create the obhject right?
	static Singleton* instance; // unique_ptr?

};

#endif