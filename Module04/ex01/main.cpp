#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main() 
{
    const Animal* j = new Dog(); 
    const Animal* i = new Cat();
    delete j;
    delete i;

    Dog basic;
    {
    Dog tmp = basic;
    }


    const int numAnimals = 10;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals / 2; ++i) 
    {
        animals[i] = new Dog();
    }

    for (int i = numAnimals / 2; i < numAnimals; ++i) 
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i < numAnimals; ++i) 
    {
        delete animals[i];
    }

    return 0;
}