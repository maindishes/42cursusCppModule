#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string str;
    if (argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
        return (0);
    }
    for (int i=1; i<argc; i++)
    {
        str = argv[i];
        int k=0;
        while(str[k])
        {
            str[k] = std::toupper(str[k]);
            k++;
        }
	std::cout << str;
    }
    std::cout << std::endl;
    return (0);
}
