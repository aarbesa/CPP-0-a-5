#include "Zombie.hpp"
#include <iostream>
#include <string>

void Zombie::announce() 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() 
{
    std::cout << name << " destroyed" << std::endl;
}

Zombie::Zombie(std::string name2) 
{
	name = name2;
    std::cout << "Zombie " << name2 << " created." << std::endl;
}