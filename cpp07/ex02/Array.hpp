#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <ctime>

template <typename T>
class Array
{
	private:
		T * _mas;
		unsigned int _len;

	public:
		Array( void ) : _len(0)
		{
			this->_mas = new T[0];
		}

		Array( unsigned int n ) : _len(n)
		{
			this->_mas = new T[n];
		}

		Array( Array const & o ): _len(o._len)
		{
			this->_mas = new T[this->_len];
			for(unsigned int i = 0; i < this->_len; i++)
				this->_mas[i] = o._mas[i];
		}

		~Array( void )
		{
			delete[] _mas;
			_mas = nullptr;
		}

		Array & operator=( Array const & o )
		{
			if (this != &o)
			{
				this->_len = o._len;
				
				delete[] this->_mas;

				this->_mas = new T[this->_len];
				for(size_t i = 0; i < this->_len; i++)
					this->_mas[i] = o._mas[i];
			}
			return *this;
		}

		T & operator[]( unsigned int i )
		{
			if ( this->_len == 0 || i > this->_len)
				throw WrongIndexException();
			return _mas[i];	
		}

		unsigned int size( void )
		{
			return this->_len;
		}

		 class WrongIndexException: public std::exception
    {
        virtual char const * what() const throw()
		{
			return ("Wrong index!");
		}    
    };
};

#endif