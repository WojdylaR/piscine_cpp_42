#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public :
        Brain();
        virtual ~Brain();
        Brain(Brain const &);

        Brain operator=(Brain const &op);
        std::string const *getIdeas() const;

    private :
        std::string ideas[100];
};

#endif