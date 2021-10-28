#include "../include/ClapTrap.hpp"

int main ()
{
    ClapTrap jean("Jean");
    ClapTrap thomas("thomas");

    jean.attack("Fred");
    std::cout << "Jean have " << jean.getEnergypoint() << " Energy points, he deal " << jean.getAttackdamage() << " damage, and have " << jean.getHitpoint() << " hit point" << std::endl;
    std::cout << "Thomas have " << thomas.getEnergypoint() << " Energy points, he deal " << thomas.getAttackdamage() << " damage, and have " << thomas.getHitpoint() << " hit point" << std::endl;
    thomas = jean;
    std::cout << "Thomas have " << thomas.getEnergypoint() << " Energy points, he deal " << thomas.getAttackdamage() << " damage, and have " << thomas.getHitpoint() << " hit point" << std::endl;
    thomas.beRepaired(5);
    std::cout << "Thomas have " << thomas.getEnergypoint() << " Energy points, he deal " << thomas.getAttackdamage() << " damage, and have " << thomas.getHitpoint() << " hit point" << std::endl;
}