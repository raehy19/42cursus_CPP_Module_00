/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:43:04 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/18 00:43:05 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook {
private:
	static const int MAX_CONTACT = 8;
	int _num;
	int _idx;

public:
	PhoneBook();
	~PhoneBook();
};

#endif