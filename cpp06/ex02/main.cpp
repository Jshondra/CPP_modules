#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base*	generate(void)
{
	srand (static_cast<unsigned int>(time(NULL)));
	int n_class = std::rand() % 3;

	if (n_class == 0)
	{
		std::cout << "Creating A" << std::endl;
		return new A;
	}
	if (n_class == 1)
	{
		std::cout << "Creating B" << std::endl;
		return new B;
	}
	std::cout << "Creating C" << std::endl;
	return new C;
}

void	identify_point(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "(POINTER) class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "(POINTER) class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "(POINTER) class C" << std::endl;
}

void	identify_reference(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "(REF) class A" << std::endl;	
	}
	
	catch (...) {}
	
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "(REF) class B" << std::endl;
	}
	catch (...) {}
	
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "(REF) class C" << std::endl;
	}
	catch (...) {}
}

int main()
{
    Base *base = generate();
    identify_point(base);
    identify_reference(*base);
    return 0;
}


    



