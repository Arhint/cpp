#include "ClapTrap.hpp"

unsigned int ClapTrap::get_hitpoints() {

	return _hitpoints;
}

unsigned int ClapTrap::get_maxhitp() {

	return  _maxhitp;
}

unsigned int ClapTrap::get_energyhitp() {

	return _energyhitp;
}

unsigned int ClapTrap::get_maxenergyhitp() {

	return _maxenergyhitp;
}

int ClapTrap::get_level() {

	return _level;
}

std::string ClapTrap::get_name() {

	return _name;
}

int ClapTrap::get_meleedamage() {

	return _meleedamage;
}

int ClapTrap::get_rangedamage() {

	return _rangedamage;
}

unsigned int ClapTrap::get_armorreduction() {

	return _armorreduction;
}

void ClapTrap::set_hitpoints(unsigned int k) {

	if (k > get_maxhitp())
		set_maxhitp();
	else
		_hitpoints = k;
}

void ClapTrap::set_maxhitp() {

	set_hitpoints(get_maxhitp());
}

void ClapTrap::set_maxenergyhitp() {

	set_energyhitp(get_maxenergyhitp());
}

void ClapTrap::set_energyhitp(unsigned int k) {

	_energyhitp = k;
}

void ClapTrap::rangedAttack(std::string const &target) {

	std::cout << get_name() << " attacks "
			  << target << " at range, causing " << get_rangedamage()
			  << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) {

	std::cout << get_name() << " attacks "
			  << target << " at melee, causing " << get_meleedamage()
			  << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

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

void ClapTrap::beRepaired(unsigned int amount) {

	if (amount + get_hitpoints() >= 100)
		set_hitpoints(get_maxhitp());
	else
		set_hitpoints(amount + _hitpoints);
	std::cout << _name << " repaired by: " << amount << " to "
			  << _hitpoints << std::endl;
}
