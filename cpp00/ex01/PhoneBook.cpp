#include "PhoneBook.hpp"

void PhoneBook::Add(int index)
{
	contacts[index].GetContactInfo();
}

void PhoneBook::Search()
{
	int select;

	std::string str;

	PrintTable(contacts);
	std::cout << "Select a contact for details : ";
	std::cin >> str;
    if (std::cin.fail() || std::cin.eof()) 
    {
		std::cout << "Bad Input" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::stringstream(str) >> select;
	PrintContact(contacts, select);
}

std::string PhoneBook::TruncateContact(std::string info)
{
    std::string str;

    if (info.size() > 10)
    {
        info[9] = '.';
        str = info.substr(0,10);
        info = str;
    }
    return (info);
}

void PhoneBook::PrintTable(Contact contacts[8])
{
    std::cout << std::setw(11) << "Index|";
    std::cout << std::setw(11) << "Name|";
    std::cout << std::setw(11) << "Last Name|";
    std::cout << std::setw(11) << "Nickname|" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << TruncateContact(contacts[i].GetName()) << "|";
        std::cout << std::setw(10) << TruncateContact(contacts[i].GetLastName()) << "|";
        std::cout << std::setw(10) << TruncateContact(contacts[i].GetNickName()) << "|";
        std::cout << "\n";
    } 
    std::cout << std::endl;
}

void PhoneBook::PrintContact(Contact contacts[8], int select)
{
    if (select >0 && select < 9)
    {
        if (contacts[select - 1].GetName().empty())
            std::cout << "Contact is empty" << std::endl;
        else
            contacts[select - 1].ShowContact(select);
    }
    else
        std::cout << "Invalid contact index" << std::endl;
}
