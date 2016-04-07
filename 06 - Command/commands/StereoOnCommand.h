
#ifndef STEREOONCOMMAND_H
#define STEREOONCOMMAND_H

#include "Command.h"
#include "../clients_objects/Stereo.h"
#include <memory>

class StereoOnCommand : public Command {
public:
	StereoOnCommand(const std::shared_ptr<Stereo>& stereo) : stereo_(stereo) { }

	void execute() {
		stereo_->on();
		stereo_->setCd();
		stereo_->setVolume(11);
	}

	void undo() {
		stereo_->off();
		// save previous states
	}

private:
	std::shared_ptr<Stereo> stereo_;
};


#endif