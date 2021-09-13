#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_energy_points = 50;
}

ScavTrap::ScavTrap( std::string str) : ClapTrap(str, 100, 50, 20)
{
    std::cout << str << " Is ready to fight!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << this->get_name() << " destroyed" << std::endl;
}

void	ScavTrap:: guardGate()
{
	std::cout << this->get_name() << " ScavTrap  have entered in the GATE KEEPER MODE!" << std::endl;
}
void ScavTrap:: attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attack "
	<< target << ", causing " << this->_attack_damage
	<< " points of damage " << std::endl;
	_hitpoints += _attack_damage;
}