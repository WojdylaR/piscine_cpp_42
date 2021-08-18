#include "user.hpp"

using namespace std;

User::User()
{

}

User::User(int user_n) : m_user_n(user_n)
{

}

void	User::ch_f_n(string f_n)
{
	m_f_name = f_n;
}

void	User::ch_l_n(string l_n)
{
	m_l_name = l_n;
}

void	User::ch_n_n(string n_n)
{
	m_n_name = n_n;
}

void	User::ch_num(int num)
{
	m_num_phone = num;
}

void	User::ch_s(string s)
{
	m_secret = s;
}