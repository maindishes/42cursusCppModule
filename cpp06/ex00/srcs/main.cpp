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
