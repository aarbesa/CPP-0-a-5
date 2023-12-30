#include "Zombie.hpp"

int main() 
{
    int nbZombies = 3;
    std::string test = "Foo";
	int i = 0;

    Zombie* horde = zombieHorde(nbZombies, test);


	 while (i < nbZombies) 
     {
        horde[i].announce();
        i++;
    }


    delete[] horde;

    return 0;
}
