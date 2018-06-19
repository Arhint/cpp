#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

private:

	std::string _typeZombie;
	std::string _nameZombie;

public:

	void		announce();
	void		setNameZombie(std::string name);
	void		setTypeZombie(std::string type);
	~Zombie();
};

#endif
