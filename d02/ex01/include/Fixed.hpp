#ifndef FIXED_HPP
# define FIXED_HPP

#include <math.h>
#include <iostream>

class Fixed
{
    public :

        Fixed();
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed& copy);
        ~Fixed();
        Fixed &operator=(const Fixed& op);

        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

    private :

        int                 nbr;
        const static int    b = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif