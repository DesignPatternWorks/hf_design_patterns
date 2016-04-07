
#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "Command.h"
#include "../clients_objects/Light.h"
#include <memory>


class LightOffCommand : public Command {
public:
	LightOffCommand(const std::shared_ptr<Light>& light) : light_(light) { }

	void execute() {
		light_->off();
	}

	void undo() {
		light_->on();
	}

private:
	std::shared_ptr<Light> light_;
};


#endif