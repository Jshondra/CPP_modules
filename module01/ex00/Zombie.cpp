#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "";
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " is dying..." << std::endl;
}

Zombie::Zombie( std::string name )
{
	this->name = name;
}

void Zombie::get_name( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}