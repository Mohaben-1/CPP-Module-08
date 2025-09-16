/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:45:52 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/16 19:51:48 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : max_size(0)
{
	std::cout << "Span default constructor called." << std::endl;
}

Span::Span(unsigned int N) : max_size(N)
{
	std::cout << "Span constructor called." << std::endl;
}

Span::Span(const Span& copy) : max_size(copy.max_size), data(copy.data)
{
	std::cout << "Span copy constructor called." << std::endl;
}

Span&	Span::operator=(const Span& copy)
{
	if (this != &copy)
	{
		max_size = copy.max_size;
		data = copy.data;
	}
	std::cout << "Span copy assignment operator called." << std::endl;
	return (*this);
}

Span::~Span()
{
	std::cout << "Span destructor called." << std::endl;
}

void	Span::addNumber(int value)
{
	if (data.size() >= max_size)
		throw (std::runtime_error("Span is full."));
	data.push_back(value);
}

int		Span::shortestSpan()
{
	if (data.size() < 2)
		throw (std::runtime_error("Not enough numbers."));

	std::vector<int>	tmp = data;
	int					min_val = INT_MAX;

	std::sort(tmp.begin(), tmp.end());
	for (size_t i = 0; i < tmp.size() - 1; i++)
		min_val = std::min(min_val, tmp[i + 1] - tmp[i]);
	return (min_val);
}

int		Span::longestSpan()
{
	if (data.size() < 2)
		throw (std::runtime_error("Not enough numbers."));
	
	int	min_val = *(std::min_element(data.begin(), data.end()));
	int	max_val = *(std::max_element(data.begin(), data.end()));
	return (max_val - min_val);
}
