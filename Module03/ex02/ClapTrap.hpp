#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class ClapTrap
{
    protected:
        std::string name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name1);
        virtual ~ClapTrap();
        ClapTrap(const ClapTrap&);
        ClapTrap& operator= (const ClapTrap&);
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
