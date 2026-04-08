/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:20:54 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/08 17:34:25 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK


class PhoneBook
{
private:
	Contact contacts[8];
	int index;
	int count;
public:
	PhoneBook();
	~PhoneBook();
	void displayContacts();
	void displayContact(int i);
	void addContact(Contact c);
	std::string applyForamt(std::string field);
};

#endif
