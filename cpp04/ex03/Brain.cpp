#include "Brain.hpp"

Brain::Brain(){}

Brain::Brain(const Brain & a)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
}

Brain::~Brain(){}

Brain & Brain::operator=(const Brain & a)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
	return *this;
}