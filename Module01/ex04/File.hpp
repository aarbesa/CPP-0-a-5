#ifndef FILE_HPP
#define FILE_HPP

#include <string>
#include <iostream>

class File 
{
	std::string filename;
	std::string s1;
	std::string s2;

public:
    File(std::string filename1, std::string& string1, std::string& string2);
	void writeAndReplace();
	void replaceLine(std::ofstream& outputFile, std::string& line);
};

#endif
