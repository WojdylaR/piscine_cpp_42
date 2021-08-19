#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
	public :

	Phonebook();
	~Phonebook();
	void	add();
	void	search();
	void	exit();

	private :

	int		m_nb_user;
	Contact	tab_cont[8];
};

#endif