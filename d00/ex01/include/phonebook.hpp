#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>

class Phonebook
{
	public :

	Phonebook();
	~Phonebook();
	void	add();
	void	search();

	private :

	std::string	get_line(std::string str);
	void		ft_check_temp(std::string, int *i);
	int			m_nb_user;
	Contact		cont[8];
};

#endif