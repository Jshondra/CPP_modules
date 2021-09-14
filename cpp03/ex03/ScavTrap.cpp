#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_energy_points = 50;
}

ScavTrap::ScavTrap( std::string str) : ClapTrap(100, 50, 20)
{
	this->_name = str;
    std::cout << "ScavTrap " << str << " Is ready to fight!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->get_name() << " burnt in fire" << std::endl;
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