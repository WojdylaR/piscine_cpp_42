#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP


#include <iostream>
#include <string.h>

class Zombie
{
    public :

    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void    Set_name(std::string name);
    Zombie* ZombieHorde(int N, std::string name);
    void    announce();

    private :

    Zombie  *horde;
    std::string _name;
};

#endif