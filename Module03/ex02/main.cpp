# include "ClapTrap.hpp"
# include "FragTrap.hpp"

int    main()
{
    ClapTrap* A = new ClapTrap("Jack");
    FragTrap* B = new FragTrap("Emma");
    ClapTrap* C = new FragTrap("Fake");

    A->attack("Arbesa");
    B->attack("Stella");
    C->attack("Soso");
    A->takeDamage(5);
    B->takeDamage(5);
    B->highFivesGuys();
    FragTrap* D = new FragTrap("Paulita");
	*D = *B;
    D->attack("adol");
    delete A;
    delete B;
    delete C;

    // FragTrap H("Paul");
    // H.attack("him");
    // ClapTrap J("Deny");
    // J.attack("blob");
}