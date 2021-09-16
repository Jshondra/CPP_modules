#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const & a)
{
	std::cout << "Dog copy constructor" << std::endl;
	if (a.brain)
	{
		this->brain = new Brain();
		*this->brain = *a.brain;
	}
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete	this->brain;
}

Brain * Dog::getBrain( void ) const
{
    return this->brain;
}

void		Dog::makeSound() const
{
	std::cout << this->_type << " is making WoW!" << std::endl;
}

Dog & Dog::operator=(const Dog & a)
{
	if (a.brain)
	{
		this->brain = new Brain();
		this->brain = a.brain;
	}
	return *this;
}
