#include <iostream>

struct	Data
{
	std::string str;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main( void )
{
	Data *old_D = new Data;
	old_D->str = "Some string in structure!";
	std::cout << "old str: " << old_D->str << std::endl;
	std::cout << std::endl;
	std::cout << "pointer:" << old_D << std::endl;
	std::cout << std::endl;
	uintptr_t p = serialize(old_D);
	std::cout << "serialized pointer: " << p << std::endl;
	
	Data *new_D = deserialize(p);
	std::cout << "deserialized pointer: " << new_D << std::endl;
	std::cout << std::endl;

	std::cout << "Data after: " << new_D->str << std::endl;

	return 0;
}
