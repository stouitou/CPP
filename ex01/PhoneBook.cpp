/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stouitou <stouitou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:12:50 by stouitou          #+#    #+#             */
/*   Updated: 2024/07/25 16:48:28 by stouitou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	PhoneBook::add_contact(int i)
{
	this->index = i;
	std::cout << "FIRST NAME" << std::endl;
	std::cin >> this->first_name;
	std::cout << "LAST NAME" << std::endl;
	std::cin >> this->last_name;
	std::cout << "NICKNAME" << std::endl;
	std::cin >> this->nickname;
	std::cout << "PHONE NUMBER" << std::endl;
	std::cin >> this->phone_number;
	std::cout << "DARKEST SECRET" << std::endl;
	std::cin >> this->darkest_secret;
}
