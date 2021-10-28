#include "../include/Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->nbr = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int contructor called" << std::endl;
    this->nbr = i << this->b;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->nbr = (int)(roundf(f * (1 << this->b)));
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy contructor called" << std::endl;
    this->nbr = copy.getRawBits();
}

Fixed & Fixed::operator=(const Fixed& op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &op)
        this->nbr = op.getRawBits();
    return (*this);
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