#include "../include/easyfind.hpp"
#include <vector>

using namespace std;
 
int main()
{
	std::vector<int> vect;
	std::vector<int>::iterator	it;
	int elem = 205;
	vect.push_back(10);
	vect.push_back(30);
	vect.push_back(20);
	it = easyfind(vect, elem);
	
	if (it != vect.end())
		std::cout << "NUM FOUND " << std::endl;
	else 
		 std::cout << "NUM NOT FOUND" << std::endl;
	return (0);
}