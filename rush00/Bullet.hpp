#ifndef BULLET_HPP
# define BULLET_HPP

class Bullet
{

public:
	Bullet( void );
	~Bullet( void );

	void							setX( int const x );
	void							setY( int const y );
	int								getX( void ) const;
	int								getY( void ) const;
	char *							getChar( void ) const;

private:
	Bullet( Bullet const & src );
	char *							_char;
	int								_x;
	int								_y;

};

#endif
