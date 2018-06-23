#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {

private:

	int			_life;
	int			_x;
	int			_y;

public:

	Player( void );
	Player( const Player & rhs );
	Player &operator=( Player const & rhs );
	~Player();


	int				get_x();
	int				get_y();
	void			set_x(int k);
	void			set_y(int k);

};

#endif
