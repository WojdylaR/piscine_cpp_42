#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int main ()
{
    ClapTrap jean("Jean");
    ScavTrap thomas("Thomas");
    FragTrap fred("Fred");
    DiamondTrap pierre("Pierre");

    std::cout << "Jean have " << jean.getEnergypoint() << " Energy points, he deal " << jean.getAttackdamage() << " damage, and have " << jean.getHitpoint() << " hit point" << std::endl;
    std::cout << "Thomas have " << thomas.getEnergypoint() << " Energy points, he deal " << thomas.getAttackdamage() << " damage, and have " << thomas.getHitpoint() << " hit point" << std::endl;
    std::cout << "Fred have " << fred.getEnergypoint() << " Energy points, he deal " << fred.getAttackdamage() << " damage, and have " << fred.getHitpoint() << " hit point" << std::endl;
    std::cout << "Pierre have " << pierre.getEnergypoint() << " Energy points, he deal " << pierre.getAttackdamage() << " damage, and have " << pierre.getHitpoint() << " hit point" << std::endl;
    thomas.guardGate();
    fred.highFivesGuys();
    pierre.guardGate();
    pierre.highFivesGuys();
    pierre.whoAmI();
    pierre.attack("Fred");
}