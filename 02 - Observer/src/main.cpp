#include "WeatherData.h"
#include "Display.h"


int main() {
	WeatherData wd;
	wd.init();

	Display dp(&wd);

	wd.notifyObservers();

	
	return 0;
}