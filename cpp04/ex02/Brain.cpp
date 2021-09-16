#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
	ideas = new std::string[100];
    for (int i = 0; i < 100; ++i)
        ideas[i] = "nothing in the brain";
}

Brain::Brain(const Brain & a)
{
	std::cout << "Brain copy constructor" << std::endl;
	if (a.ideas)
	{
		ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = a.ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain distructor" << std::endl;
	delete[] this->ideas;
}

Brain & Brain::operator=(const Brain & a)
{
	if (this == &a)
		return *this;

	delete[] this->ideas;

	if (a.ideas)
	{
		ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = a.ideas[i];
	}
	return *this;
}