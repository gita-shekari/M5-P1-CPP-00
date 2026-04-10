/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:49:44 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/10 16:45:29 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), count(0)
{
}
std::string PhoneBook::applyForamt(std::string field)
{
	if (field.length() > 10)
		return (field.substr(0, 9) + '.');
	return (field);
}
void PhoneBook::displayContacts()
{
	std::cout << "|"
			  << std::setw(10) << "index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nickname" << "|"
			  << "\n";

	for (int i = 0; i < count; i++)
	{
		std::cout << "|"
				  << std::setw(10) << i+1 << "|"
				  << std::setw(10) << applyForamt(contacts[i].getFirstName()) << "|"
				  << std::setw(10) << applyForamt(contacts[i].getLastName()) << "|"
				  << std::setw(10) << applyForamt(contacts[i].getNickName()) << "|"
				  << "\n";
	}
}
void PhoneBook::displayContact(int i)
{
	if (--i < count)
	{
		std::cout << "first name : " << contacts[i].getFirstName() <<"\n"
		<< "last name : " << contacts[i].getLastName() <<"\n"
		<< "nickname : " << contacts[i].getNickName() <<"\n"
		<< "phone number : " << contacts[i].getPhoneNumber() <<"\n"
		<< "dark secret : " << contacts[i].getDarkSecret() <<"\n";
	}
	else
	{
		std::cout << "Contact doesn't exist." <<"\n";
	}
}
void PhoneBook::addContact(Contact c)
{
	contacts[index] = c;
	index = (index + 1) % 8;
	if (count < 8)
		count++;
}
