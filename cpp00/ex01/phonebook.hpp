
#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void AddNewContact(int n, std::string UserName, std::string LastName, std::string id, std::string PhoneNumber, std::string Notes);
		PhoneContact get_contact(int n);
        std::string fetch_UserName(int n);
        std::string	fetch_LastName(int n);
        std::string	fetch_id(int n);
        std::string	fetch_PhoneNumber(int n);
        std::string fetch_notes(int n);

	private:
		PhoneContact phonebook[8];
};

#endif