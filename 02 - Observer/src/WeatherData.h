#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include "Observable.h"


class WeatherData : public Observable {
public:
	WeatherData() { }
	// random data initialization
	void init() {
		temperature_ = 20;
		pressure_ = 30;
	}

	int getTemperature() { return temperature_; }
	int getPressure() { return pressure_; }

	void add_observer(Observer* ob);
	void remove_observer(Observer* ob);
	void notifyObservers();


private:
	int temperature_;
	int pressure_;

	std::vector<Observer*> observer_;
};


#endif