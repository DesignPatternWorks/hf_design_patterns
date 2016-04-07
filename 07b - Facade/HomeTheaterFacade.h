#ifndef HOMETHEATERFACADE_H
#define HOMETHEATERFACADE_H

#include <iostream>
#include <memory>
#include <string>

class Amplifier;
class Tuner;
class DvdPlayer;
class CdPlayer;
class Projector;
class Screen;
class TheaterLights;
class PopcornPopper;


class HomeTheaterFacade {
public:

	HomeTheaterFacade(std::shared_ptr<Amplifier>& amp, 
						std::shared_ptr<Tuner>& tuner,
						std::shared_ptr<DvdPlayer>& dvdPlayer,
						std::shared_ptr<CdPlayer>& cdPlayer,
						std::shared_ptr<Projector>& projector,
						std::shared_ptr<Screen>& screen,
						std::shared_ptr<TheaterLights>& lights,
						std::shared_ptr<PopcornPopper>& popper) : amp_(amp), tuner_(tuner), dvdPlayer_(dvdPlayer), 
									cdPlayer_(cdPlayer), projector_(projector), screen_(screen), lights_(lights), popper_(popper) { }

	void startMovie(std::string movie) {
		std::cout << "Get ready to watch a movie....\n";
		popper_->on();
		popper_->pop();
		lights_->dim(10);
		screen_->down();
		projector_->on();
		projector_->wideScreenMode();
		amp_->on();
		amp_->setDvd(dvdPlayer_);
		amp_->setSurroundSound();
		amp_->setVolume(5);
		dvdPlayer_->on();
		dvdPlayer_->play(movie);
	}

	void endMovie() {
		std::cout << "Shutting movie theater down...\n";
		popper_->off();
		lights_->on();
		screen_->up();
		projector_->off();
		amp_->off();
		dvdPlayer_->stop();
		dvdPlayer_->eject();
		dvdPlayer_->off();
	}

private:
	std::shared_ptr<Amplifier> amp_;
	std::shared_ptr<Tuner> tuner_;
	std::shared_ptr<DvdPlayer> dvdPlayer_;
	std::shared_ptr<CdPlayer> cdPlayer_;
	std::shared_ptr<Projector> projector_;
	std::shared_ptr<Screen> screen_;
	std::shared_ptr<TheaterLights> lights_;
	std::shared_ptr<PopcornPopper> popper_;
};

#endif