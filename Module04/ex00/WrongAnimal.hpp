#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class WrongAnimal
{
    private:

    protected:
        std::string type;

    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        WrongAnimal& operator= (const WrongAnimal&);
        void makeSound() const;
        std::string		getType() const;
};

#endif
