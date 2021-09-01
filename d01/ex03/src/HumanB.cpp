#include	"../include/HumanB.hpp"

HumanB::HumanB() : _name("default")
{

}

HumanB::HumanB(std::string name) : _name(name)
{

}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon(Weapon &weapon)
{	
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attactks with his " << this->_weapon->getType() << std::endl;
}