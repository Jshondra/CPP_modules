#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void) : ClapTrap() {}

ScavTrap::ScavTrap( std::string str, int n, int n2, int n3) : ClapTrap(str, n, n2, n3)
{

    std::cout << str <<" was born!"<< std::endl;
}

ScavTrap::~ScavTrap( void )
{
	// std::cout << this->get_name() <<" died in the battle" << std::endl;
}

// ClapTrap::ClapTrap( std::string str ) : name(str), hitpoints(10), attack_damage(0), energy_points(10)
// {
//    std::cout << str <<" was born!"<< std::endl;
// }

// void ScavTrap:: attack(std::string const & target)
// {
// 	std::cout << "ScavTrap " << this->name << " attack "
// 	<< target << ", causing " << this->attack_damage
// 	<< " points of damage " << std::endl;
// }

// void ScavTrap::takeDamage(unsigned int amount)
// {
// 	std::cout << "ScavTrap " << this->name << " takes "
// 	<< amount << " points of damage from someone" << std::endl;
// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
// 	std::cout << "ScavTrap " << this->get_name() << " repairs "
// 	<< amount << " points of energy" << std::endl;
// }

// // getters

// std::string ScavTrap::get_name()
// {
// 	return (this->name);
// }

// int ScavTrap::get_damage()
// {
// 	return (this->attack_damage);
// }

// int ScavTrap::get_energy()
// {
// 	return (this->energy_points);
// }

// int ScavTrap::get_hitpoints()
// {
// 	return (this->hitpoints);
// }