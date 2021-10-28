#include "../include/Fixed.hpp"

Fixed::Fixed()
{
    this->nbr = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int i)
{
    this->nbr = i << this->b;
}

Fixed::Fixed(const float f)
{
    this->nbr = (int)(roundf(f * (1 << this->b)));
}

Fixed::Fixed(const Fixed& copy)
{
    this->nbr = copy.getRawBits();
}

Fixed & Fixed::operator=(const Fixed& op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &op)
        this->nbr = op.getRawBits();
    return (*this);
}

Fixed &Fixed::operator++()
{
    this->nbr++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->nbr--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed r(*this);
    this->nbr++;
    return (r);
}

Fixed Fixed::operator--(int)
{
    Fixed r(*this);
    this->nbr--;
    return (r);
}

int Fixed::getRawBits() const
{
    return (this->nbr);
}

void Fixed::setRawBits(int const raw)
{
    this->nbr = raw;
}

float Fixed::toFloat() const
{
    return ((float)this->nbr / (float)(1 << this->b));
}

int Fixed::toInt() const
{
    return ((int)(this->nbr >> this->b));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}

bool Fixed::operator>(const Fixed &op) const
{
    return (this->nbr > op.nbr);
}

bool Fixed::operator<(const Fixed &op) const
{
    return (this->nbr < op.nbr);
}

bool Fixed::operator>=(const Fixed &op) const
{
    return (this->nbr >= op.nbr);
}

bool Fixed::operator<=(const Fixed &op) const
{
    return (this->nbr <= op.nbr);
}

bool Fixed::operator==(const Fixed &op) const
{
    return (this->nbr == op.nbr);
}

bool Fixed::operator!=(const Fixed &op) const
{
    return (this->nbr != op.nbr);
}

Fixed Fixed::operator+(const Fixed & op) const
{
    return (Fixed(this->toFloat() + op.toFloat()));
}

Fixed Fixed::operator-(const Fixed & op) const
{
    return (Fixed(this->toFloat() - op.toFloat()));
}

Fixed Fixed::operator*(const Fixed & op) const
{
    return (Fixed(this->toFloat() * op.toFloat()));
}

Fixed Fixed::operator/(const Fixed & op) const
{
    return (Fixed(this->toFloat() / op.toFloat()));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a < b ? b : a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a < b ? b : a);
}