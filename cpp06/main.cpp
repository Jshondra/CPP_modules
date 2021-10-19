#include <iostream>
#include "Conversion.hpp"

int main(int argc, char **argv)
{
	try
	{
		Conversion cast(&argv[1], argc);
	}
	
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}

	return 0;
}