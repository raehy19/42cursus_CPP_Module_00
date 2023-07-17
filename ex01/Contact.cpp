/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 01:25:19 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/18 01:25:19 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::_printField(const std::string &data) {
	if (data.length() <= 10)
		std::cout << std::setw(10) << data;
	else
		std::cout << data.substr(0, 9) << ".";
}

void Contact::_setField(const std::string &field_name, std::string &data) {
	std::string::size_type	start_idx;
	std::string::size_type	end_idx;

	while (true)
	{
		data.clear();
		std::cout << field_name << " :";
		std::getline(std::cin, data);
		if (std::cin.eof() || std::cin.fail())
			exit(EXIT_FAILURE);
		start_idx = data.find_first_not_of(" \f\n\r\t\v");
		end_idx = data.find_last_not_of(" \f\n\r\t\v");
		if (start_idx != std::string::npos && end_idx != std::string::npos)
		{
			data = data.substr(start_idx, end_idx - start_idx + 1);
			break ;
		}
	}
}