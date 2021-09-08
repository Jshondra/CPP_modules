#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {}

ClapTrap::ClapTrap( std::string str, int n, int n2, int n3 ) : _name(str), _hitpoints(n),  _energy_points(n2), _attack_damage(n3)
{
   std::cout << str <<" was born!"<< std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << this->get_name() <<" died in the battle" << std::endl;
}

void ClapTrap:: attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack "
	<< target << ", causing " << this->_attack_damage
	<< " points of damage " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes "
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
	return (this->_name);
}

int ClapTrap::get_damage()
{
	return (this->_attack_damage);
}

int ClapTrap::get_energy()
{
	return (this->_energy_points);
}

int ClapTrap::get_hitpoints()
{
	return (this->_hitpoints);
}

ClapTrap&  ClapTrap::operator=(const ClapTrap &last)
{

	std::cout << "ClapTrap: Assignation operator called" << std::endl;
	
	if (this == &last)
	{
		return (*this);
	}
	this->_name  = last._name;
	this->_hitpoints = last._hitpoints;
	this->_energy_points = last._energy_points;
	this->_attack_damage = last._hitpoints;
	return (*this);
}