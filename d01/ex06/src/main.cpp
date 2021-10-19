#include "../include/Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;

    if (argc != 2)
    {
        std::cout << "Mauvais nombre d'argument !";
        return (0);
    }
    karen.complain(argv[1]);
}