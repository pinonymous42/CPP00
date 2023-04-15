#include "Contact.hpp"
#include "PhoneBook.hpp"
int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	int			i = 0;
	while (1)
	{
		std::cout << "write a command <ADD / SEARCH / EXIT>: " << std::flush;
		if (!std::getline(std::cin, command))
			return (1);
		if (command == "ADD")
			phonebook.add_to_contact(i);
		else if (command == "SEARCH")
			phonebook.search_for_contact(i);
		else if (command == "EXIT")
			return (0);
	}
	return (0);
}
