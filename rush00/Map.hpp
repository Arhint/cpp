#ifndef MAP_HPP
#define MAP_HPP

#include <curses.h>

class Map {

private:

	int			_height;
	int			_width;
	WINDOW		*_map;
//	WINDOW		*_menu;

public:

	Map( void );
	Map( const Map & rhs );
	Map &operator=( Map const & rhs );
	~Map();

	int				get_height();
	int				get_width();
	WINDOW*			get_map();


	void	set_height(int k);
	void	set_width(int k);

	void	init_map();
	void	rs_set_color();

};

#endif
