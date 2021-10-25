#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <stdexcept>
#include <iostream>
#include <cfloat>

class Convert
{
	private:
		Convert( void );

		std::string const _str;
		
		double	_double;
		bool	_over;
		bool	_valid;
		int		_dot_zero;

	public:
		Convert(std::string const str, int argc);
		~Convert ( void );
		Convert(Convert const &);
		Convert & operator=(Convert const &);

		void	str_check(std::string str);

		int		check_num(std::string const & s ) const;
		int		inf_search( void ) const;
		int		search_nan( void ) const;

		bool	b_back( std::string const str );
		void	argc_check(int argc);

		/*_______convert___________*/
		char	convert_to_char( void ) const;
		int		convert_to_int( void ) const;
		float	convert_to_float( void ) const;


		/*___________prints_________*/
		void	print_char( void ) const;
		void	print_int( void ) const;
		void	print_float( void ) const;
		void	print_double( void ) const;

		/*_________exceptions________*/
	class ArgsException: public std::exception
	{
		public:
        	char const * what() const throw();
    }; 

	class CantDisplayException: public std::exception
	{
		public:
        	char const * what() const throw();
    };

    class NotPossibleException: public std::exception
	{
    	public:
        	char const * what() const throw();
    };
};

#endif
