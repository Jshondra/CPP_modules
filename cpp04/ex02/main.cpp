#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	//const Animal* meta = new Animal();
	Dog* l = new Dog();
	Cat* k = new Cat();
	//Animal *s = new Animal();
	k->makeSound();
	l->makeSound();
}