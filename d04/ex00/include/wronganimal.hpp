#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &copy);
        virtual ~WrongAnimal();

        std::string getType() const;
        virtual void makeSound() const;

        WrongAnimal & operator=(WrongAnimal const &op);

    protected :
        std::string type;
};

#endif