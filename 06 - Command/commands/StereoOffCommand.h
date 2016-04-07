
#ifndef STEREOOFFCOMMAND_H
#define STEREOOFFCOMMAND_H

#include "Command.h"
#include "../clients_objects/Stereo.h"
#include <memory>

class StereoOffCommand : public Command {
public:
	StereoOffCommand(const std::shared_ptr<Stereo>& stereo) : stereo_(stereo) { }

	void execute() {
		stereo_->off();
		// stereo_->setCd();
		// stereo_->setVolume(11);
		// set volume back ..
	}

	void undo() {
		stereo_->on();
		// save previous states
	}

private:
	std::shared_ptr<Stereo> stereo_;
};


#endif