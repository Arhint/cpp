#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	_hitpoints = 100;
	_maxhitp = 100;
	_energyhitp = 50;
	_maxenergyhitp = 50;
	_level = 1;
	_name = "Player";
	_meleedamage = 20;
	_rangedamage = 15;
	_armorreduction = 3;
	std::cout << "FR4G-TP constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {

	_hitpoints = 100;
	_maxhitp = 100;
	_energyhitp = 50;
	_maxenergyhitp = 50;
	_level = 1;
	_name = name;
	_meleedamage = 20;
	_rangedamage = 15;
	_armorreduction = 3;
	std::cout << "SCAV>>-TP constructor called(ScavTrap). Player name is - "
			  << get_name() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) {

	*this = rhs;
	std::cout << "SCAV>>-TP copy constructor called(ScavTrap)" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {

	_hitpoints = rhs._hitpoints;
	_maxhitp = rhs._maxhitp;
	_energyhitp = rhs._energyhitp;
	_maxenergyhitp = rhs._maxenergyhitp;
	_level = rhs._level;
	_name = rhs._name;
	_meleedamage = rhs._meleedamage;
	_rangedamage = rhs._rangedamage;
	_armorreduction = rhs._armorreduction;
	return *this;
}

ScavTrap::~ScavTrap() {

	std::cout << "SCAV>>-TP destructor called(ScavTrap)" << std::endl;

}



void ScavTrap::challengeNewcomer(std::string const & target) {

	int ind = rand() % 6;
	std::string names[] = {"swords", "axes", "blunts", "bows",
						   "pikes", "brains"};
	std::cout << _name << " lets go fight with " << target
			  << " by " << names[ind] << std::endl;
}