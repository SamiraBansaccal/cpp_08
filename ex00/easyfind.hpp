/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 21:43:27 by sbansacc          #+#    #+#             */
/*   Updated: 2026/01/29 18:44:03 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <stdexcept>
#include <iostream>

template <typename T>
typename T::const_iterator easyfind(T const &container, int const &tofind) {
	typename T::const_iterator it = std::find(container.begin(), container.end(), tofind);
	if (it == container.end())
		throw std::runtime_error("Value not found");
	return it;
};