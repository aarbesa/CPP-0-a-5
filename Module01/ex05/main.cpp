#include "Harl.hpp"

int main()
{
    Harl myHarl;
    myHarl.complain("debug");
    std::cout << std::endl;
    std::cout << std::endl;
    myHarl.complain("info");
    std::cout << std::endl;
    std::cout << std::endl;
    myHarl.complain("warning");
    std::cout << std::endl;
    std::cout << std::endl;
    myHarl.complain("error");
    std::cout << std::endl;
    std::cout << std::endl;
    myHarl.complain("wtf");

    return 0;
}
