#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitpoints = 100;
	this->_attack_damage = 20;
}

FragTrap::FragTrap( std::string str) : ClapTrap(str, 100, 100, 30)
{
    std::cout << str << " Is ready to fight!" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << this->get_name() << " destroyed" << std::endl;
}

void FragTrap:: attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_name << " attack "
	<< target << ", causing " << this->_attack_damage
	<< " points of damage " << std::endl;
	_hitpoints += _attack_damage;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->get_name() << " giving high five to all guys in the area!" << std::endl;
}