/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:23:42 by gshekari          #+#    #+#             */
/*   Updated: 2026/03/25 19:37:12 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
private:
	std :: string firstName;
	std :: string lastName;
	std :: string phoneNumber;
public:
	Contact(/* args */);
	~Contact();
	void setFirstName(std::string fn);
	void setLastName(std::string ln);
	void setPhoneNumber(std::string pn);
};

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

void Contact::setFirstName(std::string fn)
{
	firstName = fn;
}

void Contact::setLastName(std::string ln)
{
	lastName = ln;
}

void Contact::setPhoneNumber(std::string pn)
{
	phoneNumber = pn;
}
