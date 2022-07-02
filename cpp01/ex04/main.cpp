#include "ReplaceStr.hpp"

int main(int argc, char **argv)
{
    ReplaceStr rp;
    if (argc != 4)
        std::cout << "Usage : ./replaced [filename] [Str1] [Str2]" << std::endl;
    else
        rp.replaceStr(argv[1], argv[2], argv[3]);
}
