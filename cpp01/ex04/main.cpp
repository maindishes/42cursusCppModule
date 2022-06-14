#include "Replace.hpp"
// #include <iostream>
// #include <fstream>
// #include <string>

// void transForm(std::string& line, std::string const& s_find, std::string const& s_replace)
// {
//     std::string::size_type pos;
//     pos = line.find(s_find);
//     while (pos != std::string::npos)
//     {
//         line.erase(pos,s_find.length());
//         line.insert(pos, s_replace);
//         pos = line.find(s_find, pos + s_replace.length());
//     }
// }

// void replace(std::string const& filename, std::string const& s_find, std::string const& s_replace)
// {
//     std::ifstream in(filename);
//     std::ofstream out(filename + ".replace",std::ofstream::out | std::ofstream::trunc);
//     std::string line;

//     if (!in || !out)
//     {
//         if (in)
//             in.close();
//         else if (out)
//             out.close();
//         std::cerr << "Error : open fail" << std::endl;
//         return ;
//     }

//     while (std::getline(in, line))
//     {
//         transForm(line,s_find,s_replace);
//         out << line << std::endl;
//     }
//     in.close();
//     out.close();
// }

int main(int argc, char **argv)
{
    Replace rp;
    if (argc != 4)
        std::cout << "Usage : ./replaced [filename] [Str1] [Str2]" << std::endl;
    else
        rp.replaceStr(argv[1], argv[2], argv[3]);
}
