#include "ClapTrap.hpp"


int main() 
{
    ClapTrap claptrap("ARBESA");
    claptrap.attack("FOO");
    claptrap.beRepaired(3);
    claptrap.attack("FOO");
    claptrap.attack("FOO");
    claptrap.attack("FOO");
    claptrap.attack("FOO");
    claptrap.attack("FOO");


    claptrap.takeDamage(5);
    claptrap.takeDamage(5);
    claptrap.takeDamage(5);

    claptrap.beRepaired(3);


    return 0;
}
