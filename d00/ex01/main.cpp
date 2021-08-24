#include "phonebook.hpp"

int	main()
{
	Phonebook	phonebook;
	Contact		contact;
	std::string temp;

	while (1)
	{
		std::cin >> temp;
		if (temp.compare("EXIT") == 0)
			return (0);
		else
			if (temp.compare("ADD") == 0)
				phonebook.add();
		else
			if (temp.compare("SEARCH") == 0)
				phonebook.search();
		else
			std::cout << "Commande invalide !" << std::endl << std::endl;
	}
}