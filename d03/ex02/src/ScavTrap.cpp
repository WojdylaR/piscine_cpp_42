#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energypoint = 50;
    this->_attackdamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << this->getName() << "  ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &op)
{
    std::cout << "Assignment operator called" << std::endl;
	this->_name = op._name;
    this->_attackdamage = op._attackdamage;
    this->_energypoint = op._energypoint;
    this->_hitpoints = op._hitpoints;
	return *this;
}