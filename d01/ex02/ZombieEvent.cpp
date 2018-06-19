#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string typeZombie) {
	_typeEZombie = typeZombie;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie();
	zombie->setNameZombie(name);
	zombie->setTypeZombie(_typeEZombie);
	return (zombie);
}

