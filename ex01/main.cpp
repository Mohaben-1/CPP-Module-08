/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:55:55 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/18 11:32:13 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try
	{
		std::cout << "=== Basic test ===" << std::endl;
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		try
		{
			sp.addNumber(42);
		}
		catch (const std::runtime_error& e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}

		std::cout << "\n=== Range test ===" << std::endl;
		std::vector<int> v;
		for (int i = 0; i < 10; i++)
			v.push_back(i * 2);

		Span sp2(15);
		sp2.addRandom(v.begin(), v.end());

		std::cout << "Shortest span (sp2): " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span  (sp2): " << sp2.longestSpan() << std::endl;

		std::cout << "\n=== Large test ===" << std::endl;
		Span big(25000);

		std::vector<int> v2;
		for (int i = 0; i < 25000; i++)
			v2.push_back(i);

		big.addRandom(v2.begin(), v2.end());

		std::cout << "Shortest span (big): " << big.shortestSpan() << std::endl;
		std::cout << "Longest span  (big): " << big.longestSpan() << std::endl;
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
