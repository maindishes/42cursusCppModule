#include "../incs/TypeConversion.hpp"

TypeConversion::TypeConversion() {}

TypeConversion::TypeConversion(const TypeConversion &rhs)
:_input(rhs._input),_type(rhs._type)
{
}
TypeConversion &TypeConversion::operator=(const TypeConversion& rhs)
{
    //if (this != &s) ㅇㅣ게  이게 필요하나?
    _type = rhs.getType();
    _input = getInput();
    return(*this);
}
TypeConversion::~TypeConversion() {}

std::string TypeConversion::getInput() const
{
    return(_input);
}
int TypeConversion::getType() const
{
    return (_type);
}

TypeConversion::TypeConversion(const std::string s)
: _input(s)
{
    _type = N;
    if (this->_input.length() == 1 && !isdigit(this->_input.at(0)))
        this->_type = C;
}

int TypeConversion::toInt() const
{
    int temp;
    if (this->_type == C)
        temp = static_cast<int>(this->_input.at(0));
    else
    {
        try
        {
            temp = std::stoi(_input);
        }
        catch(const std::exception& e)
        {
            throw(ImpossibelException());
        }
    }
    return (temp);
}

char TypeConversion::toChar() const
{
    char temp;
    if(this->_type == C)
    {
        try
        {
            if (this->_input.at(0) < 32 || this->_input.at(0) > 126) // 출력가능한 char range 32~126
                throw NonDisplayException();
            temp = this->_input.at(0);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
    {
        try
        {
            temp = static_cast<char>(std::stoi(this->_input));
        }
        catch(const std::exception& e)
        {
            throw ImpossibelException(); // 문자열
        }
        // 범위 넘어가는것들
        if (temp < 32 || temp > 126)
            throw NonDisplayException();
    }
    return (temp);
}

float TypeConversion::toFloat() const
{
    float temp;
    if (_type == C)
        temp = static_cast<float>(this->_input.at(0));
    else
    {
        try
        {
            temp = std::stof(this->_input);
        }
        catch(const std::exception& e)
        {
            //문자열
            throw (ImpossibelException());
        }
        
    }
    return (temp);
}

double TypeConversion::toDouble() const
{
    double ret;
    if (_type == C)
        ret = static_cast<double>(_input.at(0));
    else
    {
        try
        {
            ret = static_cast<double>(std::stof(_input));
        }
        catch(const std::exception& e)
        {
            //문자열
            throw (ImpossibelException());
        }
    }
    return (ret);
}

const char * TypeConversion::NonDisplayException::what() const throw()
{
    return ("Non displayable");
}

const char * TypeConversion::ImpossibelException::what() const throw()
{
    return ("Impossible");
}

std::ostream &operator<<(std::ostream &os, TypeConversion const &s)
{
    try
    {
        os << "char : " << s.toChar() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        os << "int : " << s.toInt() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        os << "float : " << s.toFloat();
        if (s.toFloat() - static_cast<int>(s.toFloat()) == 0)
            os << ".0";
        os << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        os << "double : " << s.toDouble();
        if (s.toDouble() - static_cast<int>(s.toDouble()) == 0)
            os << ".0";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return os;
}

