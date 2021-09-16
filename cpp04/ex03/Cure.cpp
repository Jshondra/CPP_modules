#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor " << std::endl;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor" << std::endl;
}

Cure::Cure( Cure const & ): AMateria("cure")
{
	std::cout << "Cure copy destructor" << std::endl;
}

Cure & Cure::operator=( Cure const & )
{
	return (*this);
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}

AMateria* Cure::clone( void ) const
{
	return (new Cure(*this));
}