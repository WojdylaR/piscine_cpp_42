#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(Cat const &copy);
        virtual ~Cat();
        
        virtual void makeSound() const;

        Cat & operator=(Cat const &op);

    protected :

};

#endif