#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const & a)
{
    std::cout << "Cat copy constructor" << std::endl;
	if (a.brain)
	{
		this->brain = new Brain();
		*this->brain = *a.brain;
	}
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete this->brain;
}

void		Cat::makeSound() const
{
	std::cout << this->_type << " is making MeoW!" << std::endl;
}

Cat &		Cat::operator=(const Cat & a)
{
	_type = a._type;
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = a.brain->ideas[i];
	return *this;
}

Brain * Cat::getBrain( void ) const
{
    return this->brain;
}