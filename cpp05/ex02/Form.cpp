#include "Form.hpp"

Form::Form( void ): _name("Empty"), _grade_sign(1),_grade_execute(1), _log( false ){}

Form::Form( std::string name, int grade_s, int grade_e): _name(name), _grade_sign(grade_s),_grade_execute(grade_e), _log( false )
{
	std::cout<< "Creating Form! " << _name << std::endl;

	if ( grade_e > 150 || grade_s > 150 )
		throw GradeTooLowException();
	if ( grade_e < 1 || grade_s < 1 )
		throw GradeTooHighException();

	std::cout<< "Created!" << std::endl;
}

Form::Form( Form const & o ): _name(o._name), _grade_sign(o._grade_sign), _grade_execute(o._grade_execute), _log( o._log )
{
	std::cout<< "Form copy constructor called!" << std::endl;
}

Form::~Form ( void )
{
	std::cout<< "Form destroyed!" << std::endl;
}

	//getters//
bool Form::get_log( void ) const
{
	return this->_log;
}

int Form::get_g_execute( void ) const
{
	return this->_grade_execute;
}

int Form::get_g_sign( void ) const
{
	return this->_grade_sign;
}

std::string Form::get_name() const
{
	return(_name);
}

std::string Form::get_statement() const
{
	if (this->_log) 
		return " signed";
	return " not signed";
}

void    Form::beSigned( Bureaucrat const & o)
{
	if (this->_log == true)
		throw FormIsSignedException();
	if ( o.getGrade() <= this->_grade_sign)
		this->_log = true;
	else
		throw GradeTooLowException();
}

Form & Form::operator=( Form const & o )
{
	if (this != &o)
		this->_log = o._log;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Form const & f)
{
	o << "Form " << f.get_name() << " with statement" << f.get_statement() << std::endl;
	o << "Grade to sign is " << f.get_g_sign() << std::endl
	<< "Grade to execute is " << f.get_g_execute() << std::endl;
	return o;
}

void        Form::execute(Bureaucrat const & e) const
{
    if (!this->_grade_sign)
        throw FormIsNotSignedException();
    if ( e.getGrade() <= this->_grade_execute)
        this->doing_form_work();
    else
        throw GradeTooLowException();
}
