#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <limits.h>

class Span
{
		Span();
		std::vector<int> vector;
		unsigned int len;

	public:
		virtual ~Span();
		Span(unsigned int N);
		Span(const Span& copy);
		Span& operator=(const Span& op);
		void addNumber(int number);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		class VectorFullException: public std::exception
		{	virtual const char* what() const throw() { return ("Vector Full!"); } }; 
		class NoNumberException: public std::exception
		{	virtual const char* what() const throw() { return ("Not enough numbers!"); } };
};

#endif