#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &);
		virtual ~Animal();
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
		Animal & operator=(Animal const & a);
};

#endif