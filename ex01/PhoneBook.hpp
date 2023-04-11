#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_to_contact(int& i);
		void	search_for_contact(int& i);
	private:
		Contact contact[8];
};
#endif
