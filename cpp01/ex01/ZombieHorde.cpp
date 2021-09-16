#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*heap = new Zombie[N];
	if (heap)
	{
		for (int i = 0; i < N; i++)
			(heap + i)->give_name(name);
	}
	return (heap);
}