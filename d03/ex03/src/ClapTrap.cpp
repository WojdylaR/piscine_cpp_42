#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    this->_name = name;
    this->_energypoint = 10;
    this->_hitpoints = 10;
    this-> _attackdamage = 0;
    std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
    *this = copy;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    this->_attackdamage = copy._attackdamage;
    this->_hitpoints = copy._hitpoints;
    this->_energypoint = copy._energypoint;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &op)
    {
        this->_attackdamage = op._attackdamage;
        this->_hitpoints = op._hitpoints;
        this->_energypoint = op._energypoint;
    }
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