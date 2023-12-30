#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class Fixed
{
    private:
        int x;
        static const int nbits;


    public:
        Fixed();
        ~Fixed();
        Fixed(const int integer);
        Fixed(const float floatnb);
        Fixed(const Fixed&);
        Fixed& operator= (const Fixed&);
        
        int toInt() const;
        float toFloat() const;
};


std::ostream& operator<<(std::ostream&, const Fixed &fixed);

#endif
