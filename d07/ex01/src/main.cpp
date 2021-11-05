#include "../include/iter.hpp"

int main(void)
{
    std::string     str[2] = {
        "Hello",
        "World"
    };
    int     nbs[5] = {
        1,
        2,
        3,
        4,
        5
    };


    iter(str, 2, &print);
    iter(nbs, 5, &print);
    return 0;
}
