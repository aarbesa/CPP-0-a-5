#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# ifndef CLASS
#  define CLASS(x, y) std::cout << ""
// #  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class Harl
{
    private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    std::string levels[4];
    void (Harl::*ptr_fct[4])(void); 

    public:
        Harl();
        ~Harl();
        void    complain( std::string level );
};

#endif