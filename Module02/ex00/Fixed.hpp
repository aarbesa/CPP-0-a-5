#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int x;
        static const int nbits;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& othervalue);
        Fixed& operator= (const Fixed& othervalue);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
