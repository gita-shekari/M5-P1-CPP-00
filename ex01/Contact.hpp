/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:21:49 by gshekari          #+#    #+#             */
/*   Updated: 2026/04/09 20:20:16 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private :
		std :: string firstName;
		std :: string lastName;
		std :: string nickName;
		std :: string phoneNumber;
		std :: string darkSecret;
	public :
		Contact();
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

#endif
