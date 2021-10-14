#include "Bureaucrat.hpp"
#include "Form.hpp"

void boundaryTesting( void );
void signingFormTesting( void );

int main()
{

	// std::cout << std::endl << "Creating test:" << std::endl << std::endl;

	// try
	// {
	// 		int grade = -1;
	// 		std::cout << "Grade: " << grade << std::endl;
	// 		Form form("Name", grade, grade);
	// 		std::cout << form << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// std::cout << std::endl;

	// try
	// {
	// 		int grade = 0;
	// 		std::cout << "Grade: " << grade << std::endl;
	// 		Form form("Name", grade, grade);
	// 		std::cout << form << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// std::cout << std::endl;

	// try
	// {
	// 		int grade = 1;
	// 		std::cout << "Grade: " << grade << std::endl;
	// 		Form form("Name", grade, grade);
	// 		std::cout << form << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// std::cout << std::endl;

	// try
	// {
	// 		int grade = 149;
	// 		std::cout << "Grade: " << grade << std::endl;
	// 		Form form("Name", grade, grade);
	// 		std::cout << form << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// std::cout << std::endl;

	// try
	// {
	// 		int grade = 150;
	// 		std::cout << "Grade: " << grade << std::endl;
	// 		Form form("Name", grade, grade);
	// 		std::cout << form << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// std::cout << std::endl;

	// try
	// {
	// 		int grade = 151;
	// 		std::cout << "Grade: " << grade << std::endl;
	// 		Form form("Name", grade, grade);
	// 		std::cout << form << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// std::cout << std::endl;

	std::cout << std::endl << "Signing form test:" << std::endl << std::endl;

	Form super("SuperForm", 10, 10);
	std::cout << super << std::endl;

	Bureaucrat vasya("Vasya", 11);
	std::cout << vasya << std::endl;

	vasya.signForm(super);
	std::cout << super << std::endl;

	std::cout << std::endl;

	std::cout << "Incrementing level..." << std::endl;
	vasya.inc();

	//vasya.signForm(super);
	std::cout << super << std::endl;

	vasya.signForm(super);
	std::cout << super << std::endl;
	return 0;
}
