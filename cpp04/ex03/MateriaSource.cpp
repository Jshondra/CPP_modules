# include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ):_got(0)
{
	std::cout << "MateriaSource default constructor" << std::endl;

	for (int i = 0; i < 4; i++)
		this->_src[i] = 0;
}

MateriaSource::MateriaSource( MateriaSource const & a ):_got(a._got)
{
	std::cout << "MateriaSource copy constructor" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (a._src[i] != 0)
			this->_src[i] = this->_src[i]->clone();
		else
			this->_src[i] = 0;
	}
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource destructor" << std::endl;

	for (int i = 0; i < 4; i++)
		delete this->_src[i];
}

MateriaSource & MateriaSource::operator=( MateriaSource const & a )
{
	if (this == &a)
		return (*this);

	this->_got = a._got;

	for (int i = 0; i < 4; i++)
		delete this->_src[i];

	for (int i = 0; i < 4; i++)
	{
		if (a._src[i] != 0)
			this->_src[i] = this->_src[i]->clone();
		else
			this->_src[i] = 0;
	}
	return (*this);
}

int MateriaSource::getStored( void ) const
{
	return this->_got;
}

void		MateriaSource::learnMateria(AMateria * s)
{
	if (this->_got == 4 || s == NULL)
		return ;
	_src[this->_got] = s;
	this->_got += 1;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == this->_src[i]->getType())
			return (this->_src[i]->clone());
	}
	return (0);
}