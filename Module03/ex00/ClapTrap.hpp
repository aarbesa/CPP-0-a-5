#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class ClapTrap
{
    private:
        std::string name;
        unsigned HitPoints;
        unsigned EnergyPoints;
        unsigned AttackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name1);
        ~ClapTrap();
        ClapTrap(const ClapTrap&);
        ClapTrap& operator= (const ClapTrap&);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif