#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

typedef Form    *(Intern:: * funcPtr)(std::string);

Intern::Intern( Intern const & o )
{
	*this = o;
}

Intern & Intern::operator=( Intern const & )
{
	return (*this);
}

Form    *Intern::makeShrub( std::string mission )
{
	return new ShrubberyCreationForm(mission);
}

Form    *Intern::makeRobo( std::string mission )
{
	return new RobotomyRequestForm(mission);
}

Form    *Intern::makePresident( std::string mission )
{
	return new PresidentialPardonForm(mission);
}

Form    *Intern::makeForm(std::string name, std::string mission)
{

	std::string names[3] = { "shrub", "robo", "president" }; 

	(void)name;

	funcPtr functions[3] =
	{
		&Intern::makeShrub,
		&Intern::makePresident,
		&Intern::makeRobo
	};

	std::cout << "Intern making form " << name << std::endl;

	for (int i = 0; i < 3; ++i)
	{
		if (names[i] == name)
		{
			std::cout << "Trying" << std::endl;
			return (this->*(functions[i]))(mission);
		}
	}
	std::cout << "There is no form with such name!" << std::endl;
	return (nullptr);
}