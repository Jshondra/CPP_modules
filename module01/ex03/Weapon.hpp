#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
			std::string type;
			
	public:
		Weapon(void);
		~Weapon(void);

		const std::string	&getType(void);
		void	setType( std::string new_weapon );
		Weapon(std::string str);
};

#endif