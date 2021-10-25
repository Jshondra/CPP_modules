#include "Convert.hpp"

Convert::Convert(){}

Convert::Convert(std::string const str, int argc) : _str(str)
{
	try
	{
		if (argc != 2)
			throw ArgsException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	this->str_check(_str);
}

Convert::Convert( Convert const & o): _str(o._str)
{
	this->str_check(o._str);
}

Convert::~Convert()
{
	std::cout << "Destructor called!" << std::endl;
}

Convert & Convert::operator=(Convert const &)
{
	return *this;
}

int Convert::check_num(std::string const & symbol ) const
{
	std::string::const_iterator	pit = symbol.begin();
	
	bool dec;

	if (*pit == '.')
		dec = true;
	else
		dec = false;

	if (this->inf_search() == 1 || this->search_nan() == 1)
		return 1;

	while (pit != symbol.end())
	{
		if (pit == symbol.begin() &&
			(*pit == '+' || *pit == '-' || *pit == '.'))
		{
			++pit;
			continue;
		}
		if (*pit == '.')
		{
			if (dec == 1) return 0 ;
			if (pit + 1 == symbol.end()) return 0;
			dec = 1;
			++pit;
			continue;
		}
		else if (!isdigit(static_cast<char>(*pit)))
			if (!(pit == symbol.end() - 1 && *pit == 'f'))
				return 0;
		++pit;
	}
	return 1;
}

void Convert::str_check(std::string const str)
{
	try
	{
		if (check_num(str) == 0)
			throw std::invalid_argument("Invalid characters");
		_double = std::stod(str);
		_valid = true;
		_over = false;
	}
	catch(const std::invalid_argument& e)
	{
		_double = 0;
		_valid = false;
		_over = false;
	}
	catch(const std::out_of_range& e)
	{
		_valid = true;
		_over = true;
		_double = 0;
	}
	 _dot_zero = b_back(str);
}

bool	Convert::b_back( std::string const str )
{
	if (static_cast<int>(_double) == _double && str.length() < 6)
		return (true);
	else
		return (false);
}

int		Convert::inf_search( void ) const
{
	std::string copy_str(this->_str);

	for(unsigned long i = 0; i < copy_str.length(); ++i)
		copy_str[i] = static_cast<char>(copy_str[i]);

	if (copy_str == "+inf" || copy_str == "-inf"  || copy_str == "inf" || copy_str == "inff"
		|| copy_str == "+inff" || copy_str == "-inff")
		return 1;
	return 0;
}



int    Convert::search_nan( void ) const
{
    std::string copy_str(this->_str);

    for(unsigned long i = 0; i < copy_str.length(); ++i)
        copy_str[i] = static_cast<char>(std::tolower(copy_str[i]));
	
	if (copy_str == "nan" || copy_str == "nanf")
        return 1;

    return 0;
}

char   Convert::convert_to_char( void ) const
{
    if (this->_valid == false || this->_over == true)
        throw Convert::NotPossibleException();

    int to_Int = static_cast<int>(this->_double);

    if ( to_Int < SCHAR_MIN || to_Int > SCHAR_MAX)
        throw Convert::NotPossibleException();
    else if (std::isprint(to_Int) == false)
        throw Convert::CantDisplayException();

    return static_cast<char>(to_Int);
}

int   Convert::convert_to_int( void ) const
{
    if (this->_valid == false || this->_over== true)
        throw Convert::NotPossibleException();

    if (this->_double > static_cast<double>(INT_MAX) \
        || this->_double < static_cast<double>(INT_MIN) \
        || this->search_nan() == 1)
        throw Convert::NotPossibleException();

    int to_Int = static_cast<int>(this->_double);

    return to_Int;
}

float   Convert::convert_to_float( void ) const
{
    if (this->_valid == false || this->_over== true)
        throw Convert::NotPossibleException();

    if (this->inf_search() == 0 && (this->_double > static_cast<double>(FLT_MAX)
		|| this->_double < static_cast<double>(-FLT_MAX)))
		throw Convert::NotPossibleException();
       
    float	to_Float = static_cast<float>(this->_double);

    return to_Float;
}

void	Convert::print_char( void ) const
{
	std::cout << "This is char: ";

	try
	{
		char c = this->convert_to_char();
		std::cout << c << std::endl;
	}

	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void    Convert::print_int( void ) const
{
    std::cout << "This is int: ";

    try
    {
        int i = this->convert_to_int();
        std::cout << i << std::endl;
    }

    catch(const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Convert::print_float( void ) const
{
    std::cout << "This is float: ";

    try
    {
        float f = this-> convert_to_float();
        std::cout << f;
        if (_dot_zero == true)
        	std::cout << ".0";
        std::cout << "f" << std::endl;
    }

    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    Convert::print_double( void ) const
{
	std::cout << "This is double: ";

    try
    {
		if (this->_valid == false || this->_over == true)
		{
		    throw Convert::NotPossibleException();
		}
		std::cout << this->_double;
		if (_dot_zero == true)
			std::cout << ".0";
		std::cout << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
}

const char *Convert::ArgsException::what() const throw()
{
	return "Wrong amount of arguments!";
}

const char *Convert::CantDisplayException::what() const throw()
{
	return ("non displayble");
}

const char *Convert::NotPossibleException::what() const throw()
{
	return ("impossible");
}
