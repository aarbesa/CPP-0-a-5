#include "Cat.hpp"

Cat::Cat() : Animal() 
{
    CLASS("Constructor", "Cat");
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::~Cat()
{
    CLASS("Destructor", "Cat");
    delete this->_brain;
    this->_brain = NULL;

}

Cat::Cat(const Cat& other) : Animal()
{
    CLASS("Constructor by copy", "Cat");
    if (this == &other)
        return ;
    type = other.type;
    this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator= (const Cat& other)
{
    CLASS("Operand = Constructor", "Cat");
    if (this == &other)
        return (*this);
    type = other.type;
    delete this->_brain;
    this->_brain = new Brain(*other._brain);
    return (*this);
}
