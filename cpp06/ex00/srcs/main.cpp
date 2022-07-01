#include "../incs/TypeConversion.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Wrong argument!" << std::endl;
        return 1;
    }
    std::cout << TypeConversion(av[1]) << std::endl;
}