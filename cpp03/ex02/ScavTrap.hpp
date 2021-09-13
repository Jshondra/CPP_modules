#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
        ScavTrap( std::string str);
        ~ScavTrap( void );
		void guardGate();
		void attack(std::string const & target);
};

#endif