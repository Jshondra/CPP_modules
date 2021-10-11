#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor " << std::endl;
}

Ice::~Ice( void )
{
	std::cout << "Ice destructor" << std::endl;
}

Ice::Ice( Ice const & ): AMateria("Ice")
{
	std::cout << "Ice copy destructor" << std::endl;
}

Ice &		Ice::operator=( Ice const & )
{
	return (*this);
}

void		Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria*	Ice::clone( void ) const
{
	return (new Ice(*this));
}