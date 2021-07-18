#include "span.hpp"

int main()
{
	// srand(time(NULL));
	Span sp(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// try 
	// {
	// 	sp.addNumber(65);
	// }
	// catch (const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	// std::cout << "*******************" << std::endl;
	// Span sp2(11000);
	// for (int i = 0; i < 11000; i++)
	// 	sp2.addNumber(rand());
	// std::cout << sp2.shortestSpan() << std::endl;
	// std::cout << sp2.longestSpan() << std::endl;

	return (0);
}

/*
$> ./ex01
2
14
$>
*/