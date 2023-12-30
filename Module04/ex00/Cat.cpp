#include "Cat.hpp"

Cat::Cat()
{
    CLASS("Constructor", "Cat");
    type = "Cat";
}

Cat::~Cat()
{
    CLASS("Destructor", "Cat");
}

Cat::Cat(const Cat& other)
{
    CLASS("Constructor by copy", "Cat");
    if (this == &other)
        return ;
    type = other.type;
}

Cat& Cat::operator= (const Cat& other)
{
    CLASS("Operand = Constructor", "Cat");
    if (this == &other)
        return (*this);
    type = other.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meooooooww" << std::endl;
}
