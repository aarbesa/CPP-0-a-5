#include "Animal.hpp"

Animal::Animal()
{
    CLASS("Constructor", "Animal");
    type = "Void";

}

Animal::~Animal()
{
    CLASS("Destructor", "Animal");
}

Animal::Animal(const Animal& other)
{
    CLASS("Constructor by copy", "Animal");
    if (this == &other)
        return ;
    type = other.type;
}


Animal& Animal::operator= (const Animal& other)
{
    CLASS("Operand = Constructor", "Animal");
    if (this == &other)
        return (*this);
    type = other.type;
    return (*this);
}

void Animal::makeSound() const
{
    if (this->type == "Cat")
		std::cout << "Meooooooow" << std::endl;
	else if (this->type == "Dog")
		std::cout << "Waf Waf" << std::endl;
	else
		std::cout << "......" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}
