#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character: public ICharacter
{

	private:
		Character( void );

	protected:
		std::string _name;
		int 		_looting;
		AMateria	*_ojects[4];

	public:
		Character( std::string const & name );
		Character( Character const & a);
		virtual ~Character( void );

		virtual void		unequip( int idx );
		virtual void		use( int idx, ICharacter& target );
		virtual std::string	const & getName() const;
		virtual void		equip( AMateria* m );

		Character & operator=( Character const & );
};

#endif