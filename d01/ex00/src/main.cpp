#include "../include/Zombie.hpp"

int main()
{
    Zombie  zombie1;
    Zombie  *zombie2;


    zombie2 = zombie1.newZombie("Nelson");
    zombie1.announce();
    zombie2->announce();
    zombie1.randomChump("Ivan");
    delete zombie2;
}