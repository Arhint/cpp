#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:

	int					_ix;
	static const int	_tas = 8;

public:

	Fixed( void );
	Fixed(const int in_num );
	Fixed(const float fl_num );
	Fixed( const Fixed & t );
	~Fixed( void );

	Fixed & operator=( const Fixed & rhs);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	Fixed	operator+( Fixed const & rhs) const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
