#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		void	add(void);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
	private:
		std::string	m_first_name;
		std::string	m_last_name;
		std::string	m_nickname;
		std::string	m_phone_number;
		std::string	m_darkest_secret;
};
#endif
