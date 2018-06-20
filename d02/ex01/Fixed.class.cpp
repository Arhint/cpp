#include "Fixed.class.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int in_num) {

	std::cout << "Int constructor called" << std::endl;
	_ix = in_num << _tas;
}

Fixed::Fixed(const float fl_num) {

	std::cout << "Float constructor called" << std::endl;
	_ix = roundf(fl_num * (1 << _tas));
}

Fixed::Fixed( const Fixed &t)  {

	std::cout << "Copy constructor called" << std::endl;
	*this = t;
}

void	Fixed::setRawBits(int const raw) {

	this->_ix = raw;
}

int		Fixed::getRawBits() const {

	return _ix;
}

Fixed & Fixed::operator=( const Fixed & rhs) {

	std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return *this;
}

float	Fixed::toFloat() const {

	return ((float)_ix / (1 << _tas));
}

int		Fixed::toInt() const {

	return (_ix >> _tas);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs) {

	o << rhs.toFloat();
	return o;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}
