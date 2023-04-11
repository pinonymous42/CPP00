#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::add_to_contact(int& i)
{
	contact[i % 8].add();
	i++;
}

void	PhoneBook::search_for_contact(int& i)
{
	int			tmp_index = 0;
	std::string tmp_first_name;
	std::string tmp_last_name;
	std::string tmp_nickname;
	std::string	search_index;
	std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << 
	"first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) <<
	"nick name" << "|" << std::endl;
	for (tmp_index = 0; tmp_index < i && tmp_index < 8 ; tmp_index++)
	{
		if (contact[tmp_index].get_first_name().length() > 10)
		{
			tmp_first_name = contact[tmp_index].get_first_name();
			tmp_first_name.replace(9, tmp_first_name.length() - 9, ".");
		}
		else
			tmp_first_name = contact[tmp_index].get_first_name();
			
		if (contact[tmp_index].get_last_name().length() > 10)
		{
			tmp_last_name = contact[tmp_index].get_last_name();
			tmp_last_name.replace(9, tmp_last_name.length() - 9, ".");
		}
		else
			tmp_last_name = contact[tmp_index].get_last_name();

		if (contact[tmp_index].get_nickname().length() > 10)
		{
			tmp_nickname = contact[tmp_index].get_nickname();
			tmp_nickname.replace(9, tmp_nickname.length() - 9, ".");
		}
		else
			tmp_nickname = contact[tmp_index].get_nickname();
		std::cout << "|" << std::setw(10) << tmp_index << "|" << std::setw(10) << 
		tmp_first_name << "|" << std::setw(10) << tmp_last_name << "|" << std::setw(10) <<
		tmp_nickname << "|" << std::endl;
	}
	std::cout << "Enter an index: ";
	if (!std::getline(std::cin, search_index))
		std::exit(1);
	if ('0' <= search_index[0] && search_index[0] <= '7' && search_index.length() == 1)
	{
		tmp_index = search_index[0] - '0';
		if (tmp_index >= 0 && tmp_index <= 7 && tmp_index <= i)
		{
			std::cout << "first name: " << contact[tmp_index].get_first_name() << std::endl;
			std::cout << "last name: " << contact[tmp_index].get_last_name() << std::endl;
			std::cout << "nickname: " << contact[tmp_index].get_nickname() << std::endl;
			std::cout << "phone number: " << contact[tmp_index].get_phone_number() << std::endl;
			std::cout << "darkest secret: " << contact[tmp_index].get_darkest_secret() << std::endl;
		}
		else
			std::cout << "input a right index" << std::endl;
	}
	else
		std::cout << "input a right index" << std::endl;
}
