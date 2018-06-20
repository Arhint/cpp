#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string	randomChump()
{
	int	index;
	std::string names[] = {"Aby", "Aladin", "Tomato", "Yarma",
	"wolf", "Slon", "Crab", "Ivepon", "Zlo", "Dryg", "Hiop"};

	index = rand() % 11;
	return (names[index]);
}

std::string	randomType()
{
	int	index;
	std::string names[] = {"Blacky", "Bloody", "Meaty", "OneLeg",
	"Loudy", "Big", "NoArms", "popy", "Evil", "friendly"};

	index = rand() % 10;
	return (names[index]);
}

int		main()
{
	ZombieEvent		zombies_party;
	Zombie			*zombies[7];

	srand(time(0));
	std::cout << "______STACK______" << std::endl;
	Zombie			szombies;
	szombies.setNameZombie(randomChump());
	szombies.setTypeZombie(randomType());
	szombies.announce();
	std::cout << "______HEAP_______" << std::endl;
	for (int i = 0; i < 7; i++)
	{
		zombies_party.setZombieType(randomType());
		zombies[i] = zombies_party.newZombie(randomChump());
		zombies[i]->announce();
	}
	for (int i = 0; i < 7; i++)
		delete zombies[i];
	return (0);
}
