/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:49:44 by gshekari          #+#    #+#             */
/*   Updated: 2026/03/25 17:45:12 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int count;
	int index;
public:
	PhoneBook();
	~PhoneBook();
	void addContact(Contact c);
	void displayContacts();
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
	index = 0;
	count = 0;
}

void PhoneBook::displayContacts()
{
}
void PhoneBook::addContact(Contact c)
{
	contacts[index] = c;
	index = count % 8;
	if(index < 8)
		count++;
}
