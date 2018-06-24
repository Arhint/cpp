#include "Bullet.hpp"

Bullet::Bullet( void ) : _char((char*)"-"), _x(-1), _y(-1)
{
}

Bullet::Bullet( Bullet const & src )
{
	*this = src;
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

void						Bullet::move( void )
{
	if (this->_x == 118)
		Bullet::blow();
	else
	{
		this->_x++;		
	}
}

void						Bullet::blow( void )
{
	this->_x = -1;
	this->_y = -1;
}
