#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string> // getline(), compare(), length(), begin(), end(), replace()
# include <sstream> // ?
# include <iomanip> // std::setw()
# include <cstdlib> // atoi
class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phoen_number;
        std::string darkest_secret;
    public:
        void GetContactInfo();
        void ShowContact(int idx);
        std::string GetName();
        std::string GetLastName();
        std::string GetNickName();
};
#endif
