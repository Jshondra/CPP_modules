#include "Bureaucrat.hpp"


int main()
{
   
	std::cout << std::endl << "Creating test:" << std::endl << std::endl;

	try
	{
		int grade = -1;
		std::cout << "Grade: " << grade << std::endl;
		Bureaucrat a("Bur", grade);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		int grade = 0;
		std::cout << "Grade: " << grade << std::endl;
		Bureaucrat a("Bur", grade);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		int grade = 1;
		std::cout << "Grade: " << grade << std::endl;
		Bureaucrat a("Bur", grade);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		int grade = 149;
		std::cout << "Grade: " << grade << std::endl;
		Bureaucrat a("Bur", grade);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		int grade = 150;
		std::cout << "Grade: " << grade << std::endl;
		Bureaucrat a("Bur", grade);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		int grade = 151;
		std::cout << "Grade: " << grade << std::endl;
		Bureaucrat a("Bur", grade);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << std::endl << "increment/decrement test:"
	<< std::endl << std::endl;

	try
	{
		Bureaucrat newbie("Newbie", 150);
		std::cout << newbie << std::endl;


		std::cout<< "incrementing grade..." << std::endl;
		newbie.inc();
		std::cout<< "new grade:" << newbie.getGrade() << std::endl;

		std::cout<< "decrementing grade..." << std::endl;
		newbie.dec();
		std::cout<< "new grade:" << newbie.getGrade() << std::endl;

		std::cout<< "decrementing grade..." << std::endl;
		newbie.dec();
		std::cout<< "new grade:" << newbie.getGrade() << std::endl;

	}

	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{

		Bureaucrat master("Master B", 8);
		std::cout << master << std::endl;
		std::cout<< "incrementing grade..." << std::endl;
		master.inc();
		std::cout<< "new grade:" << master.getGrade() << std::endl;

		for (int i = 0; i < 9; ++i)
		{
			std::cout<< "incrementing grade..." << std::endl;
			master.inc();
			std::cout<< "new grade:" << master.getGrade() << std::endl;
		}

	}

	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	return 0;
}

   