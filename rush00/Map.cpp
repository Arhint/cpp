#include "Map.hpp"

Map::Map() {

	_height = 30;
	_width = 120;
}

Map::Map(const Map &rhs) {

	*this = rhs;
}

Map& Map::operator=(Map const &rhs) {

	_height = rhs._height;
	_width = rhs._width;
	return *this;
}

int Map::get_height() {

	return _height;
}

int Map::get_width() {

	return _width;
}

WINDOW* Map::get_map() {

	return _map;
}

void Map::set_height(int k) {

	_height = k;
}

void Map::set_width(int k) {

	_width = k;
}

Map::~Map() {}

void Map::rs_set_color() {

	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	init_pair(2, COLOR_BLUE, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
//	init_pair(4, COLOR_CYAN, COLOR_BLACK);
//	init_pair(5, COLOR_WHITE, COLOR_BLACK);
//	init_pair(6, COLOR_BLACK, COLOR_GREEN);
//	init_pair(7, COLOR_BLACK, COLOR_BLUE);
//	init_pair(8, COLOR_BLACK, COLOR_RED);
//	init_pair(9, COLOR_BLACK, COLOR_CYAN);
//	init_pair(10, COLOR_WHITE, COLOR_WHITE);
//	init_pair(11, COLOR_RED, COLOR_BLACK);
}

void Map::init_map() {

	initscr();
	noecho();
	curs_set(0);
	start_color();
	rs_set_color();
	cbreak();
	keypad(stdscr, TRUE);
	nodelay(stdscr, FALSE);
//	timeout(1);
	_map = newwin(_height, _width, 0, 0);
}