#include "Animals.hpp"

Animal::Animal()
{
	this->_type = "King of the animals";
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal & a)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = a;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

std::string	Animal::getType() const
{
	return ( this->_type );
}

void		Animal::makeSound() const
{
	std::cout << this->getType() << " is making RRRR!" << std::endl;
}

Animal & Animal::operator=(Animal const & a)
{
	_type = a._type;
	return *this;
}
