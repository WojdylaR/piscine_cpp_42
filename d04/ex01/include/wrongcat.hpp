#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "animal.hpp"

class WrongCat : public Animal
{
    public :
        WrongCat();
        WrongCat(WrongCat const &copy);
        virtual ~WrongCat();
        
        virtual void makeSound() const;

        WrongCat & operator=(WrongCat const &op);

    protected :

};

#endif