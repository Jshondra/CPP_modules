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
		Cat(const Cat & a);

		Cat & operator=(Cat const & a);
		
		void	setIdea(int i, std::string idea);
		std::string	getIdea(int i) const;
		virtual void makeSound() const;
};

#endif
