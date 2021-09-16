#ifndef CAT_HPP
#define CAT_HPP

#include "Animals.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	
	public:
		Cat();
		virtual ~Cat();
		Cat(Cat const & a);

		Cat & operator=(Cat const & a);

		virtual void makeSound() const;
		Brain * getBrain( void ) const;
};

#endif
