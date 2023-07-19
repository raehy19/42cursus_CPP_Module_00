/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 07:15:02 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/13 07:15:03 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	printUpperCase(const std::string& str)
{
	for (std::string::size_type i(0); i < str.length(); ++i)
		std::cout << (char)(std::toupper(str.at(i)));
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i(1); i < argc; ++i)
			printUpperCase(argv[i]);
	std::cout << std::endl;
	return (0);
}