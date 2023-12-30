#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class ScavTrap: public ClapTrap
{
    private:

    protected:

    public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap&);
        ScavTrap& operator= (const ScavTrap&);
        void    attack(const std::string& target);
        void    guardGate();
};

#endif
