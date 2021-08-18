#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "user.hpp"

class Phonebook
{
	public :

	Phonebook();
	~Phonebook()
	void	add();
	void	search();
	void	exit();

	private :

	int		nb_user;
	char	*tab_user;
};

#endif