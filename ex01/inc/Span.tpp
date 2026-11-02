/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:22:54 by joaoleote         #+#    #+#             */
/*   Updated: 2026/09/29 13:23:57 by joaoleote        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename Iterator>
void	Span::addNumbers(Iterator begin, Iterator end)
{
	if (_num.size() + std::distance(begin, end) > _maxN)
		throw FullContainerException();

	_num.insert(_num.end(), begin, end);
}
