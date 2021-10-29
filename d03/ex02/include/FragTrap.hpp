#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "../include/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();
        
        FragTrap & operator=(FragTrap const &);
        void    highFivesGuys();

    private :
};

#endif