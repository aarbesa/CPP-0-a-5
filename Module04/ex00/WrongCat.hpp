#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class WrongCat : public WrongAnimal
{
    private:

    protected:

    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat&);
        WrongCat& operator= (const WrongCat&);
};

#endif
