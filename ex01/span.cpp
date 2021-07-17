#include "span.hpp"

Span::~Span()
{}

Span::Span(unsigned int N):
len(N)
{
	vector.clear();
}

Span::Span(const Span& copy):
len(copy.len)
{
	vector.clear();
	// TODO
}

Span& Span::operator=(const Span& op)
{
	if (this == &op)
		return (*this);
	len = op.len;
	vector.clear();
	// TODO
	return (*this);
}

void Span::addNumber(int number)
{
	if (vector.size() < len)
		vector.push_back(number);
	else
		throw VectorFullException();
}

int Span::shortestSpan()
{
	if (vector.size() < 2)
		throw NoNumberException();
	// TODO
}

int Span::longestSpan()
{
	if (vector.size() < 2)
		throw NoNumberException();
	// TODO
}

