/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:32:31 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/16 19:54:13 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class	Span
{
	private:
		unsigned int		max_size;
		std::vector<int>	data;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		Span&	operator=(const Span& copy);
		~Span();

		void	addNumber(int value);
		int		shortestSpan();
		int		longestSpan();
		void	addRandom();
};

#endif