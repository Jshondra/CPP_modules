#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _fixed_n;
		static const int _nbr_b = 8;

	public:
		Fixed( void );
		Fixed( Fixed const &rhc );
		~Fixed( void );
		Fixed & operator=(Fixed const & rhc);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif