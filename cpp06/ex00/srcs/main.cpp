#include "../incs/TypeConversion.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        try
        {
            TypeConversion k(av[1]);
            // TypeConversion k = TypeConversion(av[1]);

            k.toChar();
            k.toInt();
            k.toFloat();
            k.toDouble();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
    {
        std::cerr << "Invalid Input" << std::endl;
    }
}

// #include <cstdlib>
// #include <iostream>
// int main(int ac, char **av)
// {
//     const char *kk = "999.99999999";
//     double k = atof(kk);
//     double a = 1000;
//     std::cout << static_cast<int>(k) << std::endl;
//     std::cout << (k) << std::endl;
// }