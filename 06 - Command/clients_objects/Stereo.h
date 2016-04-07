/* Client gives us these object : they don't necessarily have a common interface
*/

#ifndef STEREO_H
#define STEREO_H


#include <iostream>

class Stereo {
public:
	void on() {
		std::cout << "Turning on the ceiling light\n";
	}

	void off() {
		std::cout << "Turning off the ceiling light\n";
	}

	void setCd() {
		std::cout << "Stereo : setting CD\n";
	}

	void setDvd() {
		std::cout << "Stereo : setting DVD\n";
	}

	void setRadio() {
		std::cout << "Stereo : setting Radio\n";
	}

	void setVolume(int value) {
		std::cout << "Stereo : setting the volume to : " << value << '\n';
	}
};

#endif