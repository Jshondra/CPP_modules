#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("_Robot_", 72, 45), _mission("impossible")
{
	std::cout << "Robot constructor!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & o) : Form("_Robot_", 72, 45), _mission(o._mission)
{
	std::cout << "Robot copy!" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm( std::string mission ) : Form("_Robot_", 72, 45), _mission(mission)
{
	std::cout << "Robot with mission created!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "Robot destructor!" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & o)
{
	if (this != &o)
		this->_mission = o._mission;
	return *this;
}

std::string RobotomyRequestForm::get_mission( void ) const
{
	return this->_mission;
}

void	RobotomyRequestForm::set_mission( std::string mission )
{
	this->_mission = mission;
}

void	RobotomyRequestForm::doing_form_work ( void ) const
{
	srand (time(NULL));
	int r = rand();

	std::cout << "Making drilling noises" << std::endl;
	if (r % 2)
		std::cout << "Failure of robo!" << this->_mission << std::endl;
	else
		std::cout << this->_mission << " has been robotomized successfully 50% of the time" << std::endl;	
}

Form	*RobotomyRequestForm::make_another( void ) const
{
	return (new RobotomyRequestForm(this->_mission));
}