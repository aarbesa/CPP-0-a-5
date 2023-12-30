#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "Void";
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}
ClapTrap::ClapTrap(std::string name1)
{
    // CLASS("Constructor", "ClapTrap");
    name = name1;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "ClapTrap " << name << " created!" << std::endl;

}

ClapTrap::~ClapTrap()
{
    // CLASS("Destructor", "ClapTrap");
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    CLASS("Constructor by copy", "ClapTrap");
    if (this == &other)
        return ;
    name = other.name;
    AttackDamage = other.AttackDamage;
    EnergyPoints = other.EnergyPoints;
    HitPoints = other.HitPoints;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other)
{
    CLASS("Operand = Constructor", "ClapTrap");
    if (this == &other)
        return (*this);
    name = other.name;
    AttackDamage = other.AttackDamage;
    EnergyPoints = other.EnergyPoints;
    HitPoints = other.HitPoints;
    return (*this);
}

void ClapTrap::attack(const std::string& target) 
{

    if (HitPoints == 0 || EnergyPoints == 0) 
    {
        std::cout << "ClapTrap " << name << " cannot perform actions without life or energy." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
    std::cout << "Energy points now ; " << EnergyPoints << std::endl;

}



void ClapTrap::takeDamage(unsigned int amount) 
{

    if (HitPoints == 0) 
    {
        std::cout << "ClapTrap " << name << " is already out of hit points." << std::endl;
        return;
    }

    if (amount >= HitPoints) 
    {
        HitPoints = 0;
        std::cout << "ClapTrap " << name << " took " << amount << " points of damage" << std::endl;
        std::cout << "ClapTrap " << name << " lost. Number of hit points now : " << HitPoints << std::endl;
    } 
    else 
    {
        HitPoints -= amount;
        std::cout << "ClapTrap " << name << " took " << amount << " points of damage. Hit points now : " << HitPoints << std::endl;
    }

}



void ClapTrap::beRepaired(unsigned int amount) 
{
    if (HitPoints == 0) 
    {
        std::cout << "ClapTrap " << name << " cannot be repaired when out of hit points." << std::endl;
        return;
    }
    HitPoints += amount;
    std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
    EnergyPoints--;
    std::cout << "Hits points ; " << HitPoints << std::endl;
    std::cout << "Energy points ; " << EnergyPoints << std::endl;

}