#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	ShrubberyCreationForm a("Trees");
	RobotomyRequestForm b("Bender");
	PresidentialPardonForm c("Putin");
	std::cout << std::endl;
	std::cout << a << std::endl << c << std::endl << b << std::endl;
	std::cout << std::endl;

	Bureaucrat Rob("Robert", 150);
	Bureaucrat Downey("Downey", 45);
	Bureaucrat Junior("Junior", 1);

	std::cout << Rob << std::endl << Downey << std::endl << Junior << std::endl;
	std::cout << std::endl;

	Rob.signForm(a); 
	std::cout << " \"Should be grade lower\"  EXCEPTION" << std::endl;
	Downey.signForm(a);
	std::cout << " Should be FINE" << std::endl;
	Downey.signForm(a);
	std::cout << " Should be FINE" << std::endl;
	Junior.signForm(a);
	std::cout << " \"Should be signed already\" EXCEPTION" << std::endl;

	Rob.executeForm(a);
	std::cout << " \"Should be grade lower\"  EXCEPTION" << std::endl;
	Junior.executeForm(a);
	std::cout << " Should be FINE" << std::endl;

	std::cout << std::endl;

	Junior.executeForm(c);
	std::cout << " \"Should be not signed\" EXCEPTION" << std::endl;
	Junior.signForm(c);
	std::cout << " Should be FINE" << std::endl;
	Junior.executeForm(c);
	std::cout << " Should be FINE" << std::endl;

	std::cout << std::endl;

	Downey.signForm(b);
	std::cout << " Should be FINE" << std::endl;
	Downey.executeForm(b);
	std::cout << " Should be FINE" << std::endl;

	std::cout << std::endl;

	return 0;
}