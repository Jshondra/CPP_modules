#include "Fixed.hpp"

Fixed::Fixed( void )
{
   this->_fixed_n = 0;
   std::cout << "Default consructor called"<< std::endl;
}

Fixed::Fixed( Fixed const & rhc )
{
	std::cout << "Copy consructor called" << std::endl;
	*this = rhc;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixed_n = n * (1 << this->_nbr_b);
}

Fixed::Fixed(const float n) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixed_n = roundf(n * (1 << this->_nbr_b));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (this->_fixed_n);
}

void Fixed::setRawBits( int const src )
{
	this->_fixed_n = src;
}

int Fixed::toInt( void ) const
{
	return ((int)(this->_fixed_n >> this->_nbr_b));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixed_n / (1 << this->_nbr_b));
}

Fixed	&	Fixed::operator=(const Fixed & rhc)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_n = rhc.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream & str, const Fixed & rhc)
{
	return(str << rhc.toFloat());
}