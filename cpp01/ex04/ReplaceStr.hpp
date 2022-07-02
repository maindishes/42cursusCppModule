#pragma once
#ifndef REPLACESTR_HPP
# define REPLACESTR_HPP

# include <iostream>
# include <fstream>
# include <string>

class ReplaceStr
{
private:
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		s1;
	std::string		s2;

public:
	ReplaceStr();
	~ReplaceStr();
	bool	openFile( std::string f );
	void	replaceStr( std::string f, std::string s1, std::string s2 );
};

#endif
