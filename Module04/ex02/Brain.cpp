#include "Brain.hpp"

Brain::Brain()
{
    CLASS("Constructor", "Brain");
}

Brain::~Brain()
{
    CLASS("Destructor", "Brain");
}

Brain::Brain(const Brain& other)
{
    CLASS("Constructor by copy", "Brain");
    if (this == &other)
        return ;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
}

Brain& Brain::operator= (const Brain& other)
{
    CLASS("Operand = Constructor", "Brain");
    if (this == &other)
        return (*this);
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
    return (*this);
}
