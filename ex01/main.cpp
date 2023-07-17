/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 01:21:28 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/18 01:21:29 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
	PhoneBook phonebook;
	std::string command;

	while (true) {
		std::cout << "Enter Command ( ADD | SEARCH | EXIT ) :" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof() || std::cin.fail())
			return (EXIT_FAILURE);
		std::cin.clear();
		if (command.compare("EXIT") == 0)
			break;
		else if (command.compare("ADD") == 0)
			phonebook.Add();
		else if (command.compare("SEARCH") == 0)
			phonebook.Search();
	}
	return (EXIT_SUCCESS);
}
