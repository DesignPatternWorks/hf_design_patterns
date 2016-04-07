#include "WeatherData.h"
#include "Observer.h"
// est-ce que m'implémentation de observabme doit se faire dans weatherdata 
// ou alors elle doit se faire directement dans l'objet observable ??

// cest norlmal de déclarer observer.h??


void WeatherData::add_observer(Observer* ob) {
	observer_.push_back(ob);
}


void WeatherData::remove_observer(Observer* ob) {
	decltype(observer_.begin()) itor = observer_.begin();
	for (; itor != observer_.end(); ++itor) {
		if (*itor == ob) {
			observer_.erase(itor);
		}
	}
}


void WeatherData::notifyObservers() {
	decltype(observer_.begin()) itor = observer_.begin();
	for (; itor != observer_.end(); ++itor) {
		(*itor)->update(this);
	}

}