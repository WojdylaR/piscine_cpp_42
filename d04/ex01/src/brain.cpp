#include "../include/brain.hpp"

Brain::Brain()
{
    std::string << "Brain created" << std::endl;
}

Brain::~Brain()
{
    std::string << "Brain destroyed" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    *this = copy;
}

std::string *Brain::getIdeas() const;
{
    return(_ideas);
}

Brain & operator=(Brain const &op)
{
    this->_ideas = op.getIdeas();
    return (*this);
}