/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:00:08 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/16 15:15:07 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>

int	main(void)
{
	try
	{
		std::vector<int>	v;

		for (int i = 0; i < 10; i++)
			v.push_back(i * 10);
		
		std::list<int>	l;

		for (int i = 0; i < 5; i++)
			l.push_back(i * 9);

		std::vector<int>::iterator	v_it = easyfind(v, 30);
		std::cout << "Vector occurrence found: " << *v_it << std::endl;
		std::list<int>::iterator	l_it = easyfind(l, 30);
		std::cout << "List occurrence found: " << *l_it << std::endl;
	
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
