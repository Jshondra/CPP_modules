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

Fixed::Fixed(const float n)
{
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

bool 	Fixed::operator>(const Fixed & rhc) const
{
	return (this->_fixed_n > rhc.getRawBits());
}

bool 	Fixed::operator<(const Fixed & rhc) const
{
	return (this->_fixed_n < rhc.getRawBits());
}

bool 	Fixed::operator>=(const Fixed & rhc) const
{
	return (this->_fixed_n >= rhc.getRawBits());
}

bool 	Fixed::operator<=(const Fixed & rhc) const
{
	return (this->_fixed_n <= rhc.getRawBits());
}


bool 	Fixed::operator!=(const Fixed & rhc) const
{
	return (this->_fixed_n != rhc.getRawBits());
}

bool 	Fixed::operator==(const Fixed & rhc) const
{
	return (this->_fixed_n == rhc.getRawBits());
}
Fixed	Fixed::operator+(const Fixed & rhc)
{
	Fixed	t(this->toFloat() + rhc.toFloat());
	return (t);
}

Fixed	Fixed::operator-(const Fixed & rhc)
{
	Fixed	t(this->toFloat() - rhc.toFloat());
	return (t);
}

Fixed	Fixed::operator*(const Fixed & rhc)
{
	Fixed	t(this->toFloat() * rhc.toFloat());
	return (t);
}

Fixed	Fixed::operator/(const Fixed & rhc)
{
	if (rhc.toFloat() == 0)
	{
		std::cout << "Stop division by zero" << std::endl;
		return (*this);
	}
	Fixed	t(this->toFloat() / rhc.toFloat());
	return (t);
}

Fixed&	Fixed::operator++()
{
	this->_fixed_n++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->_fixed_n--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	t(*this);
	this->_fixed_n++;
	return (t);
}

Fixed	Fixed::operator--(int)
{
	Fixed	t(*this);
	this->_fixed_n--;
	return (t);
}

Fixed & Fixed::min(Fixed & lhc, Fixed & rhc)
{
	return (lhc < rhc ? lhc : rhc);
}

Fixed & Fixed::max(Fixed & lhc, Fixed & rhc)
{
	return (lhc > rhc ? lhc : rhc);
}

const Fixed & Fixed::min(const Fixed & lhc, const Fixed & rhc)
{
	return (lhc < rhc ? lhc : rhc);
}

const Fixed & Fixed::max(const Fixed & lhc, const Fixed & rhc)
{
	return (lhc > rhc ? lhc : rhc);
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

std::ostream& operator<<(std::ostream &str, const Fixed & rhc)
{
	return(str << rhc.toFloat());
}