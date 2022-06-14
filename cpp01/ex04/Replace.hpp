#pragma once
#ifndef REPLACE_CLASS_HPP
# define REPLACE_CLASS_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replace
{
    private:
        std::ifstream ifs;
        std::ofstream ofs;
        std::string   s_find;
        std::string   s_replace;
    public:
        Replace();
        ~Replace();
        void transForm(std::string& line, std::string const& s_find, std::string const& s_replace);
        void replace(std::string const& filename, std::string const& s_find, std::string const& s_replace);
};
#endif
