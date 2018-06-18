#include "Pony.hpp"

Pony::Pony(std::string name)
{
	_name = name;
	std::cout << "Hello everybody people :-D" << std::endl;
	std::cout << "Pony is on " << _name << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony is deleted!" << std::endl;
	std::cout << "Bye-Bye" << std::endl;
}
