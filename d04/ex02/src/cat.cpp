#include "../include/cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::~Cat ()
{
    delete this->_brain;
    std::cout << "Destructor Cat Called (and braind delete)" << std::endl;
}

Cat::Cat (Cat const &copy)
{
    type = copy.getType();
    this->brain = new Brain();
    *(this->_brain) = *(copy._brain);
    std::cout << "Construcor Cat copy called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "I'm a Cat (Make Cat sound)" << std::endl;
}

Cat & Cat::operator=(Cat const &op)
{
    this->type = op.getType();
    delete _brain;
    this->_brain = new Brain();
    *(this.brain) = *(op._brain);
    return (*this);
}