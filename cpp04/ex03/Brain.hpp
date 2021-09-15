#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain &);
		virtual ~Brain();
		Brain & operator=(Brain const & a);
};

#endif