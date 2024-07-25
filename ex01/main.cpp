/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stouitou <stouitou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:28:40 by stouitou          #+#    #+#             */
/*   Updated: 2024/07/25 17:00:56 by stouitou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	list_and_print(PhoneBook *phonebook)
{
	int	i;

	i = 0;
	for (i = 0; i < 8; i++)
	{
		std::cout << phonebook[i].index << std::endl;
		std::cout << phonebook[i].first_name << std::endl;
		std::cout << phonebook[i].last_name << std::endl;
		std::cout << phonebook[i].nickname << std::endl;
	}
}

int	main(void)
{
	PhoneBook	phonebook[8];
	std::string	command;
	int			i;	

	i = 0;
	while (1)
	{
		std::cout << "PLEASE ENTER A COMMAND" << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			phonebook[i].add_contact(i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (command == "SEARCH")
			list_and_print(phonebook);
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
