#include <iostream>
#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <sstream>


class PhoneBook 
{
    private:
    Contact contacts[8];
    int index;
    int contactCount;

    public:
    void addContact();
    void initIndex();
    void displayContacts();
    void initContactCount();
    bool isSpace(const std::string& str);
};
