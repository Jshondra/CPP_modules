#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public FragTrap,  public ScavTrap
{
	public:
		DiamondTrap();
		explicit DiamondTrap( std::string str);
        ~DiamondTrap( void );
		void attack(std::string const & target);
		void highFivesGuys(void);
		void whoAmI();
};

#endif