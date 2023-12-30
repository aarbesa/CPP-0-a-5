#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
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
        Fixed(const int integer);
        Fixed(const float floatnb);
        ~Fixed();
        Fixed(const Fixed&);
        Fixed& operator= (const Fixed&);

        int getRawBits() const;
        void setRawBits(const int raw);

        float toFloat() const;
        int toInt() const;

        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;


        Fixed operator++();    // Pre-increment
        Fixed operator++(int);  // Post-increment
        Fixed operator--();    // Pre-decrement
        Fixed operator--(int);  // Post-decrement


        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);


};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif
