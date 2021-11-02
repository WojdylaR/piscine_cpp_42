#include "../include/dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog (Dog const &copy)
{
    type = copy.getType();
    this->brain = new Brain();
    *(this->_brain) = *(copy._brain);
    std::cout << "Construcor Dog copy called" << std::endl;
}

Dog::~Dog ()
{
    delete this->_brain;
    std::cout << "Destructor Dog Called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "I'm an Dog (Make Dog sound)" << std::endl;
}

Dog & Dog::operator=(Dog const &op)
{

    this->type = op.getType();
    delete _brain;
    this->_brain = new Brain();
    *(this.brain) = *(op._brain);
    return (*this);
}