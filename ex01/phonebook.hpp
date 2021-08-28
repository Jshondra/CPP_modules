#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include "contact.hpp"

class Contact;

class PhoneBook 
{
	private:
		Contact contacts[10];
		void showContacts(void) const;
		void selectContact(void) const;
		int count;
		int index;
	public:
		PhoneBook();
    	~PhoneBook();
		void	addContact();
		void	searchContact();
};

#endif