#include "Array.hpp"

void check_strs()
{
	std::cout << "Mystr" << std::endl;
	Array<std::string> mas0(4);
	mas0[0] = "Hey";
	mas0[1] = "Arnold";
	mas0[2] = "!!!";

	for (uint i = 0; i < mas0.size(); ++i)
		try 
		{
			std::cout << mas0[i] << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << exception.what() << std::endl;
		}
}

int main(int, char**)
{

	std::srand(time(NULL));
	check_strs();

	int N = 100;

    Array<int> mas_class(N);

    int* mas1 = new int[N];

    for (int i = 0; i < N; i++)
    {
        int a = rand();
        mas_class[i] = a;
        mas1[i] = a;
    }
    for (int i = 0; i < N; i++)
    {
        if (mas1[i] != mas_class[i])
        {
			std::cout << "Wrong saving!\n" << std::endl;
            return 0;
        }
    }
	delete [] mas1;
	std::cout  << std::endl;
	std::cout << "OK\n" << std::endl;

	Array<int> A = mas_class;
	Array<int> B(A);

	for (int i = 0; i < N; i++)
	{
		if (A[i] != mas_class[i])
		{
			std::cout << "Copy constructor problem!" << std::endl;
			return 0;
		}
	}
		std::cout << "OK" << std::endl;

    try
    {
        mas_class[-3] = 0;
    }

    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
		std::cout << "OK if caught" << std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        mas_class[i] = i;
        std::cout << "mas_class[" << i << "] = " << mas_class[i] << std::endl;
    }
	std::cout << "OK" << std::endl;

    try
	{
		Array<char> emptyArray;
		std::cout << "OK" << std::endl;
		std::cout << emptyArray[0] << std::endl;
    }

    catch (const std::exception& e)
    {
    	std::cerr << e.what() << '\n';
		std::cout << "OK if caught" << std::endl;
    } 
    return 0;
}