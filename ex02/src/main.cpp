/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:29:51 by joaoleote         #+#    #+#             */
/*   Updated: 2026/09/29 18:34:39 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"
#include <iostream>

int main() {
    // TESTE 1: Operacoes basicas da stack
    std::cout << "\n=== TESTE 1: PUSH / TOP / POP / SIZE ===" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;

    mstack.pop();

    std::cout << "Top after pop: " << mstack.top() << std::endl;
    std::cout << "Size after pop: " << mstack.size() << std::endl;


    // TESTE 2: Iterator normal
    std::cout << "\n=== TESTE 2: NORMAL ITERATORS ===" << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }


    // TESTE 3: Reverse iterators
    std::cout << "\n=== TESTE 3: REVERSE ITERATORS ===" << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    while (rit != rite) {
        std::cout << *rit << std::endl;
        ++rit;
    }


    // TESTE 4: Const iterators
    std::cout << "\n=== TESTE 4: CONST ITERATORS ===" << std::endl;

    const MutantStack<int> constStack(mstack);

    MutantStack<int>::const_iterator cit = constStack.begin();
    MutantStack<int>::const_iterator cite = constStack.end();

    while (cit != cite) {
        std::cout << *cit << std::endl;
        ++cit;
    }


    // TESTE 5: Const reverse iterators
    std::cout << "\n=== TESTE 5: CONST REVERSE ITERATORS ===" << std::endl;

    MutantStack<int>::const_reverse_iterator crit = constStack.rbegin();
    MutantStack<int>::const_reverse_iterator crite = constStack.rend();

    while (crit != crite) {
        std::cout << *crit << std::endl;
        ++crit;
    }


    // TESTE 6: Modificar elementos atraves do iterator
    std::cout << "\n=== TESTE 6: MODIFY THROUGH ITERATOR ===" << std::endl;

    *mstack.begin() = 42;

    std::cout << "New first element: " << *mstack.begin() << std::endl;


    // TESTE 7: Copy constructor
    std::cout << "\n=== TESTE 7: COPY CONSTRUCTOR ===" << std::endl;

    MutantStack<int> copyStack(mstack);

    std::cout << "Original size: " << mstack.size() << std::endl;
    std::cout << "Copy size: " << copyStack.size() << std::endl;


    // TESTE 8: Assignment operator
    std::cout << "\n=== TESTE 8: ASSIGNMENT OPERATOR ===" << std::endl;

    MutantStack<int> assignedStack;

    assignedStack = mstack;

    std::cout << "Assigned size: " << assignedStack.size() << std::endl;
    std::cout << "Assigned top: " << assignedStack.top() << std::endl;


    // TESTE 9: Compatibility with std::stack
    std::cout << "\n=== TESTE 9: STD::STACK COMPATIBILITY ===" << std::endl;

    std::stack<int> s(mstack);

    std::cout << "Standard stack size: " << s.size() << std::endl;
    std::cout << "Standard stack top: " << s.top() << std::endl;

    return 0;
}
