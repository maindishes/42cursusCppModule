#include "Weapon.hpp"

Weapon::Weapon(const std::string &type): _type(type) 
{
}

// Weapon::Weapon() : _type("") {}


const std::string& Weapon::getType(void) const
{
    return (_type);
}

void Weapon::setType(const std::string& type)
{
    _type = type;
}

// Weapon::~Weapon() {}
