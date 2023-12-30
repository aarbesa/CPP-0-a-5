#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    CLASS("Constructor", "WrongCat");
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    CLASS("Destructor", "WrongCat");
}

WrongCat::WrongCat(const WrongCat& other)
{
    CLASS("Constructor by copy", "WrongCat");
    if (this == &other)
        return ;
    type = other.type;
}

WrongCat& WrongCat::operator= (const WrongCat& other)
{
    CLASS("Operand = Constructor", "WrongCat");
    if (this == &other)
        return (*this);
    type = other.type;
    return (*this);
}
