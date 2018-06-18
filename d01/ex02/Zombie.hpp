#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

private:

	std::string _typeZombie;
	std::string _nameZombie;

public:

	Zombie();
	void	announce();
	~Zombie();
};

#endif
