#ifndef DOG_HPP
#define DOG_HPP

#include "Animals.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog & a);
		~Dog();
		virtual void makeSound() const;
		Dog & operator=(const Dog & a);
};

#endif