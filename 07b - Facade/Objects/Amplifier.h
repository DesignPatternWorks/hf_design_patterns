#ifndef AMPLIFIER_H
#define AMPLIFIER_H

#include <iostream>
#include <memory>

class DvdPlayer;

class Amplifier {
public:
	Amplifier() : volume_(0) { }

	void on() {
		std::cout << "Amp turned on.\n";
	}

	void off() {
		std::cout << "Amp turned off.\n";
	}

	void setCd() {}

	void setDvd(std::shared_ptr<DvdPlayer>& dvdplayer) {
		dvdplayer_ = dvdplayer;
	}

	void setStereoSound() {}

	void setSurroundSound() {
		std::cout << "Amp surround sound set\n";
	}

	void setTuner() {}

	void setVolume(int vol) {
		volume_ = vol;
		std::cout << "Amp volume set to " << volume_ << '\n';
	}
	
private:
	std::shared_ptr<DvdPlayer> dvdplayer_;
	int volume_;
};


#endif