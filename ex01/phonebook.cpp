#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->count = 0;
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	print(void)
{
	std::cout.width(10);
	std::cout << "index" << "|";
	std::cout.width(10);
	std::cout << "first name" << "|";
	std::cout.width(10);
	std::cout << "last name" << "|";
	std::cout.width(10);
	std::cout << "nickname" << "|" << std::endl;
}

void PhoneBook::showContacts(void) const
{
	for (int i = 0; i < this->count; i++)
	{
		std::cout.width(10);
		std::cout << std::right << i << "|";
		std::cout.width(10);
		if (this->contacts[i].get_first_name().length() > 10)
			std::cout << std::right << this->contacts[i].get_first_name().substr(0, 9) + "." << "|";
		else
			std::cout << std::right << this->contacts[i].get_first_name() << "|";
		std::cout.width(10);
		if (this->contacts[i].get_last_name().length() > 10)
			std::cout << std::right << this->contacts[i].get_last_name().substr(0, 9) + "." << "|";
		else
			std::cout << std::right << this->contacts[i].get_last_name() << "|";
		std::cout.width(10);
		if (this->contacts[i].get_nickname().length() > 10)
			std::cout << std::right << this->contacts[i].get_nickname().substr(0, 9) + "." << "|" << std::endl;
		else
			std::cout << std::right << this->contacts[i].get_nickname() << "|" << std::endl;
	}
}

void PhoneBook::selectContact(void) const
{
	std::string str;
	int	index;

	std::cout << "Enter index of contact: " << std::endl;
	getline(std::cin, str);
	index = atoi(str.c_str());
	if (index < 0 || index > this->count - 1)
	{
		std::cout << "No contact with this index!" << std::endl;
		return ;
	}
	std::cout << "All info about contact" << std::endl;
	std::cout << "first name: " << this->contacts[index].get_first_name() << std::endl;
	std::cout << "last name: " << this->contacts[index].get_last_name() << std::endl;
	std::cout << "nickname: " << this->contacts[index].get_nickname() << std::endl;
	std::cout << "phone number: " << this->contacts[index].get_phone_number() << std::endl;
	std::cout << "darkest secret: " << this->contacts[index].get_darkest_secret() << std::endl;
}

void	PhoneBook::searchContact()
{
	if (this->count == 0)
		std::cout << "Sorry, PhoneBook is empty" << std::endl;
	showContacts();
	selectContact();
} 

void	PhoneBook::addContact()
{
	if (this->index > 7)
		this->index = 0;
	this->contacts[this->index].set_info();
	if (this->count < 8)
		this->count++;
	this->index++;
}

int	main()
{
	std::string str;
	PhoneBook person;

	while (1)
	{
		std::cout << "Enter your command: ADD/SEARCH/EXIT" << std::endl;
		if (!std::getline(std::cin, str)) 
		{
			std::cout << "See ya!"<<std::endl;
			return (1);
		}
		else if (!str.compare("EXIT"))
		{
			std::cout << "See ya!"<<std::endl;
			exit(0);
		}
		else if (!str.compare("ADD"))
			person.addContact();
		else if (!str.compare("SEARCH"))
		{
			print();
			person.searchContact();
		}
	}
	return (0);
}