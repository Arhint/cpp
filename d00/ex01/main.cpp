#include "Contacts.hpp"

int		ss_action(std::string line)
{
	if (line == "ADD")
		return (1);
	else if (line == "SEARCH")
		return (2);
	else if (line == "EXIT")
		return (3);
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
//	std::cout << "Login: ";
//	std::getline(std::cin, book->login);
//	std::cout << "Postal Address: ";
//	std::getline(std::cin, book->postal_address);
//	std::cout << "Email Address: ";
//	std::getline(std::cin, book->email_address);
//	std::cout << "Phone Number: ";
//	std::getline(std::cin, book->phone_number);
//	std::cout << "Birthday Date: ";
//	std::getline(std::cin, book->birthday_date);
//	std::cout << "Favorite Meal: ";
//	std::getline(std::cin, book->favorite_meal);
//	std::cout << "Underwear Color: ";
//	std::getline(std::cin, book->underwear_color);
//	std::cout << "Darkes Secret: ";
//	std::getline(std::cin, book->darkest_secret);
}

//void	ss_print_index(std::string pir)
//{
//	if ()
//}

void	ss_get_index()
{
	std::string		pir;

	std::getline(std::cin, pir);
	if (pir.length() > 1 || (pir[0] >= '0' && pir[0] <= '9'))
	{
		std::cout << "Wrong index, try again !" << std::endl;
		ss_get_index();
	}
	std::cout << "GOOD" << std::endl;
//	ss_print_index(pir);
}

void	ss_search(Contacts *book, int i)
{
	std::string	pir;

	if (i == 1)
		std::cout << "There is no contacts!" << std::endl;
	for (int j = 1; j < i; j++)
	{
		std::cout << "index: " << std::setw(10);
		std::cout << j << " | ";
		std::cout << "first name: " << std::setw(10);
		std::cout << book[j].first_name << " | ";
		std::cout << "last name: " << std::setw(10);
		std::cout << book[j].last_name << " | ";
		std::cout << "nickname: " << std::setw(10);
		std::cout << book[j].nickname << std::endl;
	}
	std::cout << "Choose the contact to see detail: ";
	ss_get_index();
//	ss_print_index(pir);
}

int		main()
{
	Contacts	book[9];
	int			action = 0;
	int			i = 1;

	while (action != 3)
	{
		action = ss_action(ss_start());
		switch (action)
		{
			case 1:
				if (i < 9)
					ss_add(&book[i++]);
				else
					std::cout << "You can add only 8 contacts" << std::endl;
				break ;
			case 2:
				ss_search(book, i);
				break ;
			case 3:
				action = 3;
				break ;
			default:
				std::cout << "WRONG COMMAND" << std::endl;
				std::cout << "PRESS ENTER AND TRY AGAIN" << std::endl;
				std::cin.get();
		}
	}
	std::cout << "Have a nice day :-D" << std::endl;
	return (0);
}