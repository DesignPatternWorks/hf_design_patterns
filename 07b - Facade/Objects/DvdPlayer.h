
#ifndef DVDLPAYER_H
#define DVDLPAYER_H

class DvdPlayer {
public:
	void on() {
		std::cout << "Dvd player turned on.\n";
	}

	void off() {
		std::cout << "Dvd player turned off.\n";
	}
	
	void eject() {
		std::cout << "Ejecting dvd...\n";
	}
	
	void pause() {}
	void play(std::string movie) {
		std::cout << "Dvd player playing " << movie << ".\n";
	}

	void stop() {
		std::cout << "Dvd player stopping movie.\n";
	}

	void setSurrountAudio() {}
	void setTwoChannelAudio() {}
};

#endif