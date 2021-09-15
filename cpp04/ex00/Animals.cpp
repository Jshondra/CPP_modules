#include "Animals.hpp"

Animal::Animal()
{
	this->_type = "King of the animals";
}

Animal::Animal(const Animal & a) {
	*this = a;
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

Animal & Animal::operator=(Animal const & a)
{
	_type = a._type;
	return *this;
}
