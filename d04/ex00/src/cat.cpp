#include "../include/cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat (Cat const &copy)
{
    std::cout << "Construcor Cat copy called" << std::endl;
    *this = copy;
}

Cat::~Cat ()
{
    std::cout << "Destructor Cat Called" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "I'm an Cat (Make aniaml sound)" << std::endl;
}

Cat & Cat::operator=(Cat const &op)
{
    this->type = op.type;
    return *this;
}