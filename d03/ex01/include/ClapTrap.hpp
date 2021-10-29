#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public :

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &copy);
        ClapTrap & operator=(ClapTrap const &);
        ~ClapTrap();

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
        std::string     getName();
        int     getHitpoint();
        int     getEnergypoint();
        int     getAttackdamage();

    protected :

        std::string _name;
        int _hitpoints;
        int _energypoint;
        int _attackdamage;
};

#endif