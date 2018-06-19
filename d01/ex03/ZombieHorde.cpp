#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	_HordeZombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		_HordeZombies[i].setTypeZombie("liquid");
		_HordeZombies[i].setNameZombie(randomChump());
		_HordeZombies[i].announce();
	}
}

std::string	ZombieHorde::randomChump()
{
	int	index;
	std::string names[] = {"Aby", "Aladin", "Tomato", "Yarma",
	"wolf", "Slon", "Crab", "Ivepon", "Zlo", "Dryg", "Hiop"};

	index = rand() % 11;
	return (names[index]);
}

ZombieHorde::~ZombieHorde() {
	delete [] _HordeZombies;
}