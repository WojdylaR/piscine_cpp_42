#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string.h>
#include <ctype.h>

class Contact
{
	public:

	Contact();
	Contact(int contact_n);
	~Contact();
	void	aff_name();
	void	ch_f_n(std::string f_n);
	void	ch_l_n(std::string l_n);
	void	ch_n_n(std::string n_n);
	void	ch_num(std::string num);
	void	ch_s(std::string s);

	private:

	int			m_contact_n;
	std::string	m_f_name;
	std::string	m_l_name;
	std::string	m_n_name;
	std::string	m_num_phone;
	std::string	m_secret;
};

#endif