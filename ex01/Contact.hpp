/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:21:49 by gshekari          #+#    #+#             */
/*   Updated: 2026/01/23 21:22:42 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private :
		std::string first_name;
		std::string last_name;
		std::string phone_number;
	public :
		Contact();

		void setFirstName(std::string fn);
		void setLastName(std::string ln);
		void setPhoneNumber(std::string pn);
};

#endif
