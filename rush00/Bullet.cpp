#include "Bullet.hpp"

Bullet::Bullet( void ) : _char((char*)"-"), _x(-1), _y(-1)
{
}

Bullet::Bullet( Bullet const & src )
{
}

Bullet::~Bullet( void )
{
}

void						Bullet::setX( int const x )
{
	this->_x = x;
}

void						Bullet::setY( int const y )
{
	this->_y = y;
}

int							Bullet::getX( void ) const
{
	return (this->_x);
}

int							Bullet::getY( void ) const
{
	return (this->_y);
}

char *						Bullet::getChar( void ) const
{
	return (this->_char);
}
