#include "AMateria.hpp"

AMateria::AMateria( std::string const & type )
{
	this->_type = type;
}

AMateria::AMateria( AMateria const & other )
{
	*this = other;
}

AMateria & AMateria::operator=( AMateria const & other )
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria::~AMateria(){}

std::string const & AMateria::getType( void ) const
{
	return (this->_type);
}

void AMateria::use( ICharacter & target )
{
	(void)target;
}