
#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include "Command.h"
#include <memory>
#include <vector>

class MacroCommand : public Command {
public:
	using CommandArray = std::vector<std::shared_ptr<Command>>;

	MacroCommand(CommandArray& listCommands) : listCommands_(listCommands) { }

	void execute() {
		for (auto c : listCommands_) {
			c->execute();
		}
	}

	void undo() {
		for (auto c : listCommands_) {
			c->undo();
		}
	}

private:
	CommandArray listCommands_;
};

#endif