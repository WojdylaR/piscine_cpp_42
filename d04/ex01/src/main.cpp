#include "../include/cat.hpp"
#include "../include/dog.hpp"
#include "../include/wrongcat.hpp"

int main()
{
    const Animal* chien = new Dog();
    const Animal* chat = new Cat() ;


	std::cout << chien->getType() << " " << std::endl;
	std::cout << chat->getType() << " " << std::endl;
    chien->makeSound();
    chat->makeSound();

    const WrongAnimal* mauvaischat = new WrongCat() ;


	std::cout << mauvaischat->getType() << " " << std::endl;
    mauvaischat->makeSound();

    delete chien, chat, mauvaischat;
}