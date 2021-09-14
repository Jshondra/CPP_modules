#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {}

ClapTrap::ClapTrap(std::string str) : _name(str){}

ClapTrap::ClapTrap( std::string str, int n, int n2, int n3 ) : _name(str), _hitpoints(n),  _energy_points(n2), _attack_damage(n3)
{
   std::cout << "ClapTrap " << str << " was born!" << std::endl;
}

ClapTrap::ClapTrap( int n, int n2, int n3 ) :  _hitpoints(n),  _energy_points(n2), _attack_damage(n3)
{}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->get_name() << " died in the battle" << std::endl;
}

void ClapTrap:: attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack "
	<< target << ", causing " << this->_attack_damage
	<< " points of damage " << std::endl;
	_hitpoints += _attack_damage;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes "
	<< amount << " points of damage from someone" ;
	this->_energy_points -= amount;
	if ( this->_energy_points > 0)
	{
		std::cout << " and now have " << this->_energy_points
		<< " energy points" << std::endl;
	}
	else
	{
		this->_energy_points = 0;
		std::cout << " and now have minimum energy points and need repair" << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_energy_points += amount;
	std::cout << this->get_name() << " repairs "
	<< amount << " points of energy and now have "
	<< this->_energy_points << " points of energy" << std::endl;
	
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
