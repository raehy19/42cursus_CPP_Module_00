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
		std::cin.clear();
		std::getline(std::cin, command);
		if (std::cin.eof() || std::cin.fail())
			return (EXIT_FAILURE);
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phonebook.Add();
		else if (command == "SEARCH")
			phonebook.Search();
	}
	return (EXIT_SUCCESS);
}
