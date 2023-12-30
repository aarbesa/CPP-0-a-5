#include "File.hpp"
#include <fstream>
#include <iostream>


File::File(std::string filename1, std::string& string1, std::string& string2) 
{
	filename = filename1;
	s1 = string1;
	s2 = string2;
}

void File::replaceLine(std::ofstream& outputFile, std::string& line) 
{
    size_t startPos = 0;
    size_t pos = line.find(s1, startPos);
    while (pos != std::string::npos) 
    {
        outputFile << line.substr(startPos, pos - startPos) << s2;
        startPos = pos + s1.length();
        pos = line.find(s1, startPos);
    }
    outputFile << line.substr(startPos) << '\n';
}

void File::writeAndReplace()
{
	std::ifstream inputFile(filename);
    if (!inputFile) 
    {
        std::cout << "Unable to open file" << std::endl;;
        return;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile) 
    {
        std::cerr << "Error creating output file: " << outputFilename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) 
    {
        replaceLine(outputFile, line);
    }
    std::cout << "Replacement completed. Result written to " << outputFilename << std::endl;
}


