#include "Fixed.hpp"

Fixed::Fixed( void )
{
   this->_fixed_n = 0;
   std::cout << "Default consructor called"<< std::endl;
}

Fixed::Fixed( Fixed const &rhc )
{
	std::cout << "Copy consructor called" << std::endl;
	*this = rhc;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_n);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_n = raw;
}

Fixed	&	Fixed::operator=(const Fixed &rhc)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_n = rhc.getRawBits();
	return (*this);
}