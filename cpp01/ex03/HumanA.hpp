#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &pistol;
		std::string name;
	public:
		HumanA( std::string str, Weapon &new_weapon );
		void	attack();
};

#endif