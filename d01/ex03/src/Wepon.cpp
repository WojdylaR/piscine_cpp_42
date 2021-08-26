#include "../include/Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const	Weapon::getType()
{
	return (this->_type);
}