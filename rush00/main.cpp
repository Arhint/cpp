#include "Map.hpp"
#include "Player.hpp"
#include <iostream>
#include "Bot1.hpp"
#include "Bullet.hpp"
#include "Bot2.hpp"
#include "Bot3.hpp"
#include <zconf.h>

void		rs_control(Player *player)
{
	int		key = getch();

	if (key == 260 || key == 261 || key == 259 || key == 258)
		mvprintw(player->get_y(), player->get_x(), " ");
	if (key == 260 && player->get_x() > 1)
		player->set_x(player->get_x() - 1);
	else if (key == 261 && player->get_x() < 118)
		player->set_x(player->get_x() + 1);
	else if (key == 259 && player->get_y() > 1)
		player->set_y(player->get_y() - 1);
	else if (key == 258 && player->get_y() < 28)
		player->set_y(player->get_y() + 1);
	else if (key == 'p') {
		while (1) {
			if (getch() == 'p')
				break ;
			if (getch() == 'q') {
				endwin();
				exit (0);
			}
		}
	}
	else if (key == 'q') {
		endwin();
		exit (0);
	}


}

//void	bot_creation(Bot1 & bot1)
//{
//	if (bot1)
//}

int		main()
{
	Map		map;
	Player	player;
	Bot1	bot1;
	Bot2	bot2;
	Bot3	bot3;
	Bullet  bullet;
	Bullet  bullet1;
	bullet.setX(6);
	bullet.setY(5);
	bullet1.setX(6);
	bullet1.setY(10);
	int 	bots_num = 50;
	int 	i = 0;

//	system("clear");
	map.init_map();
	box(map.get_map(), 0, 0);
	int y = getmaxx(map.get_map());
	int x = getmaxy(map.get_map());
	while (1) {
		if (y != getmaxx(map.get_map()) || x != getmaxy(map.get_map())) {
			endwin();
			std::cout << "DONT TOUCH TERMINAL" << std::endl;
			exit (0);
		}

		mvwprintw(map.get_map() ,player.get_y(), player.get_x(), " ");
		rs_control(&player);
		wattron(map.get_map(), COLOR_PAIR(1));
		mvwprintw(map.get_map() ,player.get_y(), player.get_x(), ">");
		wattroff(map.get_map(), COLOR_PAIR(1));
		box(map.get_map(), 0, 0);
		mvwprintw(map.get_map() ,bot1.getY(), bot1.getX(), " ");
		mvwprintw(map.get_map() ,bot2.getY(), bot2.getX(), " ");
		mvwprintw(map.get_map() ,bot3.getY(), bot3.getX(), " ");
		mvwprintw(map.get_map() ,bullet.getY(), bullet.getX(), " ");
		mvwprintw(map.get_map() ,bullet1.getY(), bullet1.getX(), " ");
		if (i == 3)
		{
//			box(map.get_map(), 0, 0);
			bot1.changeTheCoords();
			bot2.changeTheCoords();
			bot3.changeTheCoords();
			bullet.setX(bullet.getX() + 1);
			bullet1.setX(bullet1.getX() + 1);
//			usleep(10000);
			i = 0;
		}
		mvwprintw(map.get_map() ,bullet.getY(), bullet.getX(), bullet.getChar());
		mvwprintw(map.get_map() ,bullet1.getY(), bullet1.getX(), bullet1.getChar());
		wattron(map.get_map(), COLOR_PAIR(3));
		mvwprintw(map.get_map() ,bot1.getY(), bot1.getX(), "1");
		mvwprintw(map.get_map() ,bot2.getY(), bot2.getX(), "2");
		mvwprintw(map.get_map() ,bot3.getY(), bot3.getX(), "3");
		wattroff(map.get_map(), COLOR_PAIR(3));
		wrefresh(map.get_map());
		i++;
		usleep(20000);
	}
	endwin();
	return (0);
//	test to push
}


