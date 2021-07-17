#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vector;

	for (int i =0; i < 10; i++)
		vector.push_back(i * 2);
	std::cout << "Vector: ";
	for (int i =0; i < 10; i++)
		std::cout << vector[i] << " ";
	std::cout << std::endl << std::endl;
	std::cout << "*** Search element 51 ***" << std::endl;
	try
	{
		easyfind(vector, 51);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	std::cout << "*** Search element 6 ***" << std::endl;
	try
	{
		easyfind(vector, 6) ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	
	return (0);
}