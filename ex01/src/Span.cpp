/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:13:04 by joaoleote         #+#    #+#             */
/*   Updated: 2026/10/29 14:35:02 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span() : _maxN(0) {
}

Span::Span(unsigned int N) : _maxN(N) {
}

Span::Span(const Span &other) {
    *this = other;
}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _maxN = other._maxN;
        _num = other._num;
    }
    return (*this);
}

Span::~Span() {
}

void	Span::addNumber(int number) {
    if (_num.size() >= _maxN)
		throw FullContainerException();
	_num.push_back(number);
}

int		Span::shortestSpan() {
    if (_num.size() <= 1) 
        throw NotEnoughNumbersException();
    std::vector<int> tmp = _num;
    std::sort(tmp.begin(), tmp.end());

    int shortest = tmp[1] - tmp[0];
    for (unsigned int i = 1; i < tmp.size(); i++) {
        if (tmp[i] - tmp[i - 1] < shortest)
            shortest = tmp[i] - tmp[i - 1];
    }
    return (shortest);
}

int		Span::longestSpan() {
    if (_num.size() < 2)
        throw NotEnoughNumbersException();
    std::vector<int>::iterator min =
        std::min_element(_num.begin(), _num.end());
    std::vector<int>::iterator max =
        std::max_element(_num.begin(), _num.end());
    return (*max - *min);
}

const char *Span::FullContainerException::what() const throw() {
	return ("Span is full");
}

const char *Span::NotEnoughNumbersException::what() const throw() {
	return ("Not enough numbers in Span");
}
