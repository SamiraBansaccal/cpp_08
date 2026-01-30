/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 01:36:09 by sbansacc          #+#    #+#             */
/*   Updated: 2026/01/30 01:39:18 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size after pop: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Iterating through MutantStack:" << std::endl;
	for (MutantStack<int>::container_type::iterator it = mstack.begin();
		 it != mstack.end();
		 ++it)
	{
		std::cout << *it << std::endl;
	}

	// Comparison with std::stack
	std::stack<int> s(mstack);
	std::cout << "Copied into std::stack, size = " << s.size() << std::endl;

	return 0;
}
