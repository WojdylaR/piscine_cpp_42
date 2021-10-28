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

        Fixed operator+(const Fixed &op) const;
        Fixed operator-(const Fixed &op) const;
        Fixed operator*(const Fixed &op) const;
        Fixed operator/(const Fixed &op) const;
        Fixed &operator=(const Fixed& op);
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        bool operator>(const Fixed &op) const;
        bool operator<(const Fixed &op) const;
        bool operator>=(const Fixed &op) const;
        bool operator<=(const Fixed &op) const;
        bool operator==(const Fixed &op) const;
        bool operator!=(const Fixed &op) const;

        static Fixed &min(Fixed &a, Fixed &b);
        const static Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        const static Fixed &max(const Fixed &a, const Fixed &b);

        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

    private :

        int                 nbr;
        const static int    b = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);

#endif