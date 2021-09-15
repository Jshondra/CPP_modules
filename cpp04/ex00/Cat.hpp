#ifndef CAT_HPP
#define CAT_HPP

#include "Animals.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat & a);

		Cat & operator=(Cat const & a);
		
		virtual void makeSound() const;
};

#endif
