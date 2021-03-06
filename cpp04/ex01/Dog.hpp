#ifndef DOG_HPP
#define DOG_HPP

#include "Animals.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	
	public:
		Dog();
		Dog(const Dog & a);
		virtual ~Dog();
		virtual void makeSound() const;
		Dog & operator=(Dog const & a);
		Brain * getBrain( void ) const;
};

#endif