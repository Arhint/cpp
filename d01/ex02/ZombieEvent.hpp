#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {

private:
	std::string _typeEZombie;

public:

	void		setZombieType(std::string typeZombie);
	Zombie*		newZombie(std::string name);
};

#endif
