#include "Observer.h"
#include "Displayable.h"

class Observable;


class Display : public Observer, public Displayable {
public:
	Display(Observable* subject);
	void update(Observable* subject);

	void display();

private:
	int pressure_;
};