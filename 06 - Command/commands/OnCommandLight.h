
#ifndef ONCOMMANDLIGHT_H
#define ONCOMMANDLIGHT_H

#include "Command.h"

#include <memory>


class Light;

class OnCommandLight : public Command {
public:
	OnCommandLight(const std::shared<Light>& light) : light_(light) { }

	void execute() {
		light_.on();
	}

	void undo() {
		light.off();
	}

private:
	std::shared_ptr<Light> light_;
};


#endif