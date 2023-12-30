#include "Dog.hpp"

Dog::Dog() : Animal()
{
    CLASS("Constructor", "Dog");
    type = "Dog";
    this->_brain = new Brain();

}

Dog::~Dog()
{
    CLASS("Destructor", "Dog");
    delete this->_brain;
    this->_brain = NULL;
}

Dog::Dog(const Dog& other) : Animal()
{
    CLASS("Constructor by copy", "Dog");
    if (this == &other)
        return ;
    type = other.type;
    this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator= (const Dog& other)
{
    CLASS("Operand = Constructor", "Dog");
    if (this == &other)
        return (*this);
    type = other.type;
    delete this->_brain;
    this->_brain = new Brain(*other._brain);
    return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waf Waf" << std::endl;
}

