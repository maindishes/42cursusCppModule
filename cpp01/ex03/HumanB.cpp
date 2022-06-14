#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
: _name(name), _weapon(NULL) {}

HumanB::HumanB(const std::string &name, Weapon *weapon)
: _name(name), _weapon(weapon) {}

// HumanB::~HumanB()
// {
// }

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}