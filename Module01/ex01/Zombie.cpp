#include "Zombie.hpp"



Zombie::Zombie()
{
    std::cout << "The zombie has been created" << std::endl;
}


Zombie::~Zombie() 
{
    std::cout << name << " was destroyed" << std::endl;
}

void Zombie::addName(std::string namezombie) 
{
    name = namezombie;
}

void Zombie::announce() 
{

    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


