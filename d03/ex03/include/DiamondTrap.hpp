#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public :

        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& copy);
        ~DiamondTrap();

        DiamondTrap & operator=(DiamondTrap const &);

        void whoAmI();
        void attack(std::string const &target);

    private :

        std::string _diamond_name;
};

#endif