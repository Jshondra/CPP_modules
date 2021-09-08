#include <iostream>
#include "ScavTrap.hpp"


int main( void )
{
	// std::cout<<"Hello";
	ClapTrap a("Iron man", 10, 100, 0);
	ClapTrap c("Doctor", 10, 100, 0);
	ScavTrap b("HUMAN", 10, 100, 0);


	std::cout<< b.get_name()<< std::endl;
	std::cout<< b.get_hitpoints()<< std::endl;
	std::cout<< b.get_energy()<< std::endl;
	std::cout<< b.get_damage()<< std::endl;
	a.attack(c.get_name());
	a.beRepaired(100);
	c.attack(a.get_name());
	c.beRepaired(50);
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	return 0;
}