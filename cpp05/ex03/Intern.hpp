#ifndef INTERN_H
# define INTERN_H

#include "Form.hpp"

class Intern {

	private:
		Form    *makeShrub( std::string mission );
		Form    *makePresident( std::string mission );
		Form    *makeRobo( std::string mission );

	public:
		Intern( void ){}
		Intern( Intern const & o);
		~Intern( void ){}

		Intern & operator=( Intern const & );
		Form    *makeForm(std::string name, std::string mission);

};

#endif