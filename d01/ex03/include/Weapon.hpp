#ifndef WEAPON_HPP
# define WEAPHON_HPP

#include <iostream>

class Weapon
{
	public :
	
	Weapon();
	~Weapon();
	void		setType(std::string type);
	std::string	const getType();

	private :

	std::string _type;
};


#endif