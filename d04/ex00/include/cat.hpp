#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"

class Cat : virtual Animal
{
    public :
        Cat();
        Cat(Cat const &copy);
        virtual ~Cat();
        
        virtual std::string getType() const;
        virtual void makeSound() const;

        Cat & operator=(Cat const &op);

    protected :

};

#endif