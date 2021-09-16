#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	//const Animal* meta = new Animal();
	Dog* l = new Dog();
	Cat* k = new Cat();

	int count = 10;

	Animal* array[count];
	
	for (int i = 0; i < count; i++)
	{
		if (i < 5 && std::cout << i << " ")
			array[i] = new Cat(*k);
		else
		{
			std::cout << i << " ";
			array[i] = new Dog(*l);
		}
	}
	for (int i = 0; i < count; i++)
		delete array[i];
	while(true)
		;
}
