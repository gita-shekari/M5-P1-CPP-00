/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:23:42 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/07 16:52:38 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
private:
	std :: string firstName;
	std :: string lastName;
	std :: string nickName;
	std :: string phoneNumber;
	std :: string darkSecret;
public:
	Contact(/* args */);
	~Contact();
	void setFirstName(std::string fn);
	void setLastName(std::string ln);
	void setNickName(std::string nn);
	void setPhoneNumber(std::string pn);
	void setDarkSecret(std::string ds);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkSecret();
};

Contact::Contact()
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

void Contact::setNickName(std::string nn)
{
	nickName = nn;
}

void Contact::setPhoneNumber(std::string pn)
{
	phoneNumber = pn;
}
void Contact::setDarkSecret(std::string ds)
{
	darkSecret = ds;
}

std::string	Contact::getFirstName()
{
	return firstName;
}
std::string	Contact::getLastName()
{
	return lastName;
}
std::string	Contact::getNickName()
{
	return nickName;
}
std::string	Contact::getPhoneNumber()
{
	return phoneNumber;
}
std::string	Contact::getDarkSecret()
{
	return darkSecret;
}
