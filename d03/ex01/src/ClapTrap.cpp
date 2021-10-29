#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_energypoint = 10;
    this->_hitpoints = 10;
    this-> _attackdamage = 0;
    std::cout << "Claptrap constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &op)
{
    std::cout << "Copy contructor called" << std::endl;
    this->_name = op._name;
    this->_attackdamage = op._attackdamage;
    this->_energypoint = op._energypoint;
    this->_hitpoints = op._hitpoints;
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &op)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_name = op._name;
    this->_attackdamage = op._attackdamage;
    this->_hitpoints = op._hitpoints;
    this->_energypoint = op._energypoint;
    return (*this);
}

ClapTrap::~ClapTrap ()
{
    std::cout << "ClapTrap Destructor Called" << std::endl;
}

void    ClapTrap::attack(std::string const &target)
{
    std::cout << this->_name << " Attack " << target << " with " << this->_attackdamage << std::endl;
    std::cout << target << " take ";
    this->_energypoint--;
    this->takeDamage(this->_attackdamage);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << amount << " damage " << " and " << this->_name << " have now " << this->_energypoint << " energy point" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->_name << " was healed by " << amount << " hit points" << std::endl;
    this->_hitpoints = this->_hitpoints + amount;
std::cout << "He have now " << this->_hitpoints << " hit points" << std::endl;
}

std::string ClapTrap::getName()
{
    return (this->_name);
}

int ClapTrap::getHitpoint()
{
    return (this->_hitpoints);
}

int ClapTrap::getEnergypoint()
{
    return (this->_energypoint);
}

int ClapTrap::getAttackdamage()
{
    return (this->_attackdamage);
}