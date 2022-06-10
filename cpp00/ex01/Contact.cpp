#include "Contact.hpp"

void Contact::GetContactInfo()
{
    std::cout << "Please insert contact info..." << std::endl;
    std::cout << "First Name : ";
    std::cin >> first_name;    
    std::cout << "Last Name : ";
    std::cin >> last_name;    
    std::cout << "NickName : ";
    std::cin >> nickname;    
    std::cout << "Phone Number : ";
    std::cin >> phoen_number;    
    std::cout << "darkest_secret : ";
    std::cin >> darkest_secret;
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