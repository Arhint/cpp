#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string name);
	FragTrap( const FragTrap & rhs );
	FragTrap & operator=( FragTrap const & rhs );
	~FragTrap();

	void		vaulthunter_dot_exe(std::string const & target);

};

#endif
