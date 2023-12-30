#include "File.hpp"

int main(int argc, char* argv[]) 
{
    if (argc != 4) 
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

	if (s1.empty()) 
    {
        std::cerr << "string (s1) cannot be empty." << std::endl;
        return (1);
    }

    File replace(filename, s1, s2);
    replace.writeAndReplace();

    return 0;
}
