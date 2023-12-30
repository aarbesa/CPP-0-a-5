#include "Fixed.hpp"

const int	Fixed::nbits = 8;

Fixed::Fixed()
{
    // CLASS("Constructor", "Fixed");
    x = 0;
}

Fixed::Fixed(const int integer)
{
    x = integer << nbits;
}

Fixed::Fixed(const float floatnb)
{
     x = static_cast<int>(roundf(floatnb * (1 << nbits)));
}

Fixed::~Fixed()
{
    // CLASS("Destructor", "Fixed");
}

Fixed::Fixed(const Fixed& other)
{
    // CLASS("Constructor by copy", "Fixed");
    *this = other;
}


Fixed& Fixed::operator= (const Fixed& other)
{
    // CLASS("Operand = Constructor", "Fixed");
    this->x = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
    return x;
}

void Fixed::setRawBits(const int raw)
{
    x = raw;
}

float Fixed::toFloat() const
{
    return static_cast<float>(x) / (1 << nbits);
}

int Fixed::toInt() const
{
    return x >> nbits;
}


////////////////////////////////////////////////////////////////////////////////


bool	Fixed::operator> (const Fixed& other) const
{
	return (this->x > other.x);
}

bool	Fixed::operator>= (const Fixed& other) const
{
	return (this->x >= other.x);
}

bool	Fixed::operator< (const Fixed& other) const
{
	return (this->x < other.x);
}

bool	Fixed::operator<= (const Fixed& other) const
{
	return (this->x <= other.x);
}

bool	Fixed::operator== (const Fixed& other) const
{
	return (this->x == other.x);
}

bool	Fixed::operator!= (const Fixed& other) const
{
	return (this->x != other.x);
}


////////////////////////////////////////////////////////////////////////////

Fixed	Fixed::operator+ (const Fixed& other) const
{

	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator- (const Fixed& other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator* (const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/ (const Fixed& other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

/////////////////////////////////////////////////////////////////////////////


Fixed	Fixed::operator++ ()
{
	this->x += 1;
	return (Fixed(this->toFloat()));
}

Fixed	Fixed::operator++ (int post)
{
	Fixed	temp = *this;
	if (post == 0)
		post = 0;
	this->x += 1;
	return (temp);
}

Fixed	Fixed::operator-- ()
{
	this->x -= 1;
	return (Fixed(this->toFloat()));
}

Fixed	Fixed::operator-- (int post)
{
	Fixed	temp = *this;
	if (post == 0)
		post = 0;
	this->x -= 1;
	return (temp);
}

////////////////////////////////////////////////////////////////////


Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
    if (a < b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
    if (a < b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

Fixed &Fixed::max(Fixed &a, Fixed &b) 
{
    if (a > b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) 
{
    if (a > b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}


std::ostream& operator<<(std::ostream& outstream, const Fixed& x)
{
	outstream << x.toFloat();
	return (outstream);
}





