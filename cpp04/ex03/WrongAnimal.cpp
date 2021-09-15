#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "Wrong_Lion";
}

WrongAnimal::WrongAnimal(const WrongAnimal  & a)
{
	*this = a;
}

WrongAnimal::~WrongAnimal(){}

void		WrongAnimal::makeSound() const
{
	std::cout << this->_type << " is making wrong sound!" << std::endl;
}

WrongAnimal & WrongAnimal:: operator=(const WrongAnimal & a)
{
	_type = a._type;
	return *this;
}
