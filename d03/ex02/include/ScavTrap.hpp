#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "../include/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();

        ScavTrap & operator=(ScavTrap const &);
        
        void    guardGate();

    private :
};

#endif