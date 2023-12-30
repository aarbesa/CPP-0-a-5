#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class Cat : public Animal
{
    private:
        Brain* _brain;

    protected:

    public:
        Cat();
        ~Cat();
        Cat(const Cat&);
        Cat& operator= (const Cat&);
        virtual void makeSound() const;
};

#endif
