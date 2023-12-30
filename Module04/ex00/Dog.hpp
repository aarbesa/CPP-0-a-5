#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class Dog : public Animal
{
    private:

    protected:

    public:
        Dog();
        ~Dog();
        Dog(const Dog&);
        Dog& operator= (const Dog&);
        void makeSound() const;

};

#endif
