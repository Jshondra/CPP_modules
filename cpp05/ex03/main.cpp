#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern Lobanov;
	Form *newForm;

	std::string arrayOfNames[4] = { "Empty", "robo", "shrub", "president" }; 

	for (int i = 0; i < 4; ++i)
	{
		newForm = Lobanov.makeForm(arrayOfNames[i], "Arnold");
		if (newForm)
			newForm->doing_form_work();
		delete newForm;
		std::cout << std::endl;
	}
	return 0;
}