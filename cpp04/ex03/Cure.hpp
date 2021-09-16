#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		
		virtual AMateria * clone() const;
		
		Cure();
		virtual ~Cure();
		Cure& operator=(const Cure & a);
		Cure(const Cure &other);
		virtual void use(ICharacter& target);
};

#endif