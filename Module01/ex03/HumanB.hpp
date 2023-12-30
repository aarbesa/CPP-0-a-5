#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanB 
{
	private :
	std::string name;
	Weapon *weapon;

	public :
	HumanB(std::string humanBName);
	~HumanB();
	HumanB(std::string humanBName, Weapon humanBWeapon);
	void setWeapon(Weapon& newWeapon);
	void attack();


};


#endif