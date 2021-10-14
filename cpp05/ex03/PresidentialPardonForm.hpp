#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _mission;
		PresidentialPardonForm( void );

	public:
		PresidentialPardonForm( std::string mission );
		PresidentialPardonForm( PresidentialPardonForm const & o );
		~PresidentialPardonForm( void );

		PresidentialPardonForm & operator=( PresidentialPardonForm const & o);

		void        set_mission( std::string mission );
		std::string get_mission( void ) const;
		void        doing_form_work( void ) const;
		Form        *make_another( void ) const;
};

#endif
