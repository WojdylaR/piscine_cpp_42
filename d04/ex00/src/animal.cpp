#include "../include/animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor for animal called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Constructor Animal (with type) called" << std::endl;
}

Animal::Animal (Animal const &copy)
{
    *this = copy;
    std::cout << "Construcor Animal copy called" << std::endl;
}

Animal::~Animal ()
{
    std::cout << "Destructor Animal Called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "I'm an Animal (Make aniaml sound)" << std::endl;
}

Animal & Animal::operator=(Animal const &op)
{
    this->type = op.type;
    return *this;
}