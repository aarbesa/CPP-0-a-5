#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name) 
{
    Zombie *horde;
    horde = new Zombie [N];
	int i = 0;

	if (N <= 0) 
    {
        std::cout << "Invalid number of zombies" << std::endl;
        return nullptr;
    }


    while (i < N) 
    {
        horde[i].addName(name);
        i++;

	}
    return horde;
};