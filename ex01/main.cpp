#include <string>
#include <iostream>
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
	int cmd;

	cmd = 0;
	while(true)
	{
		showMenu();
		std :: cin >> cmd;
		if (cmd == 1)
		{
			Contact contact;
			std::string firstName;
			std::cout << "Enter first name:" << "\n";
			std::cin >> firstName;
			std::string lastName;
			std::cout << "Enter last name:" << "\n";
			std::cin >> lastName;
			contact.setFirstName(firstName);
			contact.setLastName(lastName);
			std::string phoneNumber;
			std::cout << "Enter phone number:" << "\n";
			std::cin >> phoneNumber;
			contact.setPhoneNumber(phoneNumber);
			phoneBook.addContact(contact);
		}
		else if (cmd == 2)
		{
			phoneBook.displayContacts();
		}
		else if (cmd == 3)
		{
			break ;
		}
		else
		{
			std :: cout << "The number you entered is not valid" << "\n";
		}
	}
	return	0;
}
