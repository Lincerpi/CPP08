#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <exception>

class	Exception : public std::exception
{
	const char* what() const throw()
	{
		return("Element not found!");
	};
};

template<class T>
void easyfind(T element, int n)
{
	if (std::find(element.begin(), element.end(), n) != element.end())
		std::cout << "Find: " << n << std::endl << std::endl;
	else
		throw Exception();
}


#endif