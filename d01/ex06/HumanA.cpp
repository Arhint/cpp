#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep) : _name(name), _weapon(wep)
{}

void	HumanA::attack() {
	std::cout << _name << " attacks with his "
			  << this->_weapon.getType() << std::endl;
}