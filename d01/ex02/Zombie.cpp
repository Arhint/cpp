#include "Zombie.hpp"

Zombie::Zombie(std::string _nameZombie, std::string _typeZombie)
		: _nameZombie(_nameZombie), _typeZombie(_typeZombie) {
	std::cout << "Zombie " << _nameZombie << " " << _typeZombie << " is alive!";
}

void	Zombie::announce() {
	std::cout << " It likes Braiiiiiiinnnssss...so much..."
			  << std::endl;
}

Zombie::~Zombie() {
	std::cout << _nameZombie << _typeZombie << " is dead forever now!"
			  << std::endl;
}