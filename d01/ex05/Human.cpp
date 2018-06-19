#include "Human.hpp"

Brain*	Human::identify() {
	return (_mozgi.identify());
}

Brain&	Human::getBrain() {
	return (_mozgi);
}