#include "HumanB.hpp"

HumanB::HumanB(std::string humanBName)
{
	name = humanBName;
	weapon = NULL;
    // std::cout << "Human B named " << name << " was created" << std::endl;
}


HumanB::HumanB(std::string humanBName, Weapon humanBWeapon) 
{
	name = humanBName;
	weapon = &humanBWeapon;
    // std::cout << "Human B named " << name << " was created" << std::endl;
}

HumanB::~HumanB()
{
	// std::cout << "Human B named " << name << " was destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon) 
{
    weapon = &newWeapon;
}

void HumanB::attack() 
{
    if (weapon) 
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } 
    else 
    {
        std::cout << name << " attacks with their bare hands!" << std::endl;
    }
}


