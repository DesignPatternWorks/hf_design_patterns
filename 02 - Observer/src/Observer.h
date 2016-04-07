// abstract class for observer
#ifndef OBSERVER_H
#define OBSERVER_H

#include "Observable.h"

class Observer {
public:
	Observer(Observable *subject) : subject_(subject) {
		subject_->add_observer(this);
	}

	virtual void update(Observable* subject) = 0;

private:
	Observable* subject_;
};

#endif