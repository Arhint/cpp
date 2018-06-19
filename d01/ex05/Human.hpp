#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {

private:

	Brain _mozgi;

public:

	Brain&	getBrain();
	Brain	*identify();
};

#endif
