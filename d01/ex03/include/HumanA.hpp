#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>		

class HumanA
{
	public :

	HumanA();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack();

	private :

	std::string	_name;
	Weapon &_weapon;
};

#endif