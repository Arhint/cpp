#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contacts {

public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	void	ss_print();
};

#endif
