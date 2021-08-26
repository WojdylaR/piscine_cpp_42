#include <string.h>
#include <iostream>

int main()
{
	std::string str;
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	str = "HI THIS IS BRAIN";

	std::cout << "Address with str" << std::endl;
	std::cout << &str << std::endl << std::endl;
	std::cout << "Address with stringPTR" << std::endl;
	std::cout << stringPTR << std::endl << std::endl;
	std::cout << "Address with stringREF" << std::endl;
	std::cout << &stringREF << std::endl << std::endl << std::endl;
	std::cout << "String with str" << std::endl;
	std::cout << str << std::endl << std::endl;
	std::cout << "String with stringPTR" << std::endl;
	std::cout << *stringPTR << std::endl << std::endl;
	std::cout << "String with stringREF" << std::endl;
	std::cout << stringREF << std::endl;

}