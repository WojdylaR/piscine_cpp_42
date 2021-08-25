#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


#include <iostream>
#include <string.h>

class Zombie
{
    public :

    Zombie();
    Zombie(std::string name);
    ~Zombie();
    Zombie* newZombie(std::string name);
    void    randomChump(std::string name);
    void    announce();

    private :

    std::string _name;
};

#endif