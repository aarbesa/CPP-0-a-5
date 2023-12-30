#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() 
{
	const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "-------------------------------------------------" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << wrongI->getType() << " " << std::endl;
    std::cout << wrongMeta->getType() << " " << std::endl;


    wrongI->makeSound(); 
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongI;

    std::cout << "-------------------------------------------------" << std::endl;

	Dog* a = new Dog();
	a->makeSound();
	delete a;


    return 0;
}