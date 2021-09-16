#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	N;

	std::cout << "How many zombies do u want?" << std::endl; 
	std::cin >> N;
	if (N <= 0 || N >= INT_MAX)
	{
		std::cout<<"Wrong amount of zombies!"<<std::endl;
		return (1);
	}
	Zombie*	horde = zombieHorde(N, "We are the horde!!!");
	for (int i = 0; i < N; ++i)
	{
		(horde + i)->get_name();
	}
	delete [] (horde);
}