#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	ClapTrap a("Iron man", 10, 100, 20);
	FragTrap c("Doctor");
	ScavTrap b("HUMAN");
	DiamondTrap d("Thor");

	a.beRepaired(0);
	b.attack(a.get_name());
	a.takeDamage(b.get_damage());
	a.beRepaired(20);
	std::cout << std::endl;

	b.guardGate();
	std::cout << std::endl;

	b.beRepaired(0);
	a.attack(b.get_name());
	b.takeDamage(a.get_damage());
	b.beRepaired(20);
	std::cout << std::endl;

	b.beRepaired(0);
	c.attack(b.get_name());
	b.takeDamage(c.get_damage());
	b.beRepaired(20);
	std::cout << std::endl;

	c.highFivesGuys();
	std::cout << std::endl;

	d.whoAmI();	

	if (a.get_hitpoints() > b.get_hitpoints())
		std::cout << a.get_name() << " is the winer with "
		<< a.get_hitpoints() << " hitpoints!" << std::endl;
	else if (a.get_hitpoints() < b.get_hitpoints())
		std::cout << b.get_name() << " is the winer with "
		<< b.get_hitpoints() << " hitpoints!" << std::endl;

	return 0;
}