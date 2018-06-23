#include "Fixed.class.hpp"

Fixed::Fixed() {

	setRawBits(0);
}

Fixed::Fixed(const int in_num) {

	_ix = in_num << _tas;
}

Fixed::Fixed(const float fl_num) {

	_ix = roundf(fl_num * (1 << _tas));
}

Fixed::Fixed( const Fixed &t)  {

	*this = t;
}

void	Fixed::setRawBits(int const raw) {

	this->_ix = raw;
}

int		Fixed::getRawBits() const {

	return _ix;
}

Fixed & Fixed::operator=( const Fixed & rhs) {

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

}

Fixed Fixed::operator++() {

	_ix = _ix + 1;
	return *this;
}

Fixed Fixed::operator++( int ) {

	Fixed one (*this);
	this->_ix++;
	return one;
}

Fixed Fixed::operator--() {

	_ix = _ix - 1;
	return *this;
}

Fixed Fixed::operator--( int ) {

	Fixed one (*this);
	this->_ix--;
	return one;
}

bool	Fixed::operator<(Fixed const &rhs) {

	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>(Fixed const &rhs) {

	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) {

	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) {

	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) {

	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) {

	return (this->getRawBits() != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs) {

	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) {

	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) {

	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) {

	return (this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::min(Fixed &lhs, Fixed &rhs) {

	if (lhs.getRawBits() < rhs.getRawBits())
		return lhs;
	return rhs;
}

const Fixed & Fixed::min(Fixed const &lhs, Fixed const &rhs) {

	if (lhs.getRawBits() < rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed & Fixed::max(Fixed &lhs, Fixed &rhs) {

	if (lhs.getRawBits() > rhs.getRawBits())
		return lhs;
	return rhs;
}
const Fixed& Fixed::max(Fixed const &lhs, Fixed const &rhs) {

	if (lhs.getRawBits() > rhs.getRawBits())
		return lhs;
	return rhs;
}

void Map::init_map() {

	WINDOW *map;

	initscr();
	noecho();
	keypad(stdscr, TRUE);
	set_heigh(getmaxy(stdscr));
	set_width(getmaxx(stdscr));
	map = newwin(_height, _width, 0, 0);
	refresh();
	while (1) {
		box(map, 0, 0);
		getmaxy(map);
		wrefresh(map);
	 	if (getch() == 'a')
			break ;
	}
	wrefresh(map);
	endwin();
}
