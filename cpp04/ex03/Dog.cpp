#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog & a)
{
	*this = a;
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = a.brain->ideas[i];
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete	this->brain;
}



void		Dog::makeSound() const
{
	std::cout << this->_type << " is making WoW!" << std::endl;
}

Dog & Dog::operator=(const Dog & a)
{
	_type = a._type;
	return *this;
}

void Dog::protection()
{
	std::cout << "pure method called " << std::endl;
}