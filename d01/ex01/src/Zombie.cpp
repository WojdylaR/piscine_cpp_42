#include "../include/Zombie.hpp"

Zombie::Zombie() : _name("Donovan")
{
}

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
    std::cout << this->_name << " get killed" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}