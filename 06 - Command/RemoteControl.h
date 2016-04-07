/* Remote Control acts as the invoker of the command pattern
*/

#include "commands/Command.h"
#include "commands/NoCommand.h"
#include <memory>
#include <vector>



class RemoteControl {
public:
	static const int slots = 7;

	RemoteControl() {
		clearCommands();
	}

	void setCommand(const std::shared_ptr<Command>& onc, const std::shared_ptr<Command>& offc, unsigned slot) {
		if (slot >= slots)
			return;

		onCommands_[slot] = onc;
		offCommands_[slot] = offc;
	}

	void onButtonWasPushed(unsigned slot) {
		if (slot >= slots)
			return;
		onCommands_[slot]->execute();
		lastCommand_ = onCommands_[slot];
	}

	void offButtonWasPushed(unsigned slot) {
		if (slot >= slots)
			return;
		offCommands_[slot]->execute();
		lastCommand_ = onCommands_[slot];
	}

	void undoButtonWasPushed() {
		lastCommand_->undo();
	}

private:
	void clearCommands() {
		for (int i = 0; i < slots; ++i) {
			onCommands_[i] = std::make_shared<NoCommand>();
			offCommands_[i] = std::make_shared<NoCommand>();
		}
		lastCommand_ = std::make_shared<NoCommand>();
	}

	std::shared_ptr<Command> onCommands_[slots];
	std::shared_ptr<Command> offCommands_[slots];
	std::shared_ptr<Command> lastCommand_;
};
