#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _hitpoints;
		int	_energy_points;
		int _attack_damage;
		ClapTrap();

	public:
		ClapTrap( std::string str, int n, int n2, int n3 );
		~ClapTrap( void );
		ClapTrap & operator =(const ClapTrap &last);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	get_name( void );
		int			get_damage( void );
		int			get_energy( void );
		int			get_hitpoints( void );
};

#endif