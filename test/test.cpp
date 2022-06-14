#include "test.hpp"


void Test::change(std::string &s1)
{
    std::cout << "test : change -----" << std::endl;
    s1="123123";
}
std::string Test::couts1()
{
    std::cout << "test : cout ------" << std::endl;
    return (s1);
}

int main()
{
    std::string str;
    str = "testing";
    Test t;
    t.change(str);
    std::cout << t.couts1() << std::endl;
    // std::cout << t.s1 << std::endl;
}