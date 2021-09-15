#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		
		AMateria * clone() const override;
		
		Cure();
		virtual ~Cure();
		Cure& operator=(const Cure &other);
		Cure(const Cure &other);
};

#endif