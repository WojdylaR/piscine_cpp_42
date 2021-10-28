#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public :

        Fixed();
        ~Fixed();
        Fixed(const Fixed& copy);
        Fixed &operator=(const Fixed& op);
        int getRawBits() const;
        void setRawBits(int const raw);

    private :

        int nbr;
        const static int b = 8;
};

#endif