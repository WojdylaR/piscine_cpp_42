#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template< typename T >
void swap(T & x, T & y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
    return (b > a ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
    return (b >= a ? b : a);
}

#endif