#include "../incs/TypeConversion.hpp"

TypeConversion::TypeConversion(): _Type(TypeConversion::doubleType)
{}

TypeConversion::TypeConversion(const char *input)
{
    setType(input);
}
TypeConversion::TypeConversion(const TypeConversion &rhs)
: _Type(rhs._Type), _literal(rhs._literal)
{
}

TypeConversion &TypeConversion::operator=(const TypeConversion& rhs)
{
    //if (this != &rhs)
    _Type = rhs._Type;
    _literal = rhs._literal;
    return *this;
}

TypeConversion::~TypeConversion() {}

void TypeConversion::setType(const char *input)
{
    const std::string str = input;
    _literal = atof(input);

    if (_literal == 0 && !isdigit(input[0]) && input[1])
        throw TypeConversion::InvalidInputException();
    if (_literal == 0 && !isdigit(input[0]) && !input[1])
    {
        _Type = TypeConversion::charType;
        _literal = input[0];
    }
    else if (str.find(".") != std::string::npos)
    {
        if (str.find("f") != std::string::npos)
            _Type = TypeConversion::floatType;
        else
            _Type = TypeConversion::doubleType;
    }
    else
        _Type = TypeConversion::intType;
}
const char *TypeConversion::InvalidInputException::what() const throw()
{
    return ("INVALID INPUT. PlEASE INPUT NUMERIC OR CHARACTER VALUE.");
}
void TypeConversion::toDouble(void) const
{
    std::cout << "double: " << _literal;
    if (static_cast<int>(_literal) == _literal)
        std::cout << ".0";
    std::cout <<  std::endl;
}

void TypeConversion::toFloat(void) const
{
    std::cout << "float: " << static_cast<float>(_literal);
    if (static_cast<int>(_literal) == _literal)
        std::cout << ".0";
    std::cout << "f"<< std::endl;
}

void TypeConversion::toInt(void) const
{
    if(_literal <= std::numeric_limits<int>::max() && _literal >= std::numeric_limits<int>::min())
        std::cout << "int: " << static_cast<int>(_literal) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
}

void TypeConversion::toChar(void) const
{
    // if (_literal == static_cast<int>(_literal))
    // {
    if (_literal < 0 || _literal > 127)
        std::cout << "char: impossible" << std::endl;
    else if  (_literal <= 31 || _literal == 127)
        std::cout << "char: Non displayable" << std::endl;
    else if (static_cast<int>(_literal) == -2147483648 )
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: " << "'" << static_cast<char>(_literal) << "'" << std::endl;
    // }
    // else
        // std::cout << "char: " << "'" << static_cast<char>(_literal) << "'" << std::endl;
        // std::cout << "char: impossoble" << std::endl;
}