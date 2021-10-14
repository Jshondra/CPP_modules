#ifndef BUREAUCRAUT_HPP
#define BUREAUCRAUT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		Bureaucrat( void );
	public:
		~Bureaucrat( void );
		Bureaucrat( std::string const  & name, int n );
		Bureaucrat( Bureaucrat const & a );
 		Bureaucrat & operator=( Bureaucrat const & a );

		void inc( void );
		void dec( void );
		void signForm(Form & f);

		//getters//
		std::string getName() const; 
		int	getGrade() const;

		//setter//
		void setGrade( int n );

		//exeptions//
	class GradeTooLowException: public std::exception
	{
		public:
			char const * what() const throw()
			{
				return "Grade is lower than norm";
			}
    }; 

    class GradeTooHighException: public std::exception
	{
		public:
			virtual char const * what() const throw()
			{
				return "Grade is higher than norm";
			}    
    };
};

std::ostream&	operator<<(std::ostream & o, const Bureaucrat &rhc);

#endif