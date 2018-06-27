#include <iostream>

void	to_int(char *s)
{
	try {

		int		k = std::stoi(s);

		std::cout << "int: " << k << std::endl;
	}
	catch (std::exception &e) {

		std::cout << "int: impossible" << std::endl;
	}
}

void	to_float(char *s)
{
	try {

		float	k;

		k = std::stof(s);
		if (k == static_cast<int>(k))
			std::cout << "float: " << k << ".0f" << std::endl;
		else
			std::cout << "float: " << k << "f" << std::endl;
	}
	catch (std::exception &e) {

		std::cout << "float: impossible" << std::endl;
	}
}

void	to_char(char *s)
{


	try {

		int k = std::stoi(s);

		if (isprint(k))
			std::cout << "char: '" << static_cast<char>(k) << "'" << std::endl;
		else if (k <= CHAR_MAX && k >= CHAR_MIN)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	catch (std::exception &e) {

		std::cout << "char: impossible" << std::endl;
	}
}

void	to_double(char *s)
{
	try {

		double	k = std::stod(s);

		if (k == static_cast<int>(k))
			std::cout << "double: " << k << ".0" << std::endl;
		else
			std::cout << "double: " << k << std::endl;
	}
	catch (std::exception &e) {

		std::cout << "double: impossible" << std::endl;
	}

}

int		main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "Wrong number of arguments!" << std::endl;
		return (0);
	}
	to_char(av[1]);
	to_int(av[1]);
	to_float(av[1]);
	to_double(av[1]);
	return (0);
}