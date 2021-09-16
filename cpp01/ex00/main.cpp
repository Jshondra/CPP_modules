#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Zombie	stack = Zombie("I am from stack");
	Zombie	*heap;
	
	heap = newZombie("I am from heap");
	stack.get_name();
	heap->get_name();
	randomChump("I am random");
	delete (heap);
}