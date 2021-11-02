
}#include "../include/wrongcat.hpp"

WrongCat::WrongCat() : Animal()
{
    this->type = "WrongCat";
    std::cout << "Default constructor for WrongCat called" << std::endl;
}

WrongCat::~WrongCat ()
{
    std::cout << "Destructor WrongCat Called" << std::endl;
}

WrongCat::WrongCat (WrongCat const &copy)
{
    type = copy.getType();
    std::cout << "Construcor WrongCat copy called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "I'm a WrongCat (Make WrongCat sound)" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &op)
{
    this->type = op.getType();
    return (*this);
}