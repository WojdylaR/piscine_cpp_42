#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    public :
        Animal();
        Animal(std::string type);
        Animal(Animal const &copy);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const = 0;

        Animal & operator=(Animal const &op);

    protected :
        std::string type;
};

#endif