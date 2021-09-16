#include "HumanB.hpp"

HumanB::HumanB(void)
{
	this->name = "";
}

HumanB::~HumanB(void)
{
	
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}


void HumanB::setWeapon(Weapon &weapon) {
	this->pistol = &weapon;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << pistol->getType() << std::endl;
}