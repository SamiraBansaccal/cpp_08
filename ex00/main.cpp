/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 21:43:17 by sbansacc          #+#    #+#             */
/*   Updated: 2026/01/22 21:43:18 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::list<int> l;
	std::deque<int> d;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i * 2);
		l.push_back(i * 3);
		d.push_back(i * 4);
	}

	try
	{
		std::cout << "Vector: found value "
				  << *easyfind(v, 6) << std::endl;

		std::cout << "List: found value "
				  << *easyfind(l, 9) << std::endl;

		std::cout << "Deque: found value "
				  << *easyfind(d, 16) << std::endl;

		std::cout << "Trying to find 42..." << std::endl;
		easyfind(v, 42);
	}
	catch (std::exception const &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
