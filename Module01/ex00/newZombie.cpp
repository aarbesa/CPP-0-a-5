#include "Zombie.hpp"
#include <iostream>
#include <string>


Zombie* newZombie(std::string name) 
{
    Zombie *newZombie;
	
	newZombie= new Zombie(name);
    return newZombie;
}