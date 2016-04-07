
#include "commands/NoCommand.h"
#include "commands/CeilingFanOnCommand.h"
#include "commands/CeilingFanOffCommand.h"
#include "commands/LightOnCommand.h"
#include "commands/LightOffCommand.h"
#include "commands/StereoOnCommand.h"
#include "commands/StereoOffCommand.h"
#include "commands/MacroCommand.h"
#include "clients_objects/Light.h"
#include "clients_objects/Stereo.h"
#include "clients_objects/CeilingFan.h"
#include "RemoteControl.h"

#include <memory>
#include <vector>


int main() {
	auto light = std::make_shared<Light>();
	auto comLightOn = std::shared_ptr<Command>(std::make_shared<LightOnCommand>(light));
	auto comLightOff = std::shared_ptr<Command>(std::make_shared<LightOffCommand>(light));

	auto ceilingFan = std::make_shared<CeilingFan>();
	auto comCeilingOn = std::shared_ptr<Command>(std::make_shared<CeilingFanOnCommand>(ceilingFan));
	auto comCeilingOff = std::shared_ptr<Command>(std::make_shared<CeilingFanOffCommand>(ceilingFan));

	auto stereo = std::make_shared<Stereo>();
	auto comStereoOn = std::shared_ptr<Command>(std::make_shared<StereoOnCommand>(stereo));
	auto comStereoOff = std::shared_ptr<Command>(std::make_shared<StereoOffCommand>(stereo));

	MacroCommand::CommandArray vecOn = {comLightOn, comCeilingOn, comStereoOn};
	MacroCommand::CommandArray vecOff = {comLightOff, comCeilingOff, comStereoOff};

	auto comMacroOn = std::shared_ptr<Command>(std::make_shared<MacroCommand>(vecOn));
	auto comMacroOff = std::shared_ptr<Command>(std::make_shared<MacroCommand>(vecOff));


	RemoteControl r;
	r.setCommand(comMacroOn, comMacroOff, 0);
	r.setCommand(comLightOn, comLightOff, 1);
	r.onButtonWasPushed(1);
	r.undoButtonWasPushed();
	r.onButtonWasPushed(0);
}