#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {

public:

	FragTrap( void );
	FragTrap( std::string name) ;
	FragTrap( const FragTrap & rhs );
	FragTrap & operator=( const FragTrap & rhs );
	~FragTrap();

	int			get_hitpoints();
	int			get_maxhitp();
	int			get_energyhitp();
	int			get_maxenergyhitp();
	int			get_level();
	std::string	get_name();
	int			get_meleedamage();
	int			get_rangedamage();
	int			get_armordamage();

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

private:

	int			_hitpoints;
	int			_maxhitp;
	int			_energyhitp;
	int			_maxenergyhitp;
	int			_level;
	std::string	_name;
	int			_meleedamage;
	int			_rangedamage;
	int			_armordamage;
};

#endif
