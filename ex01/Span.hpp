/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:32:31 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/18 11:17:53 by mohaben-         ###   ########.fr       */
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
		
		template<typename IT>
		void	addRandom(IT first, IT last)
		{
			if (data.size() + std::distance(first, last) > max_size)
				throw (std::runtime_error("Span is full."));
			data.insert(data.end(), first, last);
		}
};

#endif
