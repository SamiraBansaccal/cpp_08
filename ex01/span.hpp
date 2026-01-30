/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:45:43 by sbansacc          #+#    #+#             */
/*   Updated: 2026/01/30 22:18:59 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &copy);
		~Span();

		Span &operator=(Span const &copy);

		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			addNumber(int number);
		template <typename It>
		void	addNumber(It begin, It end)
		{
			while (begin != end)
			addNumber(*(begin++));
		}
	private:
		unsigned int		_N;
		std::vector<int>	_ints;
};