#include "Harl.hpp"

int get_string(char *str) 
{

    std::string levels[4];
    int i;

    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
    
    for (i = 0; i < 4; i++)
		if (levels[i] == str)
			return (i);
	return (-1);

}

int main(int argc, char **argv) 
{

    if (argc != 2) 
    {
        std::cout << "Syntax : " << argv[0] << " <level>" << std::endl;
        return 1;
    }

    int level;

    level = get_string(argv[1]);
    Harl harl;

    switch (level) 
    {
        case 0:
            harl.complain("debug");
        case 1:
            harl.complain("info");
        case 2:
            harl.complain("warning");
        case 3:
            harl.complain("error");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }

    return 0;
}

