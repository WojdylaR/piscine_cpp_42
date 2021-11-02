#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog : virtual public Animal
{
    public :
        Dog();
        Dog(Dog const &copy);
        virtual ~Dog();
        
        virtual void makeSound() const;

        Dog & operator=(Dog const &op);

    private :
        Brain* _brain;

};

#endif