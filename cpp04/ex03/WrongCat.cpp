#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "Wrong_Cat";
}

WrongCat::WrongCat(const WrongCat & a)
{
	*this = a;
}

WrongCat::~WrongCat(){}


void		WrongCat::makeSound() const
{
	std::cout << this->_type << " is making wrong_MeoW!" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat& a)
{
	_type = a._type;
	return *this;
}