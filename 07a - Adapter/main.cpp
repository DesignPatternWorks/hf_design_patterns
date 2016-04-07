
#include "MallardDuck.h"
#include "TurkeyAdapter.h"
#include "WildTurkey.h"
#include <memory>

void testDuck(Duck* duck) {
	duck->quack();
	duck->fly();
}



int main() {
	Duck::ptr mallard = std::make_unique<MallardDuck>();
	testDuck(mallard.get());


	Duck::ptr turkeyAdapter = std::make_unique<TurkeyAdapter>(std::make_unique<WildTurkey>());
	testDuck(turkeyAdapter.get());
}