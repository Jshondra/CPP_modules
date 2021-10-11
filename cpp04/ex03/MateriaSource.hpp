#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

	private:
		int			_got;;
		AMateria	*_src[4];

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & a);
		virtual ~MateriaSource( void );
		MateriaSource & operator=( MateriaSource const & a);
		int getStored( void ) const;
		virtual void		learnMateria(AMateria * s);
		virtual AMateria*	createMateria(std::string const & type);

};

#endif