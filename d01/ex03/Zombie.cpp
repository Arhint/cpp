#include "Zombie.hpp"

void	Zombie::announce() {
	std::cout << "Zombie " << " is alive! " << _nameZombie
			  << " " << _typeZombie
			  <<" likes Braiiiiiiinnnssss...so much..."
			  << std::endl;
}

void	Zombie::setNameZombie(std::string name)
{
	this->_nameZombie = name;
}

void	Zombie::setTypeZombie(std::string type)
{
	this->_typeZombie = type;
}


Zombie::~Zombie() {
	std::cout << _nameZombie << " " << _typeZombie
			  << " is dead forever now!"
			  << std::endl;
}


