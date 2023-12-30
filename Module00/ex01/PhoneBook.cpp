#include "PhoneBook.hpp"

void PhoneBook::initIndex() 
{
    index = 0;
}

void PhoneBook::initContactCount() 
{
    contactCount = 0;
}

bool PhoneBook::isSpace(const std::string& str)
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) 
    {
        if (std::isspace(*it)) 
        {
            return true;
        }
    }
    return false; 
}

void PhoneBook::addContact() 
{
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string phone;
        std::string secret;
        std::cout << "Enter first name: \n";
        std::getline(std::cin, name);
        if (std::cin.eof()) 
        {
            return;
        }
        std::cout << "Enter last name: \n";
        std::getline(std::cin, lastname);
        if (std::cin.eof()) 
        {
            return;
        }
        std::cout << "Enter nickname: \n";
        std::getline(std::cin, nickname);
        if (std::cin.eof()) 
        {
            return;
        }
        std::cout << "Enter phone number: \n";
        std::getline(std::cin, phone);
        if (std::cin.eof()) 
        {
            return;
        }
        std::cout << "Enter darkest secret : \n";
        std::getline(std::cin, secret);
        if (std::cin.eof())
        {
            return;
        }

        if (name.empty() || lastname.empty() || nickname.empty() || phone.empty() || secret.empty() || std::cin.eof()) 
        {
            std::cout << "One or more fields are empty. Contact not added. Please try again." << std::endl;
            return;
        }

        if (isSpace(name) || isSpace(lastname) || isSpace(nickname) || isSpace(phone) || isSpace(secret))
        {
            std::cout << "One or more fields contain spaces or tabs. Contact not added. Please try again." << std::endl;
            return;
        }

        
        if (index == 8) 
        {
            index = 0;
        }
        
        contacts[index].setFirstName(name);
        contacts[index].setLastName(lastname);
        contacts[index].setNickname(nickname);
        contacts[index].setPhoneNumber(phone);
        contacts[index].setDarkestSecret(secret);
        index++;
        std::cout << "Contact added: " << name << std::endl;
        if (contactCount < 8) 
        {
            contactCount++;
        }
}

void PhoneBook::displayContacts() 
{
    std::cout << "|" << std::setw(10) << std::right << "Index";
    std::cout << "|" << std::setw(10) << std::right << "First Name";
    std::cout << "|" << std::setw(10) << std::right << "Last Name";
    std::cout << "|" << std::setw(10) << std::right << "Nickname" << "|" << std::endl;
    int i = 0;

    while (i < contactCount) 
    {
        std::string firstName = contacts[i].getFirstName();
        std::string lastName = contacts[i].getLastName();
        std::string nickname = contacts[i].getNickname();
        
        if (firstName.length() > 10) firstName = firstName.substr(0, 9) + ".";
        if (lastName.length() > 10) lastName = lastName.substr(0, 9) + ".";
        if (nickname.length() > 10) nickname = nickname.substr(0, 9) + ".";

        std::cout << "|" << std::setw(10) << std::right << i;
        std::cout << "|" << std::setw(10) << std::right << firstName;
        std::cout << "|" << std::setw(10) << std::right << lastName;
        std::cout << "|" << std::setw(10) << std::right << nickname << "|" << std::endl;
        i++;
    }

    int contactIndex;
    std::string input;
    std::cout << "Please enter the index of the contact to display: \n";
    std::getline(std::cin, input);
    if (std::cin.eof()) 
    {
        return;
    }
    std::istringstream validIndex(input);
    if (input.length() == 1 && std::isdigit((int)input[0])) 
    {
        validIndex >> contactIndex;

    }
    else 
    {
        std::cout << " Invalid index. Please try again or exit the program." << std::endl;
        return;
    }



    if (contactIndex >= 0 && contactIndex < index) 
    {
        std::cout << "First name : " << contacts[contactIndex].getFirstName() << std::endl;
        std::cout << "Last name : " << contacts[contactIndex].getLastName() << std::endl;
        std::cout << "Nickname : " << contacts[contactIndex].getNickname() << std::endl;
        std::cout << "Phone number : " << contacts[contactIndex].getPhoneNumber() << std::endl;
        std::cout << "Darkest secret : " << contacts[contactIndex].getDarkestSecret() << std::endl;
    } 
    else 
    {
        std::cout << "The contact index is incorrect" << std::endl;
    }
}

