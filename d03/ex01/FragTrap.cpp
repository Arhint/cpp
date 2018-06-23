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

unsigned int FragTrap::get_hitpoints() {

	return _hitpoints;
}

unsigned int FragTrap::get_maxhitp() {

	return  _maxhitp;
}

unsigned int FragTrap::get_energyhitp() {

	return _energyhitp;
}

unsigned int FragTrap::get_maxenergyhitp() {

	return _maxenergyhitp;
}

int FragTrap::get_level() {

	return _level;
}

std::string FragTrap::get_name() {

	return _name;
}

int FragTrap::get_meleedamage() {

	return _meleedamage;
}

int FragTrap::get_rangedamage() {

	return _rangedamage;
}

unsigned int FragTrap::get_armorreduction() {

	return _armorreduction;
}

void FragTrap::set_hitpoints(unsigned int k) {

	if (k > get_maxhitp())
		set_maxhitp();
	else
		_hitpoints = k;
}

void FragTrap::set_maxhitp() {

	set_hitpoints(get_maxhitp());
}

void FragTrap::set_maxenergyhitp() {

	set_energyhitp(get_maxenergyhitp());
}

void FragTrap::set_energyhitp(unsigned int k) {

	_energyhitp = k;
}

void FragTrap::rangedAttack(std::string const &target) {

	std::cout << "FR4G-TP " << get_name() << " attacks "
			  << target << " at range, causing " << get_rangedamage()
			  << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {

	std::cout << "FR4G-TP " << get_name() << " attacks "
			  << target << " at melee, causing " << get_meleedamage()
			  << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {

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

void FragTrap::beRepaired(unsigned int amount) {

	if (amount + _hitpoints >= 100)
		set_hitpoints(get_maxhitp());
	else
		set_hitpoints(amount + get_hitpoints());
	std::cout << _name << " repaired by: " << amount << " to "
			  << _hitpoints << std::endl;
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