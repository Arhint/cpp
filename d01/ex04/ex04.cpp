#include <iostream>

int		main()
{
	std::string test = "HI THIS IS BRAIN";
	std::string *point = &test;
	std::string &ref = test;

	std::cout << *point << std::endl << ref << std::endl;

}