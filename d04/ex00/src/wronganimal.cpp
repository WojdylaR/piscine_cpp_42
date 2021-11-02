#include "../include/wronganimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "Constructor WrongAnimal (with type) called" << std::endl;
}

WrongAnimal::WrongAnimal (WrongAnimal const &copy)
{
    *this = copy;
    std::cout << "Construcor WrongAnimal copy called" << std::endl;
}

WrongAnimal::~WrongAnimal ()
{
    std::cout << "Destructor WrongAnimal Called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "I'm an WrongAnimal (Make aniaml sound)" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &op)
{
    this->type = op.getType();
    return *this;
}