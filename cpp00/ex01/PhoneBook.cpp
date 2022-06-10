#include "PhoneBook.hpp"

void PhoneBook::Add(int index)
{
	contacts[index].GetContactInfo();
}

void PhoneBook::Search()
{
	int select;
	Table table;
	std::string str;

	table.PrintTable(contacts);
	std::cout << "Select a contact for details : ";
	std::cin >> str;
	std::stringstream(str) >> select;
	table.PrintContact(contacts, select);
}