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
	std::string	get_f_name() const;
	std::string	get_l_name() const;
	std::string	get_n_name() const;
	std::string	get_num_phone() const;
	std::string	get_secret() const;
	int			get_index() const;

	private:

	int			m_contact_n;
	std::string	m_f_name;
	std::string	m_l_name;
	std::string	m_n_name;
	std::string	m_num_phone;
	std::string	m_secret;
};

#endif