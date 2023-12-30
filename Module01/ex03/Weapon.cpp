#include "Weapon.hpp"


Weapon::Weapon(const std::string& typeREF)
{
	type = typeREF;
}

Weapon::~Weapon()
{
	// std::cout << "The weapon: '" << type << "' was destroyed" << std::endl;
}



const std::string& Weapon::getType()
{
	return type;
}



void Weapon::setType(const std::string& newType)
{
	type = newType;
}