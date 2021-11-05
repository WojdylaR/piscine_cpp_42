#include "../include/span.hpp"
#include <ctime>
#include <cstdlib>

int main(void)
{
	std::cout <<  "Subject's tests" << std::endl;
	{	// Subject's tests
		Span	sp(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << "Massive tests random SIZE= 50000" << std::endl;
	{	// Massive tests
		Span	sp(5000);
		srand(time(NULL));

		for (size_t i = 0; i < 5000; i++)
		{
			sp.addNumber(rand() );
		}
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl; 
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}

	Span	sp(1);

	try
	{
		sp.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	sp.addNumber(456);
	try
	{
		sp.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		sp.addNumber(3541);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	

	return (0);
}