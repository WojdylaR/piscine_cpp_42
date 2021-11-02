#include "../include/dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog (Dog const &copy)
{
    std::cout << "Construcor Dog copy called" << std::endl;
    *this = copy;
}

Dog::~Dog ()
{
    std::cout << "Destructor Dog Called" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "I'm an Dog (Make aniaml sound)" << std::endl;
}

Dog & Dog::operator=(Dog const &op)
{
    this->type = op.type;
    return *this;
}