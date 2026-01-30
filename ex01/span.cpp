/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:45:47 by sbansacc          #+#    #+#             */
/*   Updated: 2026/01/30 22:17:51 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _N(0) {}
Span::Span(unsigned int N): _N(N) {}
Span::Span(Span const &copy): _N(copy._N), _ints(copy._ints) {}
Span::~Span() {}

Span& Span::operator=(Span const &assignement) {
	if (this != &assignement)
	{
		_N = assignement._N;
		_ints = assignement._ints;
	}
	return *this;
}

unsigned int	Span::shortestSpan() const {
	if (_ints.size() < 2)
		throw std::runtime_error("Not enough elements to compare distance");
	std::vector<int> tmp = _ints;
	std::sort(tmp.begin(), tmp.end());
	unsigned long i = 1;
	int span = tmp[i] - tmp[0];
	while (i + 1 < _ints.size())
	{
		if (span > tmp[i + 1] - tmp[i])
			span = tmp[i + 1] - tmp[i];
		i++;
	}
	return span;
}

unsigned int	Span::longestSpan() const {
	if (_ints.size() < 2)
		throw std::runtime_error("Not enough elements to compare distance");
	int min = *(std::min_element(_ints.begin(), _ints.end()));
	int max = *(std::max_element(_ints.begin(), _ints.end()));
	return max - min;
}

void			Span::addNumber(int number) {
	if (_ints.size() == _N)
		throw std::runtime_error("Span is full");
	_ints.push_back(number);
}

