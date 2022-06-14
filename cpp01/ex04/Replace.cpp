#include "Replace.hpp"

Replace::Replace() {}

Replace::~Replace() {}

void Replace::transForm(std::string& line, std::string const& s_find, std::string const& s_replace)
{    
    std::string::size_type pos;
    pos = line.find(s_find);
    while (pos != std::string::npos)
    {
        line.erase(pos,s_find.length());
        line.insert(pos, s_replace);
        pos = line.find(s_find, pos + s_replace.length());
    }

}

void Replace::replaceStr(std::string const& filename, std::string const& s_find, std::string const& s_replace)
{
    // std::ifstream ifs(filename);
    this->ifs.open(filename,std::ifstream::in);
    // std::ofstream ofs(filename + ".replace",std::ofstream::out | std::ofstream::trunc);
    this->ofs.open(filename + ".replace",std::ofstream::out | std::ofstream::trunc);

    std::string line;

    if (!ifs.is_open() || !ofs.is_open())
    {
        if (ifs.is_open())
            ifs.close();
        else if (ofs.is_open())
            ofs.close();
        std::cerr << "Error : open fail" << std::endl;
        return ;
    }

    while (std::getline(ifs, line))
    {
        transForm(line,s_find,s_replace);
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
}