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
	std::string::size_type start_idx;
	std::string::size_type end_idx;

	while (true) {
		data.clear();
		std::cout << field_name << " :";
		std::getline(std::cin, data);
		if (std::cin.eof() || std::cin.fail())
			exit(EXIT_FAILURE);
		start_idx = data.find_first_not_of(" \f\n\r\t\v");
		end_idx = data.find_last_not_of(" \f\n\r\t\v");
		if (start_idx != std::string::npos && end_idx != std::string::npos) {
			data = data.substr(start_idx, end_idx - start_idx + 1);
			break;
		}
	}
}

void Contact::Set() {
	this->_setField("first name", this->_first_name);
	this->_setField("last name", this->_last_name);
	this->_setField("nickname", this->_nickname);
	this->_setField("phone number", this->_phone_number);
	this->_setField("darkest secret", this->_darkest_secret);
}

void Contact::Print(int idx) {
	std::cout << std::setw(10) << idx;
	std::cout << " | ";
	this->_printField(this->_first_name);
	std::cout << " | ";
	this->_printField(this->_last_name);
	std::cout << " | ";
	this->_printField(this->_nickname);
	std::cout << std::endl;
}

void Contact::PrintDetail() {
	std::cout << "first name : " << this->_first_name << std::endl;
	std::cout << "last name : " << this->_last_name << std::endl;
	std::cout << "nickname : " << this->_nickname << std::endl;
	std::cout << "phone number: " << this->_phone_number << std::endl;
	std::cout << "darkest_secret : " << this->_darkest_secret << std::endl;
}