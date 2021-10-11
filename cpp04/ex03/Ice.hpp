#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		virtual AMateria * clone() const;
		
		Ice();
		virtual ~Ice();
		Ice& operator=(const Ice &a);
		Ice(const Ice &a);
		virtual void use(ICharacter& target);
};

#endif