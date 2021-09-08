#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
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
		Fixed( Fixed const & rhc );
		~Fixed( void );

		bool 	operator!=(const Fixed & rhc) const;
		bool 	operator==(const Fixed & rhc) const;
		bool 	operator<=(const Fixed & rhc) const;
		bool 	operator>=(const Fixed & rhc) const;
		bool 	operator<(const Fixed & rhc) const;
		bool 	operator>(const Fixed & rhc) const;

		Fixed	operator--(int);
		Fixed	operator++(int);
		Fixed &	operator--();
		Fixed &	operator++();
		Fixed	operator/(const Fixed & rhc);
		Fixed	operator*(const Fixed & rhc);
		Fixed	operator-(const Fixed & rhc);
		Fixed	operator+(const Fixed & rhc);
		Fixed & operator=(Fixed const & rhc);

		static Fixed const & min(const Fixed &lhc, const Fixed &rhc);
		static Fixed const & max(const Fixed &lhc, const Fixed &rhc);
	
		Fixed & min(Fixed & lhc, Fixed & rhc);
		Fixed & max(Fixed & lhc, Fixed & rhc);

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const src );
};

std::ostream&	operator<<(std::ostream &str, const Fixed &rhc);

#endif