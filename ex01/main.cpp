/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:45:51 by sbansacc          #+#    #+#             */
/*   Updated: 2026/01/30 00:44:59 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: "
				  << sp.shortestSpan() << std::endl;

		std::cout << "Longest span: "
				  << sp.longestSpan() << std::endl;

		std::cout << "Trying to add one more number..." << std::endl;
		sp.addNumber(42);
	}
	catch (std::exception const &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nRange insertion test\n";

	try
	{
		Span big(10);
		int arr[] = {1, 3, 5, 7, 9};
		big.addNumber(arr, arr + 5);

		std::cout << "Shortest span: "
				  << big.shortestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
