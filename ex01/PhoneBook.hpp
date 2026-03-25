/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:20:54 by gshekari          #+#    #+#             */
/*   Updated: 2026/03/25 17:24:10 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK


class PhoneBook
{
private:
	Contact contact[8];
public:
	PhoneBook(/* args */);
	~PhoneBook();
	void displayContacts();
	void addContact(Contact c);
};

#endif
