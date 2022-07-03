#include "Contact.hpp"

void inputErrorHandling() 
{
	if (std::cin.fail() || std::cin.eof()) {
		std::cout << "Bad Input" << std::endl;
		exit(EXIT_FAILURE);
	}
}
int inputNumber(std::string s)
{
    int i =0;
    while(s[i])
    {
        if (isdigit(s[i]) == 0)
            return -1;
        i++;
    }
    return 1;
}

void Contact::GetContactInfo()
{
    std::string temp;
    int checkN;

    std::cout << "Please insert contact info..." << std::endl;
    std::cout << "First Name : ";

    std::cin.ignore(); // 버퍼 비우는용도.

    std::getline(std::cin, temp);
    this->first_name = temp;
    inputErrorHandling();
    
    std::cout << "Last Name : ";
    std::getline(std::cin, temp);
    this->last_name = temp;
    inputErrorHandling();
    
    std::cout << "NickName : ";
    std::getline(std::cin, temp);
    this->nickname = temp;
    inputErrorHandling();

    while(1)
    {
        std::cout << "Phone Number : ";
        std::getline(std::cin, temp);
        this->phoen_number = temp;
        inputErrorHandling();
        checkN = inputNumber(phoen_number);
        if (checkN == 1)
            break;
        std::cout << "Please input only Number" << std::endl;
    }

    std::cout << "darkest_secret : ";
    std::getline(std::cin, temp);
    this->darkest_secret = temp;
    inputErrorHandling();
    std::cout << std::endl;    
}

void Contact::ShowContact(int idx)
{
    std::cout << std::setw(10) << "Contact : " << idx << "\n";
    std::cout << std::setw(10) << "First Name : " << first_name << "\n";
    std::cout << std::setw(10) << "Last Name : " << last_name << "\n";
    std::cout << std::setw(10) << "Nickname : " << nickname << "\n";
    std::cout << std::setw(10) << "Phone Number : " << phoen_number << "\n";
    std::cout << std::setw(10) << "Darkest Secret : " << darkest_secret << "\n";
    std::cout << std::endl;
}

std::string Contact::GetName()
{
    return (first_name);
}
std::string Contact::GetLastName()
{
    return (last_name);
}
std::string Contact::GetNickName()
{
    return (nickname);
}