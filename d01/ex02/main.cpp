#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	ZombieEvent		zombies_party;
	Zombie			szomies;
	Zombie			*zombies[7];

	szomies("Troll", "green");

	zombies_party.setZombieType(" unbreakable");
	for (int i = 0; i < 7; i++)
	{
		zombies[i] = zombies_party.newZombie("Stas");
		zombies[i]->announce();
	}
	for (int i = 0; i < 7; i++)
		delete zombies[i];
	return (0);
}