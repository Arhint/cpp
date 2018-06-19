#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {

private:

	std::string _type;

public:

	Weapon(std::string name);
	std::string const &getType();
	void 			setType(std::string type);
};

#endif
