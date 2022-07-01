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
    if (_input.length() == 1 && !isdigit(_input.at(0)))
}
