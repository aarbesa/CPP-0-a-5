#include "HumanA.hpp"

 HumanA::HumanA(std::string humanAName, Weapon& humanAWeapon): weapon(humanAWeapon)
 {
	name = humanAName;
	// std::cout << "Human A named " << name << " was created" << std::endl;
 }
 
 HumanA::~HumanA()
 {
	// std::cout << "Human A named " << name << " was destroyed" << std::endl;
 }


void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}