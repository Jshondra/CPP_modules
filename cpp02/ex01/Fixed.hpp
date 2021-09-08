#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _fixed_n;
		static const int _nbr_b = 8;

	public:
		Fixed();
		Fixed( const int n );
		Fixed( const float n );
		Fixed( Fixed const &rhc );
		~Fixed( void );
		Fixed & operator=(Fixed const & rhc);

		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream&	operator<<(std::ostream &str, const Fixed &rhc);

#endif