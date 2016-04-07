
#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "../clients_objects/Light.h"
#include <memory>


class LightOnCommand : public Command {
public:
	LightOnCommand(const std::shared_ptr<Light>& light) : light_(light) { }

	void execute() {
		light_->on();
	}

	void undo() {
		light_->off();
	}

private:
	std::shared_ptr<Light> light_;
};


#endif