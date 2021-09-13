#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {}

DiamondTrap::DiamondTrap( std::string str) : ClapTrap(str), FragTrap(), ScavTrap()
{
    std::cout << str << " Is ready to fight!" << std::endl;
	::ClapTrap _name = str.append("_clap_name");
	this->_name = str;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << this->get_name() << " destroyed" << std::endl;
}

void DiamondTrap:: attack(std::string const & target)
{
	std::cout << "DiamondTrap " << this->_name << " attack "
	<< target << ", causing " << this->_attack_damage
	<< " points of damage " << std::endl;
	_hitpoints += _attack_damage;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DimondTrap_name " << this->_name << std::endl;
	std::cout << "ClapTrap_name " << ClapTrap:: _name << std::endl;
}
