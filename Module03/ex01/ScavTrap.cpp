#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    CLASS("Constructor", "ScavTrap");
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}


ScavTrap::~ScavTrap()
{
    CLASS("Destructor", "ScavTrap");
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    CLASS("Constructor by copy", "ScavTrap");
    if (this == &other)
        return ;
    name = other.name;
    AttackDamage = other.AttackDamage;
    EnergyPoints = other.EnergyPoints;
    HitPoints = other.HitPoints;
}


ScavTrap& ScavTrap::operator= (const ScavTrap& other)
{
    CLASS("Operand = Constructor", "ScavTrap");
    if (this == &other)
        return (*this);
    name = other.name;
    AttackDamage = other.AttackDamage;
    EnergyPoints = other.EnergyPoints;
    HitPoints = other.HitPoints;
    return (*this);
}

void ScavTrap::guardGate()
{
    if (HitPoints == 0 || EnergyPoints == 0) 
    {
        std::cout << "ScavTrap " << name << " cannot perform actions without life or energy." << std::endl;    
        return;
    }
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;

}


void ScavTrap::attack(const std::string& target) 
{

    if (HitPoints == 0 || EnergyPoints == 0) 
    {
        std::cout << "ScavTrap " << name << " cannot perform actions without life or energy." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
    std::cout << "Energy points now ; " << EnergyPoints << std::endl;

}
