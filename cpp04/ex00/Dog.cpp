#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & a)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = a;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
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
