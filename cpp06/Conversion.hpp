#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <stdexcept>

class Conversion
{
	private:
		Conversion( void );

	public:
		Conversion(char** str, int argc);
		~Conversion ( void );
		Conversion(Conversion const & o);
		Conversion & operator=(Conversion const &);

		void argc_check(int argc);
		//void str_check(std::string str);

		class CastException : public std::exception
		{
			public:
				CastException();
				virtual ~CastException() throw();
				virtual const char *what() const throw();
		};

};

#endif
