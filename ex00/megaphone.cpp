/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshekari <gshekari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:51:49 by gshekari          #+#    #+#             */
/*   Updated: 2026/03/25 13:35:53 by gshekari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>


void uppercase(char *str)
{
	size_t len = std::strlen(str);
	for(size_t i = 0; i < len ; i++)
	{
		str[i] = std:: toupper((unsigned char)str[i]);
	}
	std:: cout << str << " ";
}

int main(int argc, char **argv)
{

	if (argc >= 2)
	{
		for(int i = 1; i < argc ; i++)
			uppercase(argv[i]);
		std :: cout << "\n";
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	return 0;
}
