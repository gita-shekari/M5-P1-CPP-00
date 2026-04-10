#include <string>
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void showMenu()
{
	std :: cout << ".....Phone Book....." << "\n";
	std :: cout << "Choose your command:" << "\n";
	std :: cout << "1. Add Contact" << "\n";
	std :: cout << "2. Search Contact" << "\n";
	std :: cout << "3. Exit" << "\n";
}

int main()
{
	PhoneBook phoneBook;
	std::string cmd;

	while(true)
	{
		cmd = "";
		showMenu();
		std :: cin >> cmd;
		Contact contact;
		if (cmd == "ADD")
		{
			std::string firstName;
			std::cout << "Enter first name:" << "\n";
			std::cin >> firstName;
			contact.setFirstName(firstName);

			std::string lastName;
			std::cout << "Enter last name:" << "\n";
			std::cin >> lastName;
			contact.setLastName(lastName);

			std::string nickName;
			std::cout << "Enter nick name:" << "\n";
			std::cin >> nickName;
			contact.setNickName(nickName);

			std::string phoneNumber;
			std::cout << "Enter phone number:" << "\n";
			std::cin >> phoneNumber;
			contact.setPhoneNumber(phoneNumber);

			std::string darkSecret;
			std::cout << "Enter dark secret:" << "\n";
			std::cin >> darkSecret;
			contact.setDarkSecret(darkSecret);
			phoneBook.addContact(contact);
		}
		else if (cmd == "SEARCH")
		{
			phoneBook.displayContacts();
			std::string index;
			std::cout << "Enter the index:" << "\n";
			std::cin >> index;
			int i = std::atoi(index.c_str());
			if (i > 0 && i < 9)
				phoneBook.displayContact(i);
			else
				std :: cout << "The number you entered is not valid" << "\n";
		}
		else if (cmd == "EXIT")
			break ;
		else
			std :: cout << "The number you entered is not valid" << "\n";
	}
	return	(0);
}
