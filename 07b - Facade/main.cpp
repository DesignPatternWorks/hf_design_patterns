
#include "Objects/Amplifier.h"
#include "Objects/CdPlayer.h"
#include "Objects/DvdPlayer.h"
#include "Objects/PopcornPopper.h"
#include "Objects/Projector.h"
#include "Objects/Screen.h"
#include "Objects/TheaterLights.h"
#include "Objects/Tuner.h"

#include "HomeTheaterFacade.h"
#include <iostream>
#include <memory>

int main() {
	auto amp = std::make_shared<Amplifier>();
	auto cd = std::make_shared<CdPlayer>();
	auto dvd = std::make_shared<DvdPlayer>();
	auto popper = std::make_shared<PopcornPopper>();
	auto projector = std::make_shared<Projector>();
	auto screen = std::make_shared<Screen>();
	auto lights = std::make_shared<TheaterLights>();
	auto tuner = std::make_shared<Tuner>();

	HomeTheaterFacade theater(amp, tuner, dvd, cd, projector, screen, lights, popper);
	theater.startMovie("Kung Fu Panda");

	theater.endMovie();
}