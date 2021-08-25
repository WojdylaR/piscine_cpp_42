#include "../include/Zombie.hpp"

int main()
{
    int i;
    int N;

    i = -1;
    N = 5;
    Zombie zombie1;
    Zombie *zombie2;


    zombie2 = zombie1.ZombieHorde(N, "Ivan");
    while (++i < N)
        zombie2[i].announce();
    i = -1;
    zombie2->ft_delete();
}