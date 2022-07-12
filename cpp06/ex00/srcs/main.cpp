#include "../incs/TypeConversion.hpp"

void checkArg(std::string str)
{
	int dot = 0;
	int plus = 0;
	int minus = 0;
	int f = 0;
  
	if (str.empty())
		throw TypeConversion::InvalidInputException();
	for (int i = 0; i < static_cast<int>(str.size()); i++)
	{
		if (str[i] == '.')
			dot++;
		else if (str[i] == '+')
			plus++;
		else if (str[i] == '-')
			minus++;
		else if (str[i] == 'f')
			f++;
	}
	if (dot > 1 || plus > 1 || minus > 1 || f > 2)
		throw TypeConversion::InvalidInputException();
	if (plus && minus)
		throw TypeConversion::InvalidInputException();
	if (f == 2 && str.compare("inff") && str.compare("+inff") && str.compare("-inff"))
		throw TypeConversion::InvalidInputException();
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        try
        {
            TypeConversion k(av[1]);
            checkArg(av[1]);
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

// #include <iostream>
// #include <cstdlib>
// #include <bitset>

// int main()
// {
// 	double t = atof("999.99999999");
// 	double tt = atof("1000");

// 	printf("%f %f\n", t, tt);
// 	std::cout << t << " " << tt << std::endl;
// 	std::cout << static_cast<int>(t) << std::endl;
// 	std::cout << "bit: " << std::bitset<sizeof(double)>(t) << std::endl;
// 	std::cout << static_cast<int>(tt) << std::endl;
// 		std::cout << "bit: " << std::bitset<sizeof(double)>(tt) << std::endl;
// 	std::cout << sizeof(double) << std::endl;
// }