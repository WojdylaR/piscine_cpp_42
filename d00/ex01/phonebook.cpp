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
	getline(std::cin, f_name);
	std::cout << std::endl << "First Name ?" << std::endl;
	getline(std::cin, f_name);
	cont[m_nb_user].ch_f_n(f_name);
	std::cout << std::endl << "Last Name ?" << std::endl;
	getline(std::cin, l_name);
	cont[m_nb_user].ch_l_n(l_name);
	std::cout << std::endl << "Nickname ?" << std::endl;
	getline(std::cin, n_name);
	cont[m_nb_user].ch_n_n(n_name);
	std::cout << std::endl << "Phone Number ?" << std::endl;
	getline(std::cin, numb);
	cont[m_nb_user].ch_num(numb);
	std::cout << std::endl << "Darkest Secret ?" << std::endl;
	getline(std::cin, secret);
	cont[m_nb_user].ch_s(secret);
	std::cout << std::endl << "Entrez nouvelle commande, ADD, SERACH ou EXIT" << std::endl;

}

std::string	get_line(std::string str)
{
	std::string r;

	r = str;
	if (str.length() < 9)
	{
		return (r);
	}
	r = r.substr(0, 8);
	r.push_back('.');
	return (r);
}

void	Phonebook::search()
{
	int 	i;
	char 	temp;
	char	temp2;

	i = -1;
	if (m_nb_user == -1)
	{
		std::cout << std::endl << "Aucun utilisateur" << std::endl << "Entrez nouvelle commande, ADD, SERACH ou EXIT" << std::endl;
		return ;
	}
	else
		if (m_nb_user == 7)
		std::cout << std::endl << "Nombre d'utilisateur max atteint !" << std::endl << "Entrez nouvelle commande, ADD, SERACH ou EXIT" << std::endl;
	else
	{
		std::cout << "_____________________________________________" << std::endl << "|" << std::setw(10) << "INDEX" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
		std::cout << "|__________|__________|__________|__________|" << std::endl;
		while (++i <= m_nb_user)
		{
			std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << get_line(cont[i].get_f_name()) << "|" << std::setw(10) << get_line(cont[i].get_l_name()) << "|" << std::setw(10) << get_line(cont[i].get_n_name()) << "|" << std::endl;
			std::cout << "|__________|__________|__________|__________|" << std::endl;
		}
	}
	std::cout << "Quel utilisateur voulez-vous aller voir ? " << std::endl;
	std::cin >> temp;
	temp2 = 'i';
	temp2= temp2 + '0';

	if (temp < '0' || temp > temp2)
	{
		std::cout << "Mauvaise index" << std::endl << std::endl;
	std::cout << std::endl << "Entrez nouvelle commande, ADD, SERACH ou EXIT" << std::endl;
		return ;
	}
	std::cout << "First Name :" << std::endl << get_line(cont[i].get_f_name()) << std::endl << std::endl;
	std::cout << "Last Name :" << std::endl << get_line(cont[i].get_l_name()) << std::endl << std::endl;
	std::cout << "Nickname :" << std::endl << get_line(cont[i].get_n_name()) << std::endl << std::endl;
	std::cout << "Number Phone :" << std::endl << get_line(cont[i].get_num_phone()) << std::endl << std::endl;
	std::cout << "Darkest Secret :" << std::endl << get_line(cont[i].get_secret()) << std::endl << std::endl;

}