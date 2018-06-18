#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {

private:
	std::string _typeZombie;

public:

	void	setZombieType(std::string typeZombie);
	Zombie* newZombie(std::string name);
	void	randomChump();
};

#endif
