#include "FragTrap.hpp"

FragTrap::FragTrap() {

	_hitpoints = 100;
	_maxhitp = 100;
	_energyhitp = 100;
	_maxenergyhitp = 100;
	_level = 1;
	_name = "Player";
	_meleedamage = 30;
	_rangedamage = 20;
	_armorreduction = 5;
	std::cout << "FR4G-TP constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {

	_hitpoints = 100;
	_maxhitp = 100;
	_energyhitp = 100;
	_maxenergyhitp = 100;
	_level = 1;
	_name = name;
	_meleedamage = 30;
	_rangedamage = 20;
	_armorreduction = 5;
	std::cout << "FR4G-TP constructor called. Player name is - "
			  << get_name() << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs) {

	*this = rhs;
	std::cout << "FR4G-TP copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {

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

FragTrap::~FragTrap() {

	std::cout << "FR4G-TP destructor" << std::endl;

}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {

	int ind = rand() % 6;
	std::string names[] = {"Cr1t", "Epic", "Fatal", "Unreal", "Slow", "Fast"};
	if (get_energyhitp() >= 25)
	{
		std::cout << _name << " has done " << names[ind] << " attack to "
				  << target << std::endl;
		set_energyhitp(_energyhitp - 25);
	}
	else
		std::cout << "NOT ENOUGH ENERGY !" << std::endl;
}