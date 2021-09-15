#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* lion = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	lion->makeSound();
	cat->makeSound();

	int count = 10;

	Animal* array[count];
	
	for (int i = 0; i < count; i++)
	{
		if (i < 5 && std::cout << i << " ")
			array[i] = new Cat();
		else
		{
			std::cout << i << " ";
			array[i] = new Dog();
		}
	}
	for (int i = 0; i < count; i++)
		delete array[i];
	while(true)
		;
}