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
	std::cout << "First Name ?" << std::endl;
	std::cin >> f_name;
	cont[m_nb_user].ch_f_n(f_name);
	std::cout << "Last Name ?" << std::endl;
	std::cin >> l_name;
	cont[m_nb_user].ch_f_n(l_name);
	std::cout << "Nickname ?" << std::endl;
	std::cin >> n_name;
	cont[m_nb_user].ch_f_n(n_name);
	std::cout << "Phone Number ?" << std::endl;
	std::cin >> numb;
	cont[m_nb_user].ch_f_n(numb);
	std::cout << "Darkest Secret ?" << std::endl;
	std::cin >> secret;
	cont[m_nb_user].ch_f_n(secret);

}

void	Phonebook::search()
{

}