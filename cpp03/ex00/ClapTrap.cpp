#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string str ) : name(str), hitpoints(10), attack_damage(0), energy_points(10)
{
   std::cout << str <<" was born!"<< std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << this->get_name() <<" died in the battle" << std::endl;
}

void ClapTrap:: attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack "
	<< target << ", causing " << this->attack_damage
	<< " points of damage " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes "
	<< amount << " points of damage from someone" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->get_name() << " repairs "
	<< amount << " points of energy" << std::endl;
}

// getters

std::string ClapTrap::get_name()
{
	return (this->name);
}

int ClapTrap::get_damage()
{
	return (this->attack_damage);
}

int ClapTrap::get_energy()
{
	return (this->energy_points);
}

int ClapTrap::get_hitpoints()
{
	return (this->hitpoints);
}