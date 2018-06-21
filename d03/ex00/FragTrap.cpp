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
	_armordamage = 5;
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
	_armordamage = 5;
}

FragTrap::FragTrap(const FragTrap &rhs) {

	*this = rhs;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs) {

	_hitpoints = get_hitpoints();
	_maxhitp = get_maxhitp();
	_energyhitp = get_energyhitp();
	_maxenergyhitp = get_maxenergyhitp();
	_level = get_level();
	_name = get_name();
	_meleedamage = get_meleedamage();
	_rangedamage = get_rangedamage();
	_armordamage = get_armordamage();
	return *this;

}

int FragTrap::get_hitpoints() {

	return _hitpoints;
}

int FragTrap::get_maxhitp() {

	return  _maxhitp;
}

int FragTrap::get_energyhitp() {

	return _energyhitp;
}

int FragTrap::get_maxenergyhitp() {

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

int FragTrap::get_armordamage() {

	return _armordamage;
}