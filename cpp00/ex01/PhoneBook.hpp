#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "Table.hpp"
# include <iomanip> // std::setw()
# include <cstdlib> // atoi
# include <iostream>
# include <string>

class PhoneBook
{
    private:
        Contact contacts[8];
    
    public:
        void Add(int index);
        void Search(void);
};
#endif 