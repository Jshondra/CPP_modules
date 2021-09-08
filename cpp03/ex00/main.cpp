#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	// std::cout<<"Hello";
	ClapTrap a("Iron man");
	ClapTrap c("Doctor");
	a.attack(c.get_name());
	a.beRepaired(100);
	c.attack(a.get_name());
	c.beRepaired(50);
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	return 0;
}