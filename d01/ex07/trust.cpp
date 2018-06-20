#include <iostream>
#include <fstream>

void	ss_replace(std::string file, std::string s1, std::string s2)
{
	std::ifstream	fi(file);
	std::string		read;
	std::string		name;
	size_t			index = 0;
	std::ofstream	fo;

	if (s1.empty() || s2.empty()) {
		std::cout << "ERROR IN S1 or S2" << std::endl;
		fi.close();
		std::exit(0);
	}
	if (!fi.is_open()) {
		std::cout << "ERROR OPEN FILE!!!" << std::endl;
		fi.close();
		std::exit(0);
	}
	std::getline(fi, read, (char)fi.eof());
	while (1) {
		index = read.find(s1, index);
		if (index == std::string::npos)
			break;
		read.replace(index, s1.length(), s2);
		index += s2.length();
	}
	name = file + ".replace";
	fo.open(name);
	if (fo.fail()) {
		std::cout << "ERROR OPEN FILE.REPLACE!!!" << std::endl;
		fo.close();
		std::exit(0);
	}
	fo << read;
	fi.close();
	fo.close();
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "ERROR" << std::endl;
	else
		ss_replace(argv[1], argv[2], argv[3]);
	return (0);
}