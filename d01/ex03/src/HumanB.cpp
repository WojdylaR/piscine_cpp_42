#include	"../include/HumanB.hpp"

HumanB::HumanB() : _name("default")
{

}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	std::cout << this->_name << " attactks with his " << this->_weapon.getType() << std::endl;
}