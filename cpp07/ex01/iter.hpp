#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *mas, size_t len, void foo(T & ptr))
{
	if (mas)
	{
		for (size_t i = 0; i < len; i++)
			foo(mas[i]);	
	}
	else
		std::cout << "Correct your mass!" << std::endl;
}

template<typename T>
void print(T &ptr)
{
	std::cout << ptr << "\n";
}
#endif