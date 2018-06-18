#include "Contacts.hpp"

int		ss_action(std::string line)
{
	if (line == "ADD")
		return (1);
	else if (line == "SEARCH")
		return (2);
	else if (line == "EXIT")
		return (3);
	else if (std::cin.eof())
		return (4);
	return (0);
}

std::string	ss_start()
{
	std::string	line;

	std::cout << "WELCOME, choose command:" << std::endl;
	std::cout << " - ADD" << std::endl;
	std::cout << " - SEARCH" << std::endl;
	std::cout << " - EXIT" << std::endl;
	std::cout << "Write one of the command: ";
	std::getline(std::cin, line);
	return (line);
}

void	ss_add(Contacts *book)
{
	std::cout << ">> Please add information <<" << std::endl;
	std::cout << "First Name: ";
	std::getline(std::cin, book->first_name);
	std::cout << "Last Name: ";
	std::getline(std::cin, book->last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, book->nickname);
	std::cout << "Login: ";
	std::getline(std::cin, book->login);
	std::cout << "Postal Address: ";
	std::getline(std::cin, book->postal_address);
	std::cout << "Email Address: ";
	std::getline(std::cin, book->email_address);
	std::cout << "Phone Number: ";
	std::getline(std::cin, book->phone_number);
	std::cout << "Birthday Date: ";
	std::getline(std::cin, book->birthday_date);
	std::cout << "Favorite Meal: ";
	std::getline(std::cin, book->favorite_meal);
	std::cout << "Underwear Color: ";
	std::getline(std::cin, book->underwear_color);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, book->darkest_secret);
}

void	ss_get_index(int j, Contacts *book)
{
	std::string		pir;

	std::getline(std::cin, pir);
	if (pir == "BACK")
		return ;
	int k = atoi(&pir[0]);
	while (pir.length() != 1 || pir[0] < '1' || pir[0] >= '9' || k >= j + 1)
	{
		std::cout << "Wrong index, try again or write BACK!" << std::endl << ">> ";
		std::getline(std::cin, pir);
		if (pir == "BACK")
			return ;
		k = atoi(&pir[0]);
	}
	book[k - 1].ss_print();
}

void	ss_search(Contacts *book, int i)
{
	std::string	pir;
	int			j;

	if (i == 0)
		std::cout << "There is no contacts!" << std::endl;
	for (j = 0; j < i; j++)
	{
		std::cout << "index: " << std::setw(10);
		std::cout << j + 1 << " | ";
		std::cout << "first name: " << std::setw(10);
		if (book[j].first_name.length() <= 9)
			std::cout << book[j].first_name << " | ";
		else
			std::cout << book[j].first_name.substr(0, 9) << "." << " | ";
		std::cout << "last name: " << std::setw(10);
		if (book[j].last_name.length() <= 9)
			std::cout << book[j].last_name << " | ";
		else
			std::cout << book[j].last_name.substr(0, 9) << "." << " | ";
		std::cout << "nickname: " << std::setw(10);
		if (book[j].nickname.length() <= 9)
			std::cout << book[j].nickname << std::endl;
		else
			std::cout << book[j].nickname.substr(0, 9) << "."  << std::endl;
	}
	std::cout << "Choose the contact to see detail or write BACK: ";
	ss_get_index(j, book);
}

int		main()
{
	Contacts	book[8];
	int			action = 0;
	int			i = 0;

	while (action != 3)
	{
		action = ss_action(ss_start());
		switch (action)
		{
			case 1: {
				if (i < 8)
					ss_add(&book[i++]);
				else
					std::cout << ">> You can add only 8 CONTACTS <<" << std::endl;
				break ;
			}
			case 2: {
				if (i > 0)
					ss_search(book, i);
				else
					std::cout << ">> NO ANY CONTACT <<" << std::endl;
				break ;
			}
			case 3:
				break ;
			case 4:
				std::cout << std::endl << ">> DO NOT PRESS CTRL-D PLEASE <<" << std::endl;
				return (0);
			default:
				std::cout << "WRONG COMMAND" << std::endl;
				std::cout << "PRESS ENTER AND TRY AGAIN" << std::endl;
				std::cin.get();
		}
	}
	std::cout << "Have a nice day :-D" << std::endl;
	return (0);
}
