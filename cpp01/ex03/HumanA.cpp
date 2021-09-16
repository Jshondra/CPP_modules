#include "HumanA.hpp"

HumanA::HumanA( std::string str, Weapon &new_weapon ) : pistol(new_weapon)
{
	this->name = str;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << pistol.getType() << std::endl;
}