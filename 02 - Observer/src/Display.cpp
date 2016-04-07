#include "Display.h"
#include "WeatherData.h"
#include <iostream>


Display::Display(Observable* subject) : Observer(subject) {
	
}


void Display::update(Observable* subject) {
	pressure_ = dynamic_cast<WeatherData*>(subject)->getPressure();
	display();
}


void Display::display() {
	std::cout << "Pressure : " << pressure_ << std::endl;
}