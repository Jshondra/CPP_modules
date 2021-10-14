#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("_Shrub_", 145, 137), _mission("impossible")
{
	std::cout << "Shrub constructor!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & o) : Form("_Shrub_", 145, 137), _mission(o._mission)
{
	std::cout << "Shrub copy!" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm( std::string mission ) : Form("_Shrub_", 145, 137), _mission(mission)
{
    std::cout << "Shrubb with mission created!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "Shrub destructor!" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & o)
{
	if (this != &o)
		this->_mission = o._mission;
	return *this;
}

std::string ShrubberyCreationForm::get_mission( void ) const
{
    return this->_mission;
}

void        ShrubberyCreationForm::set_mission( std::string mission )
{
    this->_mission = mission;
}

void        ShrubberyCreationForm::doing_form_work ( void ) const
{
    std::string file_name = this->_mission + "_shrubbery";
    
    try
    {
        std::ofstream F(file_name);
        F << FILE_TXT;
    	F.close();
        std::cout << "I LOVE ASCII TREES! " << file_name;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
}

Form        *ShrubberyCreationForm::make_another( void ) const
{
    return (new ShrubberyCreationForm(this->_mission));
}