#include	"../include/HumanA.hpp"

HumanA::HumanA() : _name("default")
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << this->_name << " attactks with his " << this->_weapon.getType() << std::endl;
}