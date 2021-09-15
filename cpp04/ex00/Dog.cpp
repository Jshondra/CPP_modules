#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
}

Dog::Dog(const Dog & a)
{
	*this = a;
}

Dog::~Dog(){}



void		Dog::makeSound() const
{
	std::cout << this->_type << " is making WoW!" << std::endl;
}

Dog & Dog::operator=(const Dog & a)
{
	_type = a._type;
	return *this;
}
