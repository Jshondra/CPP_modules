#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("_President_", 25, 5), _mission("impossible")
{
	std::cout << "President constructor!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & o) : Form("_President_", 25, 5), _mission(o._mission)
{
	std::cout << "President copy!" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm( std::string mission ) : Form("_President_", 25, 5), _mission(mission)
{
    std::cout << "President with mission created!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "President destructor!" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & o)
{
	if (this != &o)
		this->_mission = o._mission;
	return *this;
}

std::string PresidentialPardonForm::get_mission( void ) const
{
    return this->_mission;
}

void        PresidentialPardonForm::set_mission( std::string mission )
{
    this->_mission = mission;
}

void        PresidentialPardonForm::doing_form_work ( void ) const
{
	std::cout << this->_mission << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}

 Form	*PresidentialPardonForm::make_another( void ) const
 {
     return (new PresidentialPardonForm(this->_mission));
 }