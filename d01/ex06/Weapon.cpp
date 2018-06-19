#include "Weapon.hpp"

std::string const	&Weapon::getType(){
	return (_type);
}

void		Weapon::setType(std::string type) {
	this->_type = type;
}

Weapon::Weapon(std::string name) : _type(name)
{}
