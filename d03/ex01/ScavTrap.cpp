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
	std::cout << "SCAV>>-TP constructor called" << std::endl;
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

unsigned int ScavTrap::get_hitpoints() {

	return _hitpoints;
}

unsigned int ScavTrap::get_maxhitp() {

	return  _maxhitp;
}

unsigned int ScavTrap::get_energyhitp() {

	return _energyhitp;
}

unsigned int ScavTrap::get_maxenergyhitp() {

	return _maxenergyhitp;
}

int ScavTrap::get_level() {

	return _level;
}

std::string ScavTrap::get_name() {

	return _name;
}

int ScavTrap::get_meleedamage() {

	return _meleedamage;
}

int ScavTrap::get_rangedamage() {

	return _rangedamage;
}

unsigned int ScavTrap::get_armorreduction() {

	return _armorreduction;
}

void ScavTrap::set_hitpoints(unsigned int k) {

	if (k > get_maxhitp())
		set_maxhitp();
	else
		_hitpoints = k;
}

void ScavTrap::set_maxhitp() {

	set_hitpoints(get_maxhitp());
}

void ScavTrap::set_maxenergyhitp() {

	set_energyhitp(get_maxenergyhitp());
}

void ScavTrap::set_energyhitp(unsigned int k) {

	_energyhitp = k;
}

void ScavTrap::rangedAttack(std::string const &target) {

	std::cout << "SCAV>>-TP " << get_name() << " attacks "
			  << target << " at range, causing " << get_rangedamage()
			  << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {

	std::cout << "SCAV>>-TP " << get_name() << " attacks "
			  << target << " at melee, causing " << get_meleedamage()
			  << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {

	if ((amount > get_armorreduction()))
	{
		amount -= get_armorreduction();
		if (_hitpoints <= amount){
			std::cout << _name << " was killed !" << std::endl;
			set_hitpoints(0);
		}
		else
		{
			_hitpoints -= amount;
			std::cout << _name << " take damage: " << amount
					  << "; armor reduction damage: "
					  << get_armorreduction() << " HP now is: "
					  << _hitpoints << std::endl;
		}
	}
	else
		std::cout << _name << " take damage: 0" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {

	if (amount + get_hitpoints() >= 100)
		set_hitpoints(get_maxhitp());
	else
		set_hitpoints(amount + _hitpoints);
	std::cout << _name << " repaired by: " << amount << " to "
			  << _hitpoints << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target) {

	int ind = rand() % 6;
	std::string names[] = {"swords", "axes", "blunts", "bows",
						   "pikes", "brains"};
	std::cout << _name << " lets go fight with " << target
			  << " by " << names[ind] << std::endl;
}