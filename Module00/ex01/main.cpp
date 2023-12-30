#include "PhoneBook.hpp"
#include "Contact.hpp"


int main() 
{
    PhoneBook phoneBook;
    std::string command;

    phoneBook.initIndex();
    phoneBook.initContactCount();
    while (1) 
    {
    
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") 
        {
            phoneBook.addContact();
        } 
        else if (command == "SEARCH") 
        {
            phoneBook.displayContacts();
        } 
        else if (command == "EXIT") 
        {
            std::cout << "You have exited the program. See u soon !\n";
            return (1);
        }
        else 
        {
            std::cout << "Not a input. Please try again. \n";
        }
        if (std::cin.eof()) 
        {
            std::cout << "You have exited the program. See u soon !\n";
            return (1);
        }
    }
    return (0);
}