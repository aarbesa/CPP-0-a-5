#include "Harl.hpp"

Harl::Harl()
{
    CLASS("Constructor", "Harl");

    levels[0] = "debug";
    levels[1] = "info";
    levels[2] = "warning";
    levels[3] = "error";

    ptr_fct[0] = &Harl::debug;
    ptr_fct[1] = &Harl::info;
    ptr_fct[2] = &Harl::warning;
    ptr_fct[3] = &Harl::error;
}

Harl::~Harl()
{
    CLASS("Destructor", "Harl");
}

void Harl::debug( void ) 
{

std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;

}

void Harl::info( void ) 
{

std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;

}

void Harl::warning( void ) 
{

std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void Harl::error( void ) {

std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;

}


void    Harl::complain( std::string level )
{
    for (int i = 0; i < 4; ++i)
    {
        if (levels[i] == level)
        {
            (this->*ptr_fct[i])();
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}
