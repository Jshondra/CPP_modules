#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _mission;
		RobotomyRequestForm( void );

	public:
		RobotomyRequestForm( std::string mission );
		RobotomyRequestForm( RobotomyRequestForm const & o );
		~RobotomyRequestForm( void );

		RobotomyRequestForm & operator=( RobotomyRequestForm const & o);

		void        set_mission( std::string mission );
		std::string get_mission( void ) const;
		void        doing_form_work( void ) const;
		Form        *make_another( void ) const;
};

#endif