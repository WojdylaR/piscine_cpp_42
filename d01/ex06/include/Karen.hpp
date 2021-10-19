#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
    public:
    Karen();
    ~Karen();
    void complain(std::string const level);
    void debug();
    void warning();
    void info();
    void error();

    private:
};

#endif