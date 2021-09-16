#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::ifstream ifs("strings");
	std::string str1;
	std::string str2;
	ifs >> str1 >> str2;
	ifs.close();

	std::ofstream	ofs("output");
	ofs << str1 << " " << str2;

}