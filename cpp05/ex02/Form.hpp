#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string 	_name;
		int const           _grade_sign;
    	int const           _grade_execute;
		bool				_log;
		
		Form();

	public:
		~Form();
		Form(Form const & a);
		Form( std::string name, int grade_s, int grade_e);

		Form & operator=( Form const & o );

		std::string	get_name() const;
		std::string	get_statement() const;
		int			get_g_sign( void ) const;
		int			get_g_execute( void ) const;
		bool		get_log( void ) const;
		void		beSigned( Bureaucrat const & o);

		void		execute(Bureaucrat const & executor) const;

		virtual void	doing_form_work( void ) const = 0;

	class GradeTooLowException: public std::exception
	{
		public:
			char const * what() const throw()
			{
				return "Grade is lower than norm!";
			}
	}; 

	class GradeTooHighException: public std::exception
	{
		public:
			virtual char const * what() const throw()
			{
				return "Grade is higher than norm!";
			}    
	};

	class FormIsSignedException: public std::exception
	{
		public:
			virtual char const * what() const throw()
			{
				return ("It's signed already!");
			}
	};

	class FormIsNotSignedException: public std::exception
	{
		public:
			virtual char const * what() const throw()
			{
				return ("Form is not signed!!!");
			}    
    };
};

	std::ostream & operator<<(std::ostream & o, Form const & f);

	#endif