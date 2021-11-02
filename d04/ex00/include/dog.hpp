#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"

class Dog : virtual public Animal
{
    public :
        Dog();
        Dog(Dog const &copy);
        virtual ~Dog();
        
        virtual std::string getType() const;
        virtual void makeSound() const;

        Dog & operator=(Dog const &op);

    protected :

};

#endif