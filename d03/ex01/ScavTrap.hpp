#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string name);
	ScavTrap( const ScavTrap & rhs );
	ScavTrap & operator=(ScavTrap const & rhs );
	~ScavTrap();

	unsigned int	get_hitpoints();
	unsigned int	get_maxhitp();
	unsigned int	get_energyhitp();
	unsigned int	get_maxenergyhitp();
	int				get_level();
	std::string		get_name();
	int				get_meleedamage();
	int				get_rangedamage();
	unsigned int	get_armorreduction();

	void		set_hitpoints(unsigned int k);
	void		set_maxhitp();
	void		set_energyhitp(unsigned int k);
	void		set_maxenergyhitp();

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(std::string const & target);

private:

	unsigned int	_hitpoints;
	unsigned int	_maxhitp;
	unsigned int	_energyhitp;
	unsigned int	_maxenergyhitp;
	int				_level;
	std::string		_name;
	int				_meleedamage;
	int				_rangedamage;
	unsigned int	_armorreduction;
};

#endif
