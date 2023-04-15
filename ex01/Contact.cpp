#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

std::string	trim_space(const std::string& str)
{
	const std::string remove_char = " \t";
	std::string ret;
	std::string::size_type start = str.find_first_not_of(remove_char);
	if (start != std::string::npos)
	{
		std::string::size_type end = str.find_last_not_of(remove_char);
		ret = str.substr(start, end - start + 1);
	}
	return (ret);
}

void	Contact::add(void)
{
	std::string	tmp_first_name;
	std::string	tmp_last_name;
	std::string tmp_nickname;
	std::string tmp_phone_number;
	std::string tmp_darkest_secret;
	std::cout << "Input some information" << std::endl;
	while (1)
	{
		std::cout << "first name: " << std::flush;
		if (!std::getline(std::cin, tmp_first_name))
			std::exit(1) ;
		tmp_first_name = trim_space(tmp_first_name);
		if (!tmp_first_name.empty())
			break ;
		std::cout << "only empty fields is forbidden!" << std::endl;
	}
	m_first_name = tmp_first_name;
	while (1)
	{
		std::cout << "last name: " << std::flush;
		if (!std::getline(std::cin, tmp_last_name))
			std::exit(1) ;
		tmp_last_name = trim_space(tmp_last_name);
		if (!tmp_last_name.empty())
			break ;
		std::cout << "only empty fields is forbidden!" << std::endl;
	}
	m_last_name = tmp_last_name;
	while (1)
	{
		std::cout << "nick name: " << std::flush;
		if (!std::getline(std::cin, tmp_nickname))
			std::exit(1) ;
		tmp_nickname = trim_space(tmp_nickname);
		if (!tmp_nickname.empty())
			break ;
		std::cout << "only empty fields is forbidden!" << std::endl;
	}
	m_nickname = tmp_nickname;
	while (1)
	{
		std::cout << "phone number: " << std::flush;
		if (!std::getline(std::cin, tmp_phone_number))
			std::exit(1) ;
		tmp_phone_number = trim_space(tmp_phone_number);
		if (!tmp_phone_number.empty())
			break ;
		std::cout << "only empty fields is forbidden!" << std::endl;
	}
	m_phone_number = tmp_phone_number;
	while (1)
	{
		std::cout << "darkest secret: " << std::flush;
		if (!std::getline(std::cin, tmp_darkest_secret))
			std::exit(1) ;
		tmp_darkest_secret = trim_space(tmp_darkest_secret);
		if (!tmp_darkest_secret.empty())
			break ;
		std::cout << "only empty fields is forbidden!" << std::endl;
	}
	m_darkest_secret = tmp_darkest_secret;
}

std::string	Contact::get_first_name(void)
{
	return (m_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (m_last_name);
}

std::string	Contact::get_nickname(void)
{
	return (m_nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (m_phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (m_darkest_secret);
}
