#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string	phone;
		std::string	darkest_secret;
		std::string nickname;
	public:
		Contact();
		~Contact();
		void		set_first_name(std::string	str);
		void		set_last_name(std::string	str);
		void		set_nick_name(std::string	str);
		void		set_phone_number(std::string	str);
		void		set_darkest_secret(std::string	str);
		void		set_info(void);
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;
		int			get_index(void);
};

#endif