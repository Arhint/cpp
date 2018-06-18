#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Konstryktor Zombie" << std::endl;
}

void	Zombie::announce() {
	std::cout << _typeZombie << _nameZombie << "Braiiiiiiinnnssss..."
			  << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Destryktor Zombie" << std::endl;
}