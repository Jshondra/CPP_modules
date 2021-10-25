#include "iter.hpp"

template<typename T>
void display_mas(T & ptr)
{
	std::cout << ptr << std::endl;
}

int main( void )
{
	int i_mass[10] = {1,2,3,4,5};

	double d_mass[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

	char	c_mass[5] = {'a','b','c','d', 'e'};

	std:: cout << "This is array of Ints:" << std::endl;
	iter(i_mass, 5, display_mas);
	std:: cout << std::endl;

	std:: cout << "This is array of Doubles:" << std::endl;
	iter(d_mass, 5, display_mas);
	std:: cout << std::endl;

	std:: cout << "This is array of Char:" << std::endl;
	iter(c_mass, 5, display_mas);
	std:: cout << std::endl;

	return 0;
}

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }
// int main() {
// int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// Awesome tab2[5];
// iter( tab, 5, print );
// iter( tab2, 5, print );
// return 0;
// }