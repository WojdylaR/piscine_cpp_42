#include "Contact.hpp"

Contact::Contact()
{

}

Contact::Contact(int contact_n) : m_contact_n(contact_n)
{

}

void	Contact::ch_f_n(std::string f_n)
{
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

void	Contact::ch_num(int num)
{
	m_num_phone = num;
}

void	Contact::ch_s(std::string s)
{
	m_secret = s;
}