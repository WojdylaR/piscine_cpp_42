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

	private :

	int		m_nb_user;
	Contact	cont[8];
};

#endif