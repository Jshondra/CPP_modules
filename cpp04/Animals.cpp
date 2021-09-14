#include "Animals.hpp"

Animal::Animal()
{
	this->_type = "King of the animals";
}

Animal::~Animal(){}

std::string	Animal::getType() const
{
	return ( this->_type );
}

void		Animal::makeSound() const
{
	std::cout << this->getType() << " is making RRRR!" << std::endl;
}

Dog::Dog() : Animal()
{
	this->_type = "Dog";
}

Dog::~Dog(){}

Cat::Cat() : Animal()
{
	this->_type = "Cat";
}

Cat::~Cat(){}

void		Dog::makeSound() const
{
	std::cout << this->_type << " is making WoW!" << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << this->_type << " is making MeoW!" << std::endl;
}