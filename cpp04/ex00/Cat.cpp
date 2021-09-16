#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & a)
{
	*this = a;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << this->_type << " is making MeoW!" << std::endl;
}

Cat &		Cat::operator=(const Cat & a)
{
	_type = a._type;
	return *this;
}
