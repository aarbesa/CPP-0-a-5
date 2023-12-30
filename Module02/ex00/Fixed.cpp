#include "Fixed.hpp"

const int Fixed::nbits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;

    x = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(const Fixed& othervalue)
{
    std::cout << "Copy constructor called" << std::endl;

    x = othervalue.getRawBits();

}

Fixed& Fixed::operator= (const Fixed& othervalue)
{
    std::cout << "Copy assigment operator called" << std::endl;
    
    if (this != &othervalue) 
    {
        x = othervalue.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{

    std::cout << "getRawBits member function called" << std::endl;

    return x;
}

void Fixed::setRawBits(int const raw)
{
    x = raw;
}

