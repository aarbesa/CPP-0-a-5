#include "Fixed.hpp"


const int Fixed::nbits = 8;


Fixed::Fixed()
{
    x = 0;
    CLASS("Default constructor", "Fixed");
}

Fixed::Fixed(const int integer)
{
    x = integer << nbits;
    CLASS("Default constructor integer", "Fixed");
}

Fixed::Fixed(const float floatnb)
{
    x = roundf(floatnb * (1 << nbits));
    CLASS("Default constructor float", "Fixed");

}
Fixed::~Fixed()
{
    CLASS("Destructor", "Fixed");
}


Fixed::Fixed(const Fixed& other)
{
    CLASS("Constructor by copy", "Fixed");
    *this = other;
}


Fixed& Fixed::operator= (const Fixed& other)
{
    CLASS("Operator = Constructor", "Fixed");
    if (this != &other) 
    {
        x = other.x;
    }
    return *this;
}

int Fixed::toInt() const
{
    return x >> nbits;
}

float Fixed::toFloat() const
{
    return static_cast<float>(x) / (1 << nbits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}