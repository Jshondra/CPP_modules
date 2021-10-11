#include "Character.hpp"

Character::Character() : _name("black"), _looting(0){}

Character::Character(std::string const & str) : _name(str), _looting(0)
{
	std::cout << "Character parametric constructor" << std::endl;
	for(int i = 0; i < 4; i++)
		this->_ojects[i] = 0;
}

Character::Character(Character const & a) : _looting(a._looting)
{
	std::cout << "Character copy constructor" << std::endl;
		for(int i = 0; i < 4; i++)
		{
			if (a._ojects[i] != 0)
				this->_ojects[i] = this->_ojects[i]->clone();
			else
				this->_ojects[i] = 0;
		}
}

Character & Character::operator=( Character const & a )
{
	if (this == &a)
		return *this;
	this->_looting = a._looting;

	for (int i = 0; i < 4; i++)
		delete this->_ojects[i];

	for (int i = 0; i < 4; i++)
	{
		if (a._ojects[i] != 0)
			this->_ojects[i] = this->_ojects[i]->clone();
		else
			this->_ojects[i] = 0;
	}
	return *this;
}

Character::~Character( void )
{
	std::cout << "Character destructor" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_ojects[i];
}

std::string const & Character::getName() const
{
	return(this->_name);
}

void Character::unequip( int idx )
{
	if( idx < 0 || idx > 3 || idx >= this->_looting ||
		this->_ojects[idx] == 0 )
		return;

	for (int i = idx; i < 3; i++)
	{
		this->_ojects[i] = this->_ojects[i + 1];
		this->_ojects[i + 1] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if( idx < 0 || idx > 4 || idx >= this->_looting ||
		this->_ojects[idx] == 0 )
		return;
	_ojects[idx]->use(target);
}

void Character::equip( AMateria * s )
{
	if (_looting == 4 || s == NULL)
		return ;
	_ojects[_looting] = s;
	_looting += 1;
}

