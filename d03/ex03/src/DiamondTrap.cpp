#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->_diamond_name = name;
    this->_hitpoints = 100;
    this->_attackdamage = 30;
    this->_energypoint = 50;
    std::cout << "Constructor DiamondTrap called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Trap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrapp(DiamondTrap const & copy)
{
    *this = copy;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &op)
{
    std::cout << "Assignment operator called" << std::endl;
	this->_name = op._name;
    this->_attackdamage = op._attackdamage;
    this->_energypoint = op._energypoint;
    this->_hitpoints = op._hitpoints;
	return *this;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "ClapTrap name : " << ClapTrap::_name << " Diamond name : " << this->_diamond_name << std::endl;
}

void    DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
    std::cout << " but I'm a DiamondTrap ..." << std::endl;
}