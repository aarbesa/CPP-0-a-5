#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class Cat : public Animal
{
    private:

    protected:

    public:
        Cat();
        ~Cat();
        Cat(const Cat&);
        Cat& operator= (const Cat&);
        void makeSound() const;

};

#endif
