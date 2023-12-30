#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# ifndef CLASS
#  define CLASS(x, y) std::cout << "Called " << x << " of class " << y << std::endl
# endif

class Brain
{
    private:

    protected:

    public:
        Brain();
        ~Brain();
        Brain(const Brain&);
        Brain& operator= (const Brain&);
        std::string ideas[100];
};

#endif
