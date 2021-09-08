#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

// class ClapTrap
// {
// 	private:
// 		std::string const name;
// 		int hitpoints;
// 		int	energy_points;
// 		int attack_damage;

// 	public:
// 		ClapTrap( std::string str );
// 		~ClapTrap( void );

// 		void attack(std::string const & target);
// 		void takeDamage(unsigned int amount);
// 		void beRepaired(unsigned int amount);
// 		std::string	get_name( void );
// 		int get_damage( void );
// 		int get_energy( void );
// 		int get_hitpoints( void );
// 		int n;

// };

class ScavTrap : public ClapTrap
{
	public:
        ScavTrap( std::string str, int n, int n2, int n3);
        ~ScavTrap( void );
        ScavTrap(void);
		int n;
        std::string str;
        // void print( void )
        // {
        //     std::cout<< name << std::endl;
        // }
       
};

#endif