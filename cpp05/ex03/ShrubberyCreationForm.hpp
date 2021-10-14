#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#define FILE_TXT "________###88888####__###888888880###\n\
_____###88880000088888##888000000008888###\n\
___##888000000000000##88800000000000088888##\n\
__#8800000000000000##880000000000000000888####\n\
__#8000000000000000#88000000000000000000888####\n\
_#0000000000000000#800000000000000000000888####\n\
_#8000000000000000#800000000000000000000888####\n\
_#8000000000000000#800000000000000000008888####\n\
__#80000000000000ASCII_TREEEEEEEES00008888#####\n\
___#8000000000000000000000000000000888######\n\
____#800000000000000000000000008888#######\n\
_____#8800000000000000000000888########\n\
______##880000000000000000088########\n\
________##880000000000000088#######\n\
__________##880000000000888######\n\
____________##888000000088#####\n\
________________####88808####\n\
____________________##888###\n\
______________________##8##\n\
________________________#8#\n\
__________________________8#\n"

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm( void );
		std::string _mission;

	public:
		ShrubberyCreationForm( std::string mission );
		ShrubberyCreationForm( ShrubberyCreationForm const & o );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & o);

		void        set_mission( std::string mission );
		std::string get_mission( void ) const;
		void        doing_form_work( void ) const;
		Form        *make_another( void ) const;
};

#endif