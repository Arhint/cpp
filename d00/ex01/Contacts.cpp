#include "Contacts.hpp"

void	Contacts::ss_print(Contacts book)
{
	std::cout << "First Name: " << book.first_name << std::endl;
	std::cout << "Last Name: " << book.last_name << std::endl;
	std::cout << "Nickname: " << book.nickname << std::endl;
	std::cout << "Login: " << book.login << std::endl;
	std::cout << "Postal Address: " << book.postal_address << std::endl;
	std::cout << "Email Address: " << book.email_address << std::endl;
	std::cout << "Phone Number: " << book.phone_number << std::endl;
	std::cout << "Birthday Date: " << book.birthday_date << std::endl;
	std::cout << "Favorite Meal: " << book.favorite_meal << std::endl;
	std::cout << "Underwear Color: " << book.underwear_color << std::endl;
	std::cout << "Darkes Secret: " << book.darkest_secret << std::endl;
}
