#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energypoint = 100;
    this->_attackdamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "That's a positive highfives request from " << this->getName() << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &op)
{
    std::cout << "Assignment operator called" << std::endl;
	this->_name = op._name;
    this->_attackdamage = op._attackdamage;
    this->_energypoint = op._energypoint;
    this->_hitpoints = op._hitpoints;
	return *this;
}