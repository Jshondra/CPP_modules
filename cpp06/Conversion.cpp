#include "Conversion.hpp"

Conversion::Conversion(){}

Conversion::Conversion(char **str, int argc)
{
	argc_check(argc);
	//str_check(str);
}

Conversion::Conversion( Conversion const & o)
{

}

Conversion::~Conversion(){}

// Conversion & Conversion::operator=(Conversion const & o)
// {

// }

void	argc_check(int argc)
{
	if (argc != 2)
		throw ConversionExeption();
}

// void str_check(std::string str)
// {

// }

const char *Cast::CastException::what() const throw()
{
	return "Входные параметры не прошли проверку";
}