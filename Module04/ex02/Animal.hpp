#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class Animal
{
    private:

    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal&);
        Animal& operator= (const Animal&);
        virtual void makeSound() const = 0;
        std::string		getType() const;
};

#endif
 