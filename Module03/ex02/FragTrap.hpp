#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class FragTrap: public ClapTrap
{
    private:

    protected:

    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap&);
        FragTrap& operator= (const FragTrap&);
        void highFivesGuys(void);
};

#endif
