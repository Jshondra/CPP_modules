#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
        ScavTrap( std::string str);
        ~ScavTrap( void );
		void guardGate();
		virtual void attack(std::string const & target);
};

#endif