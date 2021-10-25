#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong amount of arguments!" << std::endl; 
		return 0;
	}
	std::string const str(argv[1]);
	Convert cast(str, argc);
	cast.print_char();
	cast.print_int();
	cast.print_double();
	cast.print_float();
	return 0;

}