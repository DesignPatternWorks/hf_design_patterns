#ifndef OBSERVABLE_H
#define OBSERVABLE_H
// abstract class for observer pattern

#include <vector>

class Observer;


class Observable {
public:

	virtual void add_observer(Observer* ob) = 0;
	virtual void remove_observer(Observer* ob) = 0;
	virtual void notifyObservers() = 0;

};

#endif