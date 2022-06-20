#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    int contacts=0;
    std::string cmd;
    PhoneBook   book;

    std::cout << "--------------------Start PhoneBook--------------------" << std::endl;
    while (1)
    {
        std::cout << "[ command: ADD, SEARCH, EXIT ] : ";
		std::cin >> cmd;
		if (std::cin.eof())
			break ;
		std::cout << std::endl;
		if (cmd == "ADD")
		{
			book.Add(contacts);
			contacts++;
			if (contacts == 8)
				contacts = 0;
		}
		else if (cmd == "SEARCH")
			book.Search();
		else if (cmd == "EXIT")
			break ;
		else
             std::cout << "This Command does not exist." << std::endl;
	}
	return (0);
}