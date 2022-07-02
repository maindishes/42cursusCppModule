#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip> // std::setw()
# include <cstdlib> // atoi
# include <iostream>
# include <string>

class PhoneBook
{
    private:
        Contact contacts[8];
        std::string TruncateContact(std::string info);

    public:
        void Add(int index);
        void Search(void);

        void PrintTable(Contact contacts[8]);
        void PrintContact(Contact contacts[8], int select);
        void inputError();
};
#endif 