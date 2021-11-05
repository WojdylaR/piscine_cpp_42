#include <string>
#include <iostream>

template <typename T>
void        print(T const & src)
{
    std::cout << src << std::endl;
}

template <typename T>
void        iter(T const address[], unsigned int const len, void(*pf)(T const & src))
{
    for (unsigned int i = 0 ; i < len; i++)
    {
        pf(address[i]);
    }
}