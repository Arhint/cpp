#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string typeZombie) {
	this->_typeZombie = typeZombie;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie(name, this->_typeZombie);
	return (zombie);
}