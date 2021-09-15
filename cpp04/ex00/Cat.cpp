#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
}

Cat::Cat(const Cat & a) {
	*this = a;
}

Cat::~Cat(){}

void		Cat::makeSound() const
{
	std::cout << this->_type << " is making MeoW!" << std::endl;
}


Cat & Cat::operator=(const Cat & a)
{
	_type = a._type;
	return *this;
}