#ifndef TEST_H
# define TEST_H

#include <iostream>
#include <string>

class Test
{
    private:
        std::string s1;
    public:
        void change(std::string &s1);
        std::string couts1();
        // Test(int &s1): s1(0) {}
};
#endif



