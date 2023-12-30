#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    CLASS("Constructor", "FragTrap");
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap " << name << " has been created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::~FragTrap()
{
    CLASS("Destructor", "FragTrap");
}

FragTrap::FragTrap(const FragTrap& other)
{
    CLASS("Constructor by copy", "FragTrap");
    if (this == &other)
        return ;
    name = other.name;
    AttackDamage = other.AttackDamage;
    EnergyPoints = other.EnergyPoints;
    HitPoints = other.HitPoints;
}


FragTrap& FragTrap::operator= (const FragTrap& other)
{
    CLASS("Operand = Constructor", "FragTrap");
    if (this == &other)
        return (*this);
    name = other.name;
    AttackDamage = other.AttackDamage;
    EnergyPoints = other.EnergyPoints;
    HitPoints = other.HitPoints;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if (HitPoints == 0 || EnergyPoints == 0) 
    {
        std::cout << "FragTrap " << name << " cannot perform actions without life or energy." << std::endl;    
        return;
    }
    std::cout << "FragTrap " << name << " wants a high fives bro" << std::endl;
}
