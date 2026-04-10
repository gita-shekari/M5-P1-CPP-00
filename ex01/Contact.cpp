/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:23:42 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/10 16:45:01 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
