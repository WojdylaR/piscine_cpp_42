#include "../include/Zombie.hpp"

void    Zombie::randomChump(std::string name)
{
    Zombie *zombie;

    zombie = new Zombie(name);
    zombie->announce();
    std::cout << std::endl;
    delete zombie;
}