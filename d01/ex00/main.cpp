#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony*	heap = new Pony("the heap");
	delete heap;
}

void	ponyOnTheStack()
{
	Pony	stack = Pony("the stack");
}

int		main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}