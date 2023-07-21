/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:43:16 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/20 13:43:17 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _num(0), _idx(0) {
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::Add() {
	_contact[this->_idx].Set();
	if (this->_num < PhoneBook::MAX_CONTACT)
		this->_num += 1;
	this->_idx = (this->_idx + 1) % PhoneBook::MAX_CONTACT;
}

void PhoneBook::_Print() {
	if (this->_num == 0) {
		std::cout << "PhoneBook is Empty" << std::endl;
		return;
	}
	std::cout << "|     index|first name| last name| phone num|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i(0); i < _num; ++i)
		_contact[i].Print(i);
	std::cout << "Total " << _num << " Contact in PhoneBook" << std::endl;
	std::cout << "Enter Index ( 0 ~ " << _num - 1 << " ) : ";

}

void PhoneBook::Search() {
	int idx;

	this->_Print();
	if (this->_num == 0)
		return;
	std::cin >> idx;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	if (std::cin.fail() || idx < 0 || idx >= this->_num)
		std::cout << "Invalid Index" << std::endl;
	else
		_contact[idx].PrintDetail();
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}