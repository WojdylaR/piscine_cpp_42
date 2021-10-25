#include "../include/Karen.hpp"

Karen::Karen(){}
Karen::~Karen(){}

void    Karen::complain(std::string const level)
{
    int i;
    int x;

    i = 0;
    x = 0;
    std::string lvl[4] = {"debug", "info", "warning", "error"};
    while (i < 4)
        {
            if (level.compare(lvl[i]) == 0)
                x = level[0];
            i++;
        }
    if (x == 0)
    {
        std::cout << "???????????";
        return ;
    }
    switch (x)
    {
        case 100 :
            debug();
            info();
            warning();
            error();
            break;
        case 105 :
            info();
            warning();
            error();
            break;
        case 119 :
            warning();
            error();
            break;
        case 101 :
            error();
            break;
    }
}

void    Karen::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void    Karen::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void    Karen::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void    Karen::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}