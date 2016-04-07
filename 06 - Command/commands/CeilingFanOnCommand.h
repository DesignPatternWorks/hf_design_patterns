
#ifndef CEILINGFANONCOMMAND_H
#define CEILINGFANONCOMMAND_H

#include "../clients_objects/CeilingFan.h"
#include "Command.h"
#include <memory>

class CeilingFanOnCommand : public Command {
public:
	CeilingFanOnCommand(const std::shared_ptr<CeilingFan>& ceilingFan) : ceilingFan_(ceilingFan) { }

	void execute() {
		previousSpeed_ = ceilingFan_->getSpeed();
		ceilingFan_->high();
	}

	void undo() {
		if (previousSpeed_ == CeilingFan::LOW)
			ceilingFan_->low();
		else if (previousSpeed_ == CeilingFan::MEDIUM)
			ceilingFan_->medium();
		else if (previousSpeed_ == CeilingFan::HIGH)
			ceilingFan_->high();
		else
			ceilingFan_->off();
	}

private:
	std::shared_ptr<CeilingFan> ceilingFan_;
	int previousSpeed_;

};

#endif