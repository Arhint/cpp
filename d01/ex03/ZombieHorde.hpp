#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {

private:

	Zombie *_HordeZombies;

public:

	ZombieHorde(int N);
	std::string		randomChump();
	~ZombieHorde();
};

#endif
