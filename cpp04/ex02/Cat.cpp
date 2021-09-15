#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat & a) {
	*this = a;
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

void		Cat::setIdea(int i, std::string idea)
{
	this->brain->ideas[i] = idea;
}

std::string	Cat::getIdea(int i) const
{
	return (this->brain->ideas[i]);
}

Cat &		Cat::operator=(const Cat & a)
{
	_type = a._type;
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = a.brain->ideas[i];
	return *this;
}

void Cat::protection()
{
	std::cout << "pure method called " << std::endl;
}