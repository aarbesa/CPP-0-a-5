# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int    main()
{
    ClapTrap* A = new ClapTrap("Arbesa");
    ScavTrap* B = new ScavTrap("Giugiu");
    ClapTrap* C = new ScavTrap("Fake");

    A->attack("Ness");
    A->attack("Ness");
    A->attack("Ness");
    A->attack("Ness");
    A->attack("Ness");
    A->attack("Ness");
    A->attack("Ness");
    A->attack("Ness");
    A->attack("Ness");
    A->attack("Ness");
    A->attack("Ness");

    B->attack("Stella");
    C->attack("Soso");

    A->takeDamage(5);
    B->takeDamage(5);
    B->guardGate();
    ScavTrap* D = B;
    D->attack("Luana");
    delete A;
    delete B;
    delete C;

    ScavTrap H("Nass");
    H.attack("Victoire");
    ClapTrap J("Juju");
    J.attack("Chloe");
}