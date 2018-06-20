#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {

private:

	int					_ix;
	static const int	_tas;

public:

	Fixed( void );
	~Fixed( void );
	Fixed( Fixed & t );

	Fixed & operator=( Fixed & rhs);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
