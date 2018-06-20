#include "Fixed.class.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &t) {

	std::cout << "Copy constructor called" << std::endl;
	*this = t;
}

void	Fixed::setRawBits(int const raw) {

	this->_ix = raw;
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return _ix;
}

Fixed & Fixed::operator=(Fixed & rhs) {

	std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return *this;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}