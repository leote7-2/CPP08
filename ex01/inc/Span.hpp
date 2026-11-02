/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:33:04 by joaoleote         #+#    #+#             */
/*   Updated: 2026/10/29 14:33:26 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>

class Span {
	private:
		unsigned int		_maxN;
		std::vector<int>	_num;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();

		template <typename Iterator>
		void	addNumbers(Iterator begin, Iterator end);

		class FullContainerException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class NotEnoughNumbersException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#include "Span.tpp"