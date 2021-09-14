#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {}

DiamondTrap::DiamondTrap( std::string str ) : ClapTrap(str + "_clap_name"), FragTrap(), ScavTrap()
{
	this->_name = str;
    std::cout << "DiamondTrap " << str << " Is ready to fight!" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->_name << " going to paradise" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DimondTrap_name " << _name << std::endl;
	std::cout << "ClapTrap_name " << ClapTrap:: _name << std::endl;
}
