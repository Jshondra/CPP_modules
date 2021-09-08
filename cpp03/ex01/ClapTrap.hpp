#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string const name;
		int hitpoints;
		int	energy_points;
		int attack_damage;

	public:
		ClapTrap( std::string str );
		~ClapTrap( void );

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string	get_name( void );
		int get_damage( void );
		int get_energy( void );
		int get_hitpoints( void );

};

#endif