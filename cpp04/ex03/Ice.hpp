#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		AMateria * clone() const override;
		
		Ice();
		virtual ~Ice();
		Ice& operator=(const Ice &other);
		Ice(const Ice &other);
};

#endif