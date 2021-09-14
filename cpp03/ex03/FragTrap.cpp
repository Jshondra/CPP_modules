#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitpoints = 100;
	this->_attack_damage = 50;
}

FragTrap::FragTrap( std::string str) : ClapTrap(100, 100, 30)
{
    this->_name = str;
	std::cout << "FragTrap " << str << " Is ready to fight!" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->get_name() << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->get_name() << " giving high five to all guys in the area!" << std::endl;
}