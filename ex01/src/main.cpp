/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:41:22 by joaoleote         #+#    #+#             */
/*   Updated: 2026/10/29 14:34:39 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"
#include <iostream>
#include <vector>

int	main() {
	// TESTE 1: addNumber + shortest + longest
	std::cout << "=== TESTE 1 ===" << std::endl;

	Span sp(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;


	// TESTE 2: addNumbers
	std::cout << "\n=== TESTE 2: addNumbers ===" << std::endl;

	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);

	Span sp2(10);
	sp2.addNumbers(numbers.begin(), numbers.end());

	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;


	// TESTE 3: Span cheia
	std::cout << "\n=== TESTE 3: FULL ===" << std::endl;

	try {
		Span sp3(2);

		sp3.addNumber(10);
		sp3.addNumber(20);
		sp3.addNumber(30);
	}
	catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}


	// TESTE 4: menos de 2 números
	std::cout << "\n=== TESTE 4: NOT ENOUGH ===" << std::endl;

	try {
		Span sp4(5);

		sp4.addNumber(42);

		std::cout << sp4.shortestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return (0);
}
