#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie( void );
		~Zombie( void );
		void get_name();
		Zombie( std::string name );
		void give_name(std::string new_name);
};

Zombie* zombieHorde( int N, std::string name );

#endif