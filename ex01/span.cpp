#include "span.hpp"

Span::~Span()
{}

Span::Span(unsigned int N):
len(N)
{
	vector.clear();
}

void Span::addNumber(int number)
{
	if (vector.size() < len)
		vector.push_back(number);
	else
		throw VectorFullException();
}

unsigned int Span::shortestSpan()
{
	if (vector.size() < 2)
		throw NoNumberException();
	std::sort(vector.begin(), vector.end());
	std::vector<int>::iterator x;
	unsigned int shortestSpan = UINT_MAX;
	for (x = vector.begin(); x != vector.end(); x++)
	{
		if ((*(x + 1) - *x) < shortestSpan)
			shortestSpan = (*(x + 1) - *x);
	}
	return (shortestSpan);
}

unsigned int Span::longestSpan()
{
	if (vector.size() < 2)
		throw NoNumberException();
	unsigned int longestSpan = static_cast<unsigned int>(*std::max_element(vector.begin(), vector.end()) - *std::min_element(vector.begin(), vector.end()));
	return (longestSpan);
}

