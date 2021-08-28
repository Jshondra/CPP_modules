#include "phonebook.hpp"

Contact::Contact(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone = "";
	this->darkest_secret = "";
}

Contact::~Contact(void)
{
}

void		Contact::set_first_name(std::string	str)
{
	this->first_name = str;
}

void		Contact::set_last_name(std::string	str)
{
	this->last_name = str;
}

void		Contact::set_nick_name(std::string	str)
{
	this->nickname = str;
}

void		Contact::set_phone_number(std::string	str)
{
	this->phone = str;
}

void		Contact::set_darkest_secret(std::string	str)
{
	this->darkest_secret = str;
}

std::string	Contact::get_first_name(void) const
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->phone);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

void	Contact::set_info(void)
{
    std::string str;
	
	std::cout << "Enter First Name: ";
	std::getline(std::cin, str);
	this->set_first_name(str);
	
	std::cout << "Enter Last name: ";
	std::getline(std::cin, str);
	this->set_last_name(str);
	
	std::cout << "Enter nickname: ";
	std::getline(std::cin, str);
	this->set_nick_name(str);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, str);
	this->set_phone_number(str);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, str);
	this->set_darkest_secret(str);
	
}