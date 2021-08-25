#include "../include/contact.hpp"

Contact::Contact()
{

}

Contact::Contact(int contact_n) : m_contact_n(contact_n)
{

}

Contact::~Contact()
{

}

void	Contact::aff_name()
{
	std::cout << m_f_name << std::endl;
}

void	Contact::ch_f_n(std::string f_n)
{
	m_contact_n++;
	m_f_name = f_n;
}

void	Contact::ch_l_n(std::string l_n)
{
	m_l_name = l_n;
}

void	Contact::ch_n_n(std::string n_n)
{
	m_n_name = n_n;
}

void	Contact::ch_num(std::string num)
{
	m_num_phone = num;
}

void	Contact::ch_s(std::string s)
{
	m_secret = s;
}

std::string	Contact::get_f_name() const
{
	return (m_f_name);
}

std::string	Contact::get_l_name() const
{
	return (m_l_name);
}

std::string	Contact::get_n_name() const
{
	return (m_n_name);
}
std::string	Contact::get_num_phone() const
{
	return (m_num_phone);
}
std::string	Contact::get_secret() const
{
	return (m_secret);
}

int	Contact::get_index() const
{
	return (m_contact_n - 1);
}