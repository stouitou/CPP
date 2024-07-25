/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stouitou <stouitou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:18:02 by stouitou          #+#    #+#             */
/*   Updated: 2024/07/25 15:44:41 by stouitou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	str_toupper(std::string &str)
{
	int	i;

	for (i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
}

int	main(int argc, char **argv)
{
	int			i;
	std::string	str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (i = 1; i < argc; i++)
	{
		str = argv[i];
		str_toupper(str);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
