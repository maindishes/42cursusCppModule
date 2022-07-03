#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    // stringPTR = &str;
    std::string &stirngREF = str;

    std::cout << "stringPTR memory address: " << stringPTR << std::endl;
    std::cout << "stringREF memory address: " << &stirngREF << std::endl;

    std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF : " << stirngREF << std::endl;

    return (0);
}