#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Empty"), grade(1) {}

Bureaucrat::Bureaucrat(const Bureaucrat & a)
{
	*this = a;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destroyed!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string & name, int n) : name(name)
{
	std::cout << "Creating Bureaucrat!" << std::endl;
	if (n > 150)
		throw GradeTooLowException();
	else if (n < 1)
		throw GradeTooHighException();
	else
	{
		this->grade = n;
		std::cout << name << " Created!!!" << std::endl;
	}
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat & a)
{
	if (this != &a)
		this->grade = a.grade;
	return *this;
}

void    Bureaucrat::dec( void )
{
    this->setGrade(++this->grade);
}

void    Bureaucrat::inc( void )
{
   this->setGrade(--this->grade);
}

//getters//

std::string Bureaucrat::getName( void ) const
{
    return this->name;
}

int Bureaucrat::getGrade( void ) const
{
    return this->grade;
}

//setter//

void Bureaucrat::setGrade( int const grade )
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
}

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & b)
{
	out << b.getName() << ", Bureaucrat grade " << b.getGrade();
	return out;
}

	/////exeption/////
void    Bureaucrat::signForm( Form & f )
{
	try
	{
		f.beSigned(*this);
		std::cout << "Bureaucrat " << this->name << " signed "
		<< f.get_name() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat " << this->name << " can't sign "
		<< f.get_name() << " because ";
		std::cout << e.what() << std::endl;
	}
}

void    Bureaucrat::executeForm( Form const & f )
{
    try
    {
        f.execute(*this);
        std::cout << "Bureaucrat " << this->name << " executed the form "
        << f.get_name() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Bureaucrat " << this->name
		<< " cannot execute the form " << f.get_name() << " because " <<
		std::cout << e.what() << std::endl;
    }
}