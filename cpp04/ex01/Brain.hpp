#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		std::string *ideas;
		Brain();
		Brain(Brain const &);
		virtual ~Brain();
		Brain & operator=(Brain const & a);
};

#endif