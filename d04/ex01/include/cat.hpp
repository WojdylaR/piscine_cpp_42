#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"
#include "brain.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(Cat const &copy);
        virtual ~Cat();
        
        virtual void makeSound() const;

        Cat & operator=(Cat const &op);

    private :
        Brain* _brain;

};

#endif