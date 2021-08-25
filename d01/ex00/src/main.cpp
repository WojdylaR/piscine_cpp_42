#include "../include/Zombie.hpp"

int main()
{
    Zombie  zombie1;
    Zombie  *zombie2;


    zombie2 = zombie1.newZombie("Jean Eude");
    zombie1.announce();
    zombie2->announce();
    zombie1.randomChump("Titouan");
    delete zombie2;
}