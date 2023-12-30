#include "Dog.hpp"

Dog::Dog()
{
    CLASS("Constructor", "Dog");
    type = "Dog";

}

Dog::~Dog()
{
    CLASS("Destructor", "Dog");
}

Dog::Dog(const Dog& other)
{
    CLASS("Constructor by copy", "Dog");
    if (this == &other)
        return ;
    type = other.type;
}

Dog& Dog::operator= (const Dog& other)
{
    CLASS("Operand = Constructor", "Dog");
    if (this == &other)
        return (*this);
    type = other.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Wouafff wouaf" << std::endl;
}
