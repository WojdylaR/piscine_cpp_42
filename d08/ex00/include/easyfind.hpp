#ifndef EASYFIND_H__
#define EASYFIND_H__ 

#include <iostream>
#include <iterator>

template<typename T>
typename T::iterator easyfind(T &container, int elem)
{
	return std::find(container.begin(), container.end(), elem);
}

#endif