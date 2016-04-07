
#ifndef TURKEYADAPTER_H
#define TURKEYADAPTER_H

#include "Duck.h"
#include "Turkey.h"
#include <memory>

class TurkeyAdapter : public Duck {
public:
	TurkeyAdapter(Turkey::ptr&& turkey) : turkey_(std::move(turkey)) { }

	void quack() {
		turkey_->gobble();
	}

	void fly() {
		for (int i = 0; i < 5; ++i)
			turkey_->fly();
	}

private:
	Turkey::ptr turkey_;
};

#endif