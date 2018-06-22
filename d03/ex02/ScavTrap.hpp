#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string name);
	ScavTrap( const ScavTrap & rhs );
	ScavTrap & operator=(ScavTrap const & rhs );
	~ScavTrap();

	void		challengeNewcomer(std::string const & target);
};

#endif
