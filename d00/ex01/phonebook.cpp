#include "phonebook.hpp"

Phonebook::Phonebook() : m_nb_user(-1)
{

}

Phonebook::~Phonebook()
{

}

void	Phonebook::add()
{
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	numb;
	std::string	secret;

	m_nb_user++;
	std::cout << std::endl << "First Name ?" << std::endl;
	std::cin >> f_name;
	cont[m_nb_user].ch_f_n(f_name);
	std::cout << std::endl << "Last Name ?" << std::endl;
	std::cin >> l_name;
	cont[m_nb_user].ch_l_n(l_name);
	std::cout << std::endl << "Nickname ?" << std::endl;
	std::cin >> n_name;
	cont[m_nb_user].ch_n_n(n_name);
	std::cout << std::endl << "Phone Number ?" << std::endl;
	std::cin >> numb;
	cont[m_nb_user].ch_num(numb);
	std::cout << std::endl << "Darkest Secret ?" << std::endl;
	std::cin >> secret;
	cont[m_nb_user].ch_s(secret);
	std::cout << std::endl << "Entrez nouvelle commande, ADD, SERACH ou EXIT" << std::endl;

}

std::string	get_line(std::string str)
{
	if (str.length() < 9)
	{
		return (str);
	}
	str = str.substr(0, 8);
	str.push_back('.');
	return (str);
}

void	Phonebook::search()
{
	int i;
	std::string temp;

	i = -1;
	if (m_nb_user == -1)
		std::cout << std::endl << "Aucun utilisateur" << std::endl << "Entrez nouvelle commande, ADD, SERACH ou EXIT" << std::endl;
	else
		if (m_nb_user == 7)
		std::cout << std::endl << "Nombre d'utilisateur max atteint !" << std::endl << "Entrez nouvelle commande, ADD, SERACH ou EXIT" << std::endl;
	else
	{
		std::cout << "____________________________________________" << std::endl << "|" << std::setw(10) << "INDEX" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
		std::cout << "|__________|__________|__________|__________|" << std::endl;
		while (++i <= m_nb_user)
		{
			std::cout << "|" << std::setw(10) << cont[i].get_index() << "|" << std::setw(10) << get_line(cont[i].get_f_name()) << "|" << std::setw(10) << get_line(cont[i].get_l_name()) << "|" << std::setw(10) << get_line(cont[i].get_n_name()) << "|" << std::endl;
			std::cout << "|__________|__________|__________|__________|" << std::endl;
		}
	}
	std::cout << "Quel utilisateur voulez-vous aller voir ? " << std::endl;
	std::cin >> i;
	if (i < 0 && i > m_nb_user)
	{
		std::cout << "Mauvaise index" << std::endl << std::endl;
		return ;
	}

}