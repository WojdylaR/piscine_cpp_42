#include    "../include/Zombie.hpp"

Zombie* Zombie::ZombieHorde(int N, std::string name)
{
    int i;

    i = -1;
    horde = new Zombie[N];
    while (++i < N)
        horde[i]._name = name;
    return (horde);
}