#include "Zombie.hpp"

int main() 
{

    Zombie* testZombie = newZombie("Foo");
    testZombie->announce();
    delete testZombie;

    randomChump("Arbesa");
	

    return 0;

}