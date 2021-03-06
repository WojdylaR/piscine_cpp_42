#include "../include/cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::~Cat ()
{
    std::cout << "Destructor Cat Called" << std::endl;
}

Cat::Cat (Cat const &copy)
{
    type = copy.getType();
    std::cout << "Construcor Cat copy called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "I'm a Cat (Make Cat sound)" << std::endl;
}

Cat & Cat::operator=(Cat const &op)
{
    this->type = op.getType();
    return (*this);
}